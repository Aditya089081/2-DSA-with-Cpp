// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]
 

// Constraints:

// class Solution {
// public:
//  void backtrack(vector<int>& nums, int index, vector<int>& temp, vector<vector<int>>& ans) {
//         ans.push_back(temp); // store the current subset

//         for (int i = index; i < nums.size(); i++) {
//             // skip duplicates
//             if (i > index && nums[i] == nums[i-1]) continue;

//             temp.push_back(nums[i]);
//             backtrack(nums, i+1, temp, ans);
//             temp.pop_back(); // backtrack
//         }
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end()); // sort to handle duplicates
//         vector<vector<int>> ans;
//         vector<int> temp;
//         backtrack(nums, 0, temp, ans);
//         return ans;
//     }
// };