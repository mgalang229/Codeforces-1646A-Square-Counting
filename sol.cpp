#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	long long n, s;
	cin >> n >> s;
	if(s == 0) {
		cout << "0\n";
		return;
	}
	
	//a[1] + a[2] + ... + a[n+1] = s
	//0 <= a[i] < n or a[i] = n^2
	
	//a[1] + a[2] + a[3] = 12
	//12 / 3 = 4
	//4 + 4 + 4 = 12
	//answer: 3
	
	//a[1] + a[2] + a[3] + a[4] = 12
	//12 / 4
	//3
	//3 + 3 + 3 + 3 = 12
	//9 + 3 = 12
	//answer: 1
	
	// we must be able to divide s by n + 1, afterwards
	// the equal distribution of every a[i], where 1 <= i <= N + 1 (1-based)
	// can be observed, and from that we can combine the elements which would
	// add up to n^2 and this would equal to s / (n^2)
	cout << s / (n * n) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
