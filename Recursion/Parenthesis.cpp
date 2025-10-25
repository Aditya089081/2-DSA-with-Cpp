// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]
 

// Constraints:

// 1 <= n <= 8

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void parenthesis(vector<string>&ans,string &temp,int n,int left,int right){
        if(left+right == 2*n){
            ans.push_back(temp);
            return;
        }
        if(left<n){
            temp.push_back('(');
            parenthesis(ans,temp,n,left+1,right);
            temp.pop_back();
        }
        if(left>right){
            temp.push_back(')');
            parenthesis(ans,temp,n,left,right+1);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        parenthesis(ans,temp,n,0,0);
        return ans;
    }
}