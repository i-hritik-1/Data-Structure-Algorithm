// class Solution {
// public:
//     int threeSumClosest(vector<int>& nums, int target) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         int sum = 0;
//         int mini = INT_MAX;
        
//         for(int i=0; i<n-2; i++)
//         {
//             int start = i+1;
//             int end = n-1;
//             while(start < end)
//             {
//                 int curr_sum = nums[i]+nums[start] + nums[end];
//                 if(abs(target - curr_sum) < mini)
//                 {
//                     mini = abs(target - curr_sum);
//                     sum = curr_sum;
//                 }
                
//                 if(curr_sum > target)
//                 {
//                     end--;
//                 }
//                 else
//                 {
//                     start++;
//                 }
//             }
//         }
//         return sum;
 
//     }
// };