/**
* @author: SheikhFoysal
* */
#include <bits/stdc++.h>
 
#define     ll          long long
#define     ld        	long double
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(nullptr)
#define     MOD         (int) 1000000007
#define     rep(i, n)   for (int i = 0; i < (int)n; i++)
#define     all(x)      (x).begin(), (x).end()
#define     sz           size
#define     precise(x)  cout << fixed << setprecision(x)
#define     MAX         (int) 100007 // 10^5
std::vector<int> gv(int n){std::vector<int> v(n);for(auto &x: v){std::cin>>x;}return v;}

using namespace std;

void solve()
{
	ll k,n,m;
	cin>>k>>n>>m;
	ll sum=0;
	for(int i=1; i<=m; i++)
	{
		sum += (i*k);
	}
	if(sum>n)
	{
		cout << (sum-n) << endl;
	}
	else
	{
		cout << "0" << endl;
	}

}

signed main()
{
fastio;

auto start = std::chrono::high_resolution_clock::now();

int t=1;
//cin>>t;
while(t--)
solve();

auto stop = std::chrono::high_resolution_clock::now();
auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
return 0;
}