#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[3];
		int dragon = 0;
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
			dragon += a[i];
		}
		int b[3];
		int sloth = 0;
		for (int i = 0; i < 3; i++) {
			cin >> b[i];
			sloth += b[i];
		}
		// simply follow the rules in the problem statement
		string ans = "TIE";
		if (dragon > sloth) {
			ans = "DRAGON";
		} else if (sloth > dragon) {
			ans = "SLOTH";
		} else {
  		for (int i = 0; i < 3; i++) {
  			if (a[i] > b[i]) {
  				ans = "DRAGON";
  				break;
  			} else if (b[i] > a[i]) {
  				ans = "SLOTH";
  				break;
  			}
  		}
  	}
		cout << ans << '\n';
	}
	return 0;
}
