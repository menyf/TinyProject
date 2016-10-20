// Wrote by MenYifan on 2015-11-07 12:36:22
// Exe.Time 92ms Exe.Memory 1180K
/*
?????
    ?????????????????????????
    ??????????????????????unsorting array
    ????????1.???????a?????????????
                    2.??????
    ????????????????????????????????????????????????????????????????????-1
    
    ?????check()???????????a????????????????????????????a[]?asc[]??????????a[]?dsc[]???????a??????????a???????????????????

*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn=100050;
int n;
int a[maxn]= {};
int asc[maxn]={};
int dsc[maxn]={};
//????num???a????
bool check(int *num){
    for(int i=1;i<=n;i++)
        if(a[i]!=num[i]) return false;
    return true;
}
bool cmp(int x,int y){
    return x>y;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        asc[i]=a[i];
        dsc[i]=a[i];
    }
    sort(asc+1,asc+n+1);
    sort(dsc+1,dsc+n+1,cmp);

    if(n<3||(check(asc)&&check(dsc))){
        printf("-1\n");
        return 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]!=a[j]){
                swap(a[i],a[j]);
                if(!check(asc)&&!check(dsc)){
                    printf("%d %d\n",i,j);
                    return 0;
                }
                swap(a[i],a[j]);
            }
        }
    }
    printf("-1\n");
    return 0;
}