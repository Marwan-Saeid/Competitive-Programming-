#include <bits/stdc++.h>
#include <fstream>
using namespace std;

typedef long long ll;
typedef long double lld;

ll gcd(ll x, ll y) {
	  if (x == 0) return y;
	  if (y == 0) return x;
	  return gcd(y, x % y);
	}
bool isprime(ll n) {
	  if (n <= 1) return false;
	  if (n <= 3) return true;

	  if (n % 2 == 0 || n % 3 == 0) return false;

	  for (ll i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i+2) == 0)
		  return false;

	  return true;
}

bool prime[15000105];
void sieve(int n) {
	  for (ll i = 0; i <= n; i++) prime[i] = 1;
	  for (ll p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
		  for (ll i = p * p; i <= n; i += p)
			prime[i] = false;
		}
	  }
	  prime[1] = prime[0] = 0;
}

vector<ll> primelist;
bool __primes_generated__ = 0;

void genprimes(int n) {
	  __primes_generated__ = 1;
	  sieve(n + 1);
	  for (ll i = 2; i <= n; i++) if (prime[i]) primelist.push_back(i);
}

vector<ll> factors(ll n) {
	  if (!__primes_generated__) {
		cerr << "Call genprimes you dope" << endl;
		exit(1);
	  }
	  vector<ll> facs;

	  for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++) {
		if (n % primelist[i] == 0) {
		  while (n % primelist[i] == 0) {
			n /= primelist[i];
			facs.push_back(primelist[i]);
		  }
		}
	  }
	  if (n > 1) {
		facs.push_back(n);
	  }
	  sort(facs.begin(), facs.end());
	  return facs;
}

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
vector<string> sortStrings(vector<string>& arr) {

    // Use inbuilt sort to arrange strings
    sort(arr.begin(), arr.end());

    return arr;
}




int main() {
    /*freopen("startup.in", "r", stdin);

    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif */

    int t;
    cin >> t;
    while(t--){
        string p,s;
        cin >> p >> s;
        int connected=0;
        bool yes=1;
        int j=0;
        for(int i=0;i<p.size();i++){
            connected++;
            if(i==p.size()-1||p[i]!=p[i+1]){
                int num=0;
                for(;j<s.size();){
                    if(p[i]==s[j]){
                        num++;
                        j++;
                    }
                    else
                        break;
                }
                if(num<connected||num>connected*2){
                    yes=0;
                    break;
                }
                connected=0;
            }
        }
        if(!yes||j<s.size())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
