#include <iostream>
#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
void solve()
{
	ll n, cnt = 0; cin >> n;
	string s; cin >> s;
    vector<ll> count;
    if(n == 1)
    {
        cout << "YES" << '\n';
        return;
    }
	for(int i=0;i<n;i++)
	{
	    if(s[i] == '1')
	        cnt++;
	    else
	    {
	        count.push_back(cnt);
	        cnt = 0;
	    }
	}
	if(s[n-1] == '1' && cnt > 0)
	    count.push_back(cnt);
	
	for(int i=0;i<count.size();i++)
	{
	    if(count[i] % 2 != 0)
	    {
	        cout << "NO" << '\n';
	        return;
	    }
	}
	cout << "YES" << '\n';
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) 
	{
		solve();
	}
	return 0;
}
