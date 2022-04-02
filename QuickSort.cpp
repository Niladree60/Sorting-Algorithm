#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll partition(ll a[], ll low, ll high)
{
  ll pivot = a[high];
  ll i = low-1;

  for(int j = low ; j <= high - 1 ; j++)
  {
    if(a[j] < pivot)
    {
      i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[high]);
  return (i+1);
}

void quickSort(ll a[], ll low , ll high)
{
  if(low < high)
  {
    ll pi = partition(a,low,high) ;
    quickSort(a,low,pi-1);
    quickSort(a,pi+1,high);
  }
}

void solve()
{
  ll n;
  cin >> n;
  ll a[n+1];
  for(int i =0  ; i < n ; i++) cin >> a[i];

  quickSort(a,0,n-1);

  for(int i =0  ; i < n ; i++)
    cout << a[i] << " ";
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
