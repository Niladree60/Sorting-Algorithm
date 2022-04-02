#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void merge(ll a[], ll l , ll m ,ll r)
{
  ll i,j,k;
  ll n1 = m-l+1;
  ll n2 = r-m;

  ll L[n1], R[n2];// initial subarray
  // copying initial subarray
  for(i = 0 ; i < n1 ; i++)
  {
    L[i] = a[l+i];
  }
  for(j = 0 ; j < n2 ; j++)
  {
    R[j] = a[m+1+j];
  }
  //initial index of first , second and marged subarray
  i  = 0 , j = 0 , k = l;
  // marging two subarrays
  while(i < n1 and j < n2)
  {
    if(L[i] <= R[j])
    {
      a[k] = L[i];
      i++;
    }
    else
    {
      a[k] = R[j];
      j++;
    }
    k++;
  }
  // copying remaining elements
  while(i < n1)
  {
    a[k] = L[i];
    i++;
    k++;
  }
  while(j < n2)
  {
    a[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(ll a[], ll l , ll r)
{
  if(l < r)
  {
    ll m = l + (r-l) / 2 ;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,m,r);
  }
}

void solve()
{
  ll n;
  cin >> n;
  ll a[n+1];
  for(int i =0  ; i < n ; i++) cin >> a[i];

  mergeSort(a,0,n-1);

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