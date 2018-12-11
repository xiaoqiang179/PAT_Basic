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
bool pdprime(ll n){
    if(n==2){
        return true;
    }
    if(n==1){
        return false;
    }
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[1010]={0},len,n,i;
    cin>>n>>len;
    if(len>n){
        printf("404\n");
        return 0;
    }
    for(i=0;i<n;i++){
        scanf("%1d",&arr[i]);
    }
    int flag=0;
    for(i=len-1;i<n;i++){
        ll num=0;
        char out[20]={0},idx=0;
        for(int j=i-len+1;j<=i;j++){
            num*=10;
            num+=arr[j];
            out[idx++]=arr[j]+'0';
        }
        //cout<<num<<endl;
        if(pdprime(num)){
            cout<<out<<endl;
            flag=1;
            break;
        }
    }
    if(!flag){
        printf("404\n");
    }
    return 0;
}

