#include <iostream>
#include <algorithm>
using namespace std;

int n, k, tmp, sum[100004],ret = -10000004;

int main(void) {

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		sum[i] = sum[i - 1] + tmp;
	}
	
	for (int i = k; i <= n; i++)
	{
        ret = max(ret, (sum[i] - sum[i-k]));
	}

	cout << ret;
}