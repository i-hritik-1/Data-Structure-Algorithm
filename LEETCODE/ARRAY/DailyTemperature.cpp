#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer;
        int start = 0;
        while(start < n-1){
            if(temperatures[start] < temperatures[start + 1]){
                answer.push_back(1);
                start++;
            }
            else if(temperatures[start] >= temperatures[start+1] && start !=n-2){
                int curr_idx = start;
                int curr_temp = temperatures[start];
                int max_temp = curr_temp;
                while(curr_temp >= temperatures[curr_idx] && curr_idx < n-1){
                    curr_idx++;
                    max_temp = max(max_temp,temperatures[curr_idx]);
                }
                if(max_temp > curr_temp){
                    answer.push_back(curr_idx - start);
                }
                else{
                    answer.push_back(0);
                }
                start++;
             }
             else{
                 answer.push_back(0);
                 start++;
             }
        }
        answer.push_back(0);
        return answer;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    Solution obj;
    vector<int> ans = obj.dailyTemperatures(v);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}