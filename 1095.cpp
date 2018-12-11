#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
typedef long long ll;
struct node{
    int type,pos,id,date,score;
};
struct nodes{
    int pos,cnt;
};
bool cmp1(node a,node b){
    if(a.type==b.type){
        if(a.score==b.score){
            if(a.pos==b.pos){
                if(a.date==b.date){
                    return a.id<b.id;
                }
                else{
                    return a.date<b.date;
                }
            }
            else{
                return a.pos<b.pos;
            }
        }
        else{
            return a.score>b.score;
        }
    }
    return a.type>b.type;
}
bool cmp2(nodes a,nodes b){
    if(a.cnt==b.cnt){
        return a.pos<b.pos;
    }
    return a.cnt>b.cnt;
}
int main(){
    node arr[10010]={0};
    int n,m,i,j,ca=1;
    cin>>n>>m;
    getchar();
    for(i=0;i<n;i++){
        char type;
        scanf("%c%3d%6d%3d %d",&type,&arr[i].pos,&arr[i].date,&arr[i].id,&arr[i].score);
        getchar();
        //cout<<"---  "<<type<<endl;
        if(type=='T'){
            arr[i].type=1;
        }
        else if(type=='A'){
            arr[i].type=2;
        }
        else{
            arr[i].type=3;
        }
    }
    for(j=0;j<m;j++){
        int type;
        cin>>type;
        if(type==1){
            char in;
            cin>>in;
            int fi=0;
            if(in=='T'){
                fi=1;
            }
            if(in=='A'){
                fi=2;
            }
            if(in=='B'){
                fi=3;
            }
            int cnt=0;
            sort(arr,arr+n,cmp1);
            printf("Case %d: %d %c\n",ca++,type,in);
            for(i=0;i<n;i++){
                if(arr[i].type==fi){
                    printf("%c%03d%06d%03d %d\n",in,arr[i].pos,arr[i].date,arr[i].id,arr[i].score);
                    cnt++;
                }
            }
            if(cnt==0){
                printf("NA\n");
            }
        }
        else if(type==2){
            int pos;
            cin>>pos;
            int pc=0,sc=0;
            for(i=0;i<n;i++){
                if(arr[i].pos==pos){
                    pc++;
                    sc+=arr[i].score;
                }
            }
            printf("Case %d: %d %d\n",ca++,type,pos);
            if(pc==0){
                 printf("NA\n");
            }
            else{
                printf("%d %d\n",pc,sc);
            }
        }
        else{
            int date;
            cin>>date;
            nodes rec[1010]={0};
            int cnt=0;
            for(i=0;i<n;i++){
                if(arr[i].date==date){
                    rec[arr[i].pos].cnt++;
                    rec[arr[i].pos].pos=arr[i].pos;
                }
            }
            sort(rec,rec+1000,cmp2);
            printf("Case %d: %d %06d\n",ca++,type,date);
            for(int i=0;i<1000;i++){
                if(rec[i].cnt!=0){
                    printf("%03d %d\n",rec[i].pos,rec[i].cnt);
                    cnt++;
                }
            }
            if(cnt==0){
                printf("NA\n");
            }
        }
    }
    system("pause");
    return 0;
}

