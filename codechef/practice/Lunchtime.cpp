#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll ntc;
	cin >> ntc;
	while (ntc--) {
		ll n;
		cin >> n;
		vector<ll> v;
		vector<ll> l(n, 0);
		vector<ll> r(n, 0);

		for (ll i = 0; i < n; i++) {
			ll ele;
			cin >> ele;
			v.push_back(ele);
		}

		stack<ll> s;

		for (ll i = 0; i < n; i++) {
			if (s.empty()) s.push(v[i]);
			else {
				ll count = 0;
				ll j = i;
				while (s.top() == v[j] && j < n) {
					count++;
					j++;
				}
				l[i] = count;
				i = j;
				if (s.top() > v[i]) s.push(v[i]);
				else {
					s.pop();
					s.push(v[i]);
				}
			}
		}


		//checking for the right greater number
		stack<ll> ss;

		for (ll i = n - 1; i >= 0; i--) {
			if (ss.empty()) ss.push(v[i]);
			else {
				ll count = 0;
				ll j = i;
				while (ss.top() == v[j] && j >= 0) {
					count++;
					j--;
				}
				r[i] = count;
				i = j;
				if (ss.top() > v[i]) ss.push(v[i]);
				else {
					count = 0;
					if (ss.top() == v[i]) {
						count++;
						r[i] = count;
					} else {
						ss.pop();
						ss.push(v[i]);
					}

				}
			}
		}

		// for (ll i = 0; i < n; i++) {
		// 	cout << l[i] + r[i] << " ";
		// }
		// cout << endl;







		for (auto ele : l) cout << ele << " ";
		cout << endl;
		for (auto ele : r) cout << ele << " ";



	}



	return 0;
}