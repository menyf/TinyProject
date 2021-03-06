#include <set>
#include <map>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <cstdio>
#include <string>
#include <vector>
#include <iomanip>
#include <bitset>
#include <cstring>
#include <iostream>
#include <iosfwd>
#include <deque>
#include <algorithm>
#define Memset(a,val) memset(a,val,sizeof(a))
#define PI acos(-1.0)
#define PB push_back
#define MP make_pair
#define rt(n)       (i == n ? '\n' : ' ')
#define hi         printf("Hi----------\n")
#define fre() freopen("data_in.txt","r",stdin); \
			  freopen("data_out.txt","w",stdout);
#define debug(x) cout<<"Debug : --- "<<x<<" ---"<<endl;
#define debug2(x,y) cout<<"Debug : --- "<<x<<" , "<<y<<" ---"<<endl;
#define debug3(x,y,z) cout<<"Debug : --- "<<x<<" , "<<y<<" , "<<z<<" ---"<<endl;
#pragma comment(linker, "/STACK:1024000000,1024000000")
using namespace std;
typedef pair<int,int> PII;
typedef long long ll;
const int mod=1000000007;
const int INF=0x3f3f3f3f;
const double eps=1e-8;
const int maxn=3145728+5;
char str[maxn];
int main(){
	str[0] = '*';
	int T;
	scanf("%d",&T);
	while (T--) {
		scanf("%s",str+1);
		int ans = 0;
		for (int i = 1 ; str[i] ; i++) {
			if (ans == 0 && (str[i] == 'w' || (str[i] == 'v' && str[i-1] == 'v'))) 
				ans ++;
			else if (ans == 1 && str[i] == 'y') 
				ans++;
			else if (ans == 2 && str[i] == 'h') 
				ans++;
		}
		if (ans == 3) 
			printf("Yes\n");
		else 
			printf("No\n");
	}
}