#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n;
  cin>>n;
  vector<ll> v(n,0);
  for(ll i=2;i<=sqrt(n);i++){
      if(!v[i]){
         for(ll j=i*i;j<=n;j+=i){
            v[j]=1;
         }
      }
  }
  for(ll i=2;i<=n;i++){
     if(!v[i]){
        cout<<i<<" ";
     }
  }
  cout<<endl;
  return 0;
}
/*
   time complexity : O(nlog(log(n)));
   space complexity : O(n);
*/
