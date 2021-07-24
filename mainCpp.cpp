/**
* @author: SheikhFoysal
* */
#include <algorithm>
#include <bits/stdc++.h>
 
#define     int          long long
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
	
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	vector<int>vec=gv(n);

	sort(all(vec));
	int res=n;

	for(int i=0; i<n; i++)
	{
		int d= upper_bound(all(vec), 2*vec[i])-vec.begin();
		res=min(res, n-d+i);
	}
	cout << res << endl;
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