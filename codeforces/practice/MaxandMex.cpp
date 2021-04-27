#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll ntc;
	cin >> ntc;
	while (ntc--) {
		ll n, k;
		cin >> n >> k;
		ll great = INT_MIN;
		ll ans = 0;

		vector<ll> v;
		unordered_map<ll, ll> umap;

		//taking array

		for (ll i = 0; i < n; i++) {
			ll ele;
			cin >> ele;
			if (ele > great) great = ele;
			v.push_back(ele);
			umap[ele] = i;

		}

		//loop for finidng mex of s
		//	ll mex = -1;
		vector<ll> m;
		for (ll i = 0; i <= 100000; i++) {
			if (umap.find(i) == umap.end()) {
				m.push_back(i);
			}
		}

		//cout << mex << endl;
		if (!m.size()) {
			//element are already present and now elements are going to add one after the another
			ans = k ;
		}
		else {

			ll i = 0;
			while (k > 0) {
				//cout<<"M"<<" "<<m[i]<<endl;
				if (i > m.size() - 1) {
					m.push_back(great + 1);
					ans += k;
					break;
				}
				ll element = ceil((m[i] + great) / 2.0);
				//	cout<<"element"<<" "<<element<<endl;
				if (umap.find(element) == umap.end() && element < great) {
					umap[element]++;
					k--;
					if (umap.find(m[i]) != umap.end()) i++;

				}
				else if (umap.find(element) == umap.end() && element > great) {
					ans += k;
					break;

				}
				else {
					break;
				}
			}



		}

		// for (auto ele : umap)
		// {
		// 	cout << ele.first << " ";
		// }
		//cout << endl;
		ans = ans + umap.size();
		cout << ans << endl;
		//cout << "----------" << endl;


	}




	return 0;
}