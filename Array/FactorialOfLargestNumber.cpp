// Given an integer n, find its factorial. Return a list of integers denoting the digits that make up the factorial of n.

// Examples:

// Input: n = 5
// Output: [1, 2, 0]
// Explanation: 5! = 1*2*3*4*5 = 120
// Input: n = 10
// Output: [3, 6, 2, 8, 8, 0, 0]
// Explanation: 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800
// Input: n = 1
// Output: [1]
// Explanation: 1! = 1 
// Constraints:
// 1 ≤ n ≤ 103



// User function template for C++
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        int carry = 0;
        vector<int> ans(1,1);
        while(n>1){
            for(int i =0;i<ans.size();i++){
                int sum = ans[i]*n+carry;
                ans[i] = sum%10;
                carry = sum/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            n--;
        }
        // reverse(ans.begin(),ans.end()); --use it 
        return ans;
    }
};