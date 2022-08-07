#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
      vector<int>result;
      for(int i = 1;i<=n;i++){
        result.push_back(i);
      }
      sort(begin(result),end(result),[](int a,int b){
        string x = to_string(a);
        string y = to_string(b);
        return x.compare(y) < 0;
      });
      return result;
    }
    
    void printVector(vector<int>vect){
        for(auto num : vect){
            cout<<num<< ' ';
        }
        return;
    }
};
int main(){
    //sort numbers from 1 to n in lexical order
    int n;cin>>n;
    Solution s;
    vector<int>result = s.lexicalOrder(n);
    s.printVector(result);
    
}
