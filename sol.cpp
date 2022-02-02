#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x;
		cin >> x;
		// simply print the previous number, the next number, and the current x itself
		cout << x - 1 << " " << x << " " << x + 1 << '\n';	
	}
	return 0;
}
