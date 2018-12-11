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
    int n,m;
    ll rec[2000]={0};
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            ll in;
            cin>>in;
            rec[j]+=in;
        }
    }
    ll maxs=0;
    for(int i=1;i<=n;i++){
        maxs=max(maxs,rec[i]);
    }
    cout<<maxs<<endl;
    int flag=0;
    for(int i=1;i<=n;i++){
        if(rec[i]==maxs){
            if(flag){
                printf(" ");
            }
            flag=1;
            cout<<i;
        }
    }
    return 0;
}

