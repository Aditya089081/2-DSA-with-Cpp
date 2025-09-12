// Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

// Note: A palindrome string is a sequence of characters that reads the same forward and backward.

// Examples:

// Input: s = "abc"
// Output: 2
// Explanation: Add 'b' and 'c' at front of the above string to make it palindrome: "cbabc"
// Input: s = "aacecaaaa"
// Output: 2
// Explanation: Add 2 a's at front of the above string to make it palindrome: "aaaacecaaaa"
// Constraints:
// 1 ≤ s.size() ≤ 106
// s consists of lowercase english alphabets


#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
  public:
  void LPSarray(vector<int> &lps,string s){
      int first = 0;
      int second = 1;
      while(second<s.size()){
          if(s[first]==s[second]){
              lps[second] = first+1;
              first++;
              second++;
          }
          else{
              if(first ==0){
                  second++;
              }else{
                  first = lps[first-1];
              }
          }
      }
  }
    int main() {
        // code here
        string s = "";
        string s1 = s;
        reverse(s1.begin(),s1.end());
        string s2 = s+'$'+s1;
        // cout<<s2;
        vector<int> lps(s2.size(),0);
        LPSarray(lps,s2);
        return s.size()-lps[s2.size()-1];
    }
};
