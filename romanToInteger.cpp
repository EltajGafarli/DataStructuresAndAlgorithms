#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
      map<char,int>roman{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
      int n = s.length();
      int sum = 0;
      int lastdigit = 0;
      for(int i = n - 1;i >= 0;i--){
        int digit = roman[s[i]];
        if(digit < lastdigit){
          sum -= digit;
        }else{
          sum += digit;
        }

        lastdigit = digit;
      }
      return sum;
    }
};

int main(){
    Solution s;
    cout<<s.romanToInt("MCMXCIV");   //   MCMXCIV = 1994
}
