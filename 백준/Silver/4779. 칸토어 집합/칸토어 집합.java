import java.util.Scanner;

public class Main {

    public static void cantor(char[] arr, int start, int end) {
        if (end - start < 3) return;

        int third = (end - start) / 3;
        // 가운데 부분 공백 처리
        for (int i = start + third; i < start + 2 * third; i++) {
            arr[i] = ' ';
        }

        // 좌우 구간 재귀 처리
        cantor(arr, start, start + third);
        cantor(arr, start + 2 * third, end);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int n = sc.nextInt();
            int size = (int) Math.pow(3, n);
            char[] arr = new char[size];

            // 초기화: 전부 '-'
            for (int i = 0; i < size; i++) {
                arr[i] = '-';
            }

            cantor(arr, 0, size);

            // 출력
            System.out.println(new String(arr));
        }
    }
}
