#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool prime(ll n){
    if(n==1) return false;
    else if(n==2 || n==3) return true;
    else if(n%2==0) return false;
    else {
        for(ll i=3;i<=sqrt(n);i+=2){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
  ll test_case;
  cin>>test_case;
  while(test_case--){
     ll n;
     cin>>n;

     prime(n);
     if(prime(n)){
        cout<<"Prime num"<<endl;
     }
     else{
        cout<<"Not prime num"<<endl;
     }
  }

  return 0;
}
