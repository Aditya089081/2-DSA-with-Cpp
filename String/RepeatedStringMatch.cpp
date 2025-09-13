// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

 

// Example 1:

// Input: a = "abcd", b = "cdabcdab"
// Output: 3
// Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.
// Example 2:

// Input: a = "a", b = "aa"
// Output: 2
 

// Constraints:

// 1 <= a.length, b.length <= 104
// a and b consist of lowercase English letters.
#include<bits/stdc++.h>
using namespace std;
void LPSarray(vector<int>&lps,string pattern){
    int first =0 ;
    int second =1;
    
    while(second<pattern.size()){

        if(pattern[first]==pattern[second]){
            lps[second] = first+1;
            first++;
            second++;
        }else {
            if (first == 0) {
                second++;
            } else {
                first = lps[first - 1];
            }
        }
    }

    }

int ReapeatedString(vector<int> lps, string text,string pattern){
    int first =0 ;
    int second =0;
    if(text == pattern){
        return 1;
    }
    while(first<text.size()){

        if(text[first]==pattern[second]){
            first++;
            second++;
        }else{
            if(second == 0){
                first++;
            }else{
                second = lps[second-1];
            }
        }
        if(second == pattern.size()){
            return 1;
        }
    }
    return 0;
}
int main(){
    string text = "abcd";
    string pattern = "cdabcdab";
    vector<int>lps(pattern.size(),0);
    LPSarray(lps,pattern);
    int rotated = 1;
    string temp = text;
    while(temp.size()<pattern.size()){
        rotated++;
        temp+=text;
    }
    if(ReapeatedString(lps,temp,pattern)){
        cout<<"Present at "<<rotated;
    }else if(ReapeatedString(lps,temp+text,pattern)){
        cout<<"present at "<<rotated+1;
    }else{
        cout<<"Not present";
    }
}