#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

	int n; 
    cin >> n;
	vector<int> len(n);
	
    long long total_length = 0;
	for (int i = 0; i < n; i++) {
		cin >> len[i];
		total_length += len[i];
	}

	sort(len.begin(), len.end()); 

	long long price = 0;
	for (int i = 0; i < n-1; i++) { 
		total_length -= len[i];
		price += (long long)len[i] * total_length; 
	}

	cout << price << '\n'; 
	return 0;
}
