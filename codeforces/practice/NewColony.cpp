//https://codeforces.com/problemset/problem/1481/B
//AC

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll ntc;
	cin >> ntc;
	while (ntc--) {
		ll n, k;
		cin >> n >> k;
		//taking array input
		vector<ll> v;
		for (ll i = 0; i < n; i++) {
			ll ele;
			cin >> ele;
			v.push_back(ele);

		}

		//logic
		if (k > 1000000) k = 1000000;
		ll flag = 0;
		ll ans = 0;
		if (n == 1) cout << -1 << endl;
		else {

			while (k > 0) {
				for (ll j = 0; j < n - 1; j++) {
					//  cout<<"juj"<<" "<<j<<endl;
					if (v[j] >= v[j + 1]) {
						if (j == n - 2) {
							flag = 1;


						}
						//  cout<<"j"<<" "<<j<<endl;
					}
					else {
						ans = j;
						v[j] = v[j] + 1;
						//cout << "update" << endl;
						k--;
						break;

					}

				}

// 			for(auto ele: v) cout<<ele<<" ";
// 			cout<<endl;
				if (flag == 1) {
					break;
				}
			}

			if (flag == 0) cout << ans + 1 << endl;
			else cout << -1 << endl;




		}


	}



	return 0;
}