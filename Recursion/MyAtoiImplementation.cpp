// #include<bits/stdc++.h>
// class Solution {
// public:
//     int helper(string &s,int i,int sign,long long num){
//         if(i>=s.size() || !isdigit(s[i])){
//             return ((int)(sign)*(num));
//         }
//         num = num*10+(s[i]-'0');
//         if(sign*num>=INT_MAX) return INT_MAX;
//         if(sign*num<=INT_MIN) return INT_MIN;
//         return helper(s,i+1,sign,num);
//     }
//     int myAtoi(string s) {
//         int i = 0;
//         while(i<s.size()&&s[i]==' ') i++;
//         int sign = 1;
//         while(i<s.size() && (s[i] == '-'||s[i] == '+')){
//             sign = (s[i] == '-')?-1:1;
//             i++;
//         }
//         return helper(s,i,sign,0);
//     }
// };
