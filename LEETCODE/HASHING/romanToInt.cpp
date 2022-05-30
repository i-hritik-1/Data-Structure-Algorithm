#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<int,string> mp{{"I",1},{"IV",4},{"V",5},{"IX",9},{"X",10},{"XL",40},{"L",50},{"XC",90},{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000}};
        int ans = 0;
        for(int i=0; i<s.length(); i++){
          char keys = s[i];
          char curr = s[i];
          auto it = mp.upper_bound(keys);
          it--;
          if(mp.find(keys) != mp.end()){
              int curr = it->second;
              ans = ans + curr;
          }
        //   else{

        //   }
        }
        return ans;

    }
};



int main()
{
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.romanToInt(s)<<endl;
    
    return 0;
}