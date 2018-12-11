#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ba=1;
        ll tt=n;
        while(tt){
            ba*=10;
            tt/=10;
        }
        int flag=0;
        for(ll k=1;k<10;k++){
            if((n*n*k)%ba==n){
                cout<<k<<" "<<n*n*k<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"No"<<endl;
        }
    }
    return 0;
}

