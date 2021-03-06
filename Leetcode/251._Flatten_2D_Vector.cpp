#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <queue>
#include <cstdio>
#include <string>
#include <vector>
#include <iomanip>
#include <bitset>
#include <cstring>
#include <iosfwd>
#include <deque>
#include <algorithm>
#define debug(x) cout<<"Debug : ---"<<x<<"---"<<endl;
#define debug2(x,y) cout<<"Debug : ---"<<x<<" , "<<y<<"---"<<endl;
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
struct RandomListNode {
  int label;
  RandomListNode *next, *random;
  RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};
class NestedInteger {
  public:
  // Return true if this NestedInteger holds a single integer, rather than a nested list.
  bool isInteger() const;

  // Return the single integer that this NestedInteger holds, if it holds a single integer
  // The result is undefined if this NestedInteger holds a nested list
  int getInteger() const;

  // Return the nested list that this NestedInteger holds, if it holds a nested list
  // The result is undefined if this NestedInteger holds a single integer
  const vector<NestedInteger> &getList() const;
};
struct Interval {
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e) {}
};
//// Answers below
typedef long long ll;
class Vector2D {
public:
  int x, y;
  vector<vector<int>> data;
  
  Vector2D(vector<vector<int>>& vec2d) {
    if(vec2d.empty()) return;
    y = 0;
    data = vec2d;
    for(int i = 0; i < data.size(); i++){
      if(!data.empty()) {
        x = i;
        return;
      }
    }
    x = 0;
  }

  int next() {
    return data[x][y++];
  }

  bool hasNext() {
    if(data.empty()) return false;
    if(y != data[x].size()) 
      return true;
    
    for(int i = x + 1; i < data.size(); i++) {
      if(!data[i].empty()) {
        x = i;
        y = 0;
        return true;
      }
    }
    return false;
  }
};
//// Answers above
int main(int argc, char *argv[]) {
  Solution *solution = new Solution();
  
}
  
