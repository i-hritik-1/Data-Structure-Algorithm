// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//        int n = nums.size();
//         set<vector<int>> s;
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
        
//         for(int i=0; i<n-2; i++)
//         {
//             int start = i+1, end = n-1;
//             while(start < end)
//             {
//                 int sum = nums[start] + nums[end];
//                 if(nums[i]  == -sum)
//                 {
//                     s.insert({nums[i],nums[start],nums[end]});
//                     start++;
//                     end--;
//                 }
//                 else if(sum > -nums[i])
//                 {
//                     end--;
//                 }
//                 else
//                 {
//                     start++;
//                 }
//             }
//         }
        
//         for(auto it:s)
//         {
//             ans.push_back(it);
//         }
        
//         return ans;
//     }
// };