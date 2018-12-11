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
    string a,b;
    getline(cin, a);
    getline(cin, b);
    int rec[500]={0};
    a+=b;
    ll len=a.length();
    //set<char> s(a.begin(),a.end());
    for(int i=0;i<len;i++){
        if(rec[(int)a[i]]==0){
            cout<<a[i];
            rec[(int)a[i]]=1;
        }
    }
    return 0;
}

