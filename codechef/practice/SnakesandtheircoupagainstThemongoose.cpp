#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll ntc;
	cin >> ntc;
	while (ntc--) {
		ll n;
		cin >> n;
		vector<vector<char>> v(2, vector<char> (n, '.'));

		//taking input
		for (ll i = 0; i < 2; i++) {
			//vector<char> d;
			for (ll j = 0; j < n; j++) {
				char ele;
				cin >> ele;
				v[i][j] = ele;

			}

		}


		ll vert = 0, hori = 0, r1 = 0, r2 = 0, col = 0, u = 0, d = 0;
		//u for chcking if already a wall present their by upper *
		//d for checking if already a wall present their by down *
		for (ll i = 0; i < 2; i++) {
			for (ll j = 0; j < n ; j++) {
				if (v[i][j] == '*' && v[i + 1][j] == '*') {
					r1++;
					r2++;
					if (r1 > 1 || r2 > 1) vert++;
					col++;
				}
				else if (v[i][j] == '*' && v[i + 1][j] != '*') {
					r1++;
					if (r1 > 1) {
						r1 = 0;
						j--;
						//if d is present then
						u = 1;
						if (d == 1) {
							d = 0;
							u = 0;
						}
						else vert++;


					}

				}
				else if (v[i][j] != '*' && v[i + 1][j] == '*') {
					r2++;
					if (r2 > 1) {
						r2 = 0;
						j--;
						//if u is present then
						d = 1;
						if (u == 1) {
							u = 0;
							d = 0;
						}
						else vert++;

					}

				}
			}
			break;
		}

		if (col >= 1 || (r1 >= 1 && r2 >= 1) ) hori++;
		cout << hori + vert << endl;;
	}

	return 0;
}



