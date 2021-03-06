#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <queue>
#include <cstdio>
#include <string>
#include <vector>
#include <iomanip>
#include <cstring>
#include <iostream>
#include <deque>
#include <algorithm>
#define Memset(a,val) memset(a,val,sizeof(a))
#define PI acos(-1)
#define pb push_back
#define rt(n)       (i == n ? '\n' : ' ')
#define hi         printf("Hi----------\n")
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);
#define debug(x) cout<<"Debug : ---"<<x<<"---"<<endl;
#pragma comment(linker, "/STACK:1024000000,1024000000")
using namespace std;
typedef pair<int,int> PII;
typedef long long ll;
const int maxn=100000+5;
const int mod=1000000007;
const int INF=0x3f3f3f3f;
const double eps=1e-8;
int main(){
    int n,tmp;
    while (scanf("%d",&n)!=EOF) {
        if (n==1) {
            scanf("%d",&tmp);
            cout<<tmp<<endl;
            continue;
        }
        double ans=0;
        for (int i=0; i<n; i++) {
            scanf("%d",&tmp);
            if (i==0||i==n-1)
                ans+=tmp/2.0;
            else
                ans+=tmp/3.0;
        }
        printf("%.6f\n",ans);
    }
    return 0;
}
