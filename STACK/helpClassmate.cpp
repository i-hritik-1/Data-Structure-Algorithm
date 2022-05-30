// // https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1/#

// class Solution{
    
//     public:
//     vector<int> help_classmate(vector<int> arr, int n) 
//     { 
//         vector<int> ans;
//         stack<int> st;
//         for(int i=n-1; i>=0; i--)
//         {
//             if(st.size() == 0)
//             {
//                 ans.push_back(-1);
//             }
//             else if(st.size() > 0 && st.top() < arr[i])
//             {
//                 ans.push_back(st.top());
//             }
//             else if(st.size() > 0 && st.top() >= arr[i])
//             {
//                 while(st.size() > 0 && st.top() >= arr[i])
//                 {
//                     st.pop();
//                 }
                
//                 if(st.size() == 0)
//                 {
//                     ans.push_back(-1);
//                 }
//                 else
//                 {
//                     ans.push_back(st.top());
//                 }
//             }
//             st.push(arr[i]);
//         }
        
//         reverse(ans.begin(), ans.end());
//         return ans;
//         // Your code goes here
//     } 
// };
