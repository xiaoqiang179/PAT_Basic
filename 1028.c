#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct data{
    char name[6];
    int year;
    int month;
    int day;
};
int main(){
    struct data max={"haha",2014,9,7},min={"haha",1814,9,5},temp;
    int n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d/%d/%d",temp.name,&temp.year,&temp.month,&temp.day);
        if(temp.year==1814){
            if(temp.month==9&&temp.day<6){
                continue;
            }
            else if(temp.month<9){
                continue;
            }
        }
        if(temp.year<1814){
            continue;
        }
        if(temp.year>2014){
            continue;
        }
        if(temp.year==2014){
            if(temp.month==9&&temp.day>6){
                continue;
            }
            else if(temp.month>9){
                continue;
            }
        }
        count++;
        if(temp.year<max.year){
            max=temp;
        }
        else if(temp.year==max.year){
            if(temp.month<max.month){
                max=temp;
            }
            else if(temp.month==max.month&&temp.day<max.day){
                max=temp;
            }
        }
        if(temp.year>min.year){
            min=temp;
        }
        else if(temp.year==min.year){
            if(temp.month>min.month){
                min=temp;
            }
            else if(temp.month==min.month&&temp.day>min.day){
                min=temp;
            }
        }
    }
    if(count==0){
        printf("0");
        return 0;
    }
    printf("%d %s %s",count,max.name,min.name);
    return 0;
}


