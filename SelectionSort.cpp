#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n,k;
  cin >> n;
  ll a[n+1];
  for(int  i= 0 ; i < n ; i++) cin >> a[i];

  ll i,j, min_indx;
  for(int i = 0 ; i < n-1 ; i++)
  {
    min_indx = i;
    for(int j = i + 1 ; j < n ; j++)
    {
      if(a[j] < a[min_indx])
      {
        min_indx = j;
      }
    }
    swap(a[i],a[min_indx]);
  }
  for(int i = 0 ; i < n ; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ou.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*ll tc;
    cin >> tc;
    while(tc--)
    {
      solve();  
    }*/
    solve();
    
    return 0;
}