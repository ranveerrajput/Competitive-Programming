//https://codeforces.com/contest/1504/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
  ll ntc;
  cin >> ntc;
  while (ntc--) {
    string s;
    cin >> s;
    ll count = 0;
    for (ll i = 0; i < s.size(); i++) {
      if (s[i] == 'a') count++;
    }
    if (count == s.size()) cout << "NO" << endl;
    else {
      ll index = -1;
      for (ll i = 0; i < s.size(); i++) {
        if (s[i] != 'a') {
          index = i;
          break;
        }
      }
      ll pos = -1;
      int f = 0;
      if (index >= (s.size() / 2)) {
        pos = s.size() - index - 1;
      } else {
        f = 1;
        pos = s.size() - index - 1;
      }

      string ans = "";
      for (ll i = 0; i < s.size(); i++) {
        if (i == pos && f == 0) {
          ans += "a";
          ans += s[i];
        }
        else if (i == pos && f == 1) {

          ans += s[i];
          ans += "a";
        }
        else ans += s[i];

      }

      cout << "YES" << endl;
      cout << ans << endl;

    }

  }



  return 0;
}