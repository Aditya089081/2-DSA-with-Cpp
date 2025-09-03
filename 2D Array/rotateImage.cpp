// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
#include<iostream>
#include<vector>
using namespace std;
 
class Solution {
public:
    void transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    
    void reverse(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = n - 1;
            while (left < right) {
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
    void reverse1(vector<vector<int>>&matrix){
        int n = matrix[0].size()-1;
        int n1 = matrix.size()-1;
        for(int i =0;i<=n;i++){
            int start = 0,end = n1;
            while(start<end){
                swap(matrix[start][i],matrix[end][i]);
                start++;
                end--;
            }
        }
        reverse(matrix);
    }
    
    void rotate(vector<vector<int>>& matrix) {//90 degree
        transpose(matrix);
        reverse(matrix);
    }
    void rotate(vector<vector<int>>& matrix) { //180 degree
        // transpose(matrix);
        reverse1(matrix);
    }
};
void printMatrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    Solution sol;
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(matrix);
    cout<<endl;
    sol.rotate(matrix);
    printMatrix(matrix);
}