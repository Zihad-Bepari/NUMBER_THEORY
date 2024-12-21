#include<bits/stdc++.h>
#define ll long long
ll mod=1e8;
using namespace std;

ll solve(ll base , ll n , ll mod){
   ll ans=1;
   while(n){
     if(!n%2){
        base=(base*base)%mod;
        n/=2;
     }
     else{
        ans=(ans*base)%mod;
        n--;
     }
   }
   return ans;
}
int main(){
  ll base,n;
  cin>>base>>n;
  cout<<solve(base,n,mod)<<endl;
  return 0;
}
