// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:

// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:

// Input: num1 = "0", num2 = "0"
// Output: "0"
 

// Constraints:

// 1 <= num1.length, num2.length <= 104
// num1 and num2 consist of only digits.
// num1 and num2 don't have any leading zeros except for the zero itself.
 
// Seen this question in a real interview before?
// 1/5
// Yes
// No
// Accepted
// 856,579/1.6M
// Acceptance Rate
// 51.9%
// Topics
// icon
// Companies
// Similar Questions
// Discussion (84)

// Choose a type



#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        int first = num1.size() - 1;
        int second = num2.size() - 1;
        string ans;
        int carry = 0;

        while (first >= 0 || second >= 0) {
            int n1 = (first >= 0) ? num1[first] - '0' : 0;
            int n2 = (second >= 0) ? num2[second] - '0' : 0;

            int sum = n1 + n2 + carry;
            ans += (sum % 10) + '0';
            carry = sum / 10;

            first--;
            second--;
        }

        if (carry) {
            ans += carry + '0';
        }

        // reverse(ans.begin(), ans.end());    -- commented because of error
        return ans;
    }
};











// Read more












// Copyright © 2025 LeetCode. All rights reserved.