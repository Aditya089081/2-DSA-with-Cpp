// Given an m x n matrix, return all elements of the matrix in spiral order.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0,right = col-1,bottom = row-1,left = 0;
        while(top<=bottom && left<=right){
            for(int i = left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i = right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;}
            if(left<=right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;}

        }
    return ans;
    }
};