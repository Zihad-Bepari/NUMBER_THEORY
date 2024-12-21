#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n;
  cin>>n;
  for(ll i=2;i<=sqrt(n);i++){
     if(n%i==0){
        ll cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        cout<<i<<"^"<<cnt<<" , ";
     }
  }
  if(n>1) cout<<n<<"^"<<1<<endl;
  else cout<<endl;
  return 0;
}
/*
  Time Complexity: O(sqrt(n))
  Space Complexity: O(1)
*/
