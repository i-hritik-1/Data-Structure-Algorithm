// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         unordered_set<int> s;
//         for(auto it:nums)
//         {
//             s.insert(it);
//         }
        
//         int smallest = 1;
        
//         for(auto it : s)
//         {
//             if(!(s.find(smallest) != s.end()))
//             {
//                 return smallest;
//             }
//             else
//             {
//                 smallest++;
//             }
//         }
//         return smallest;
//     }
// };