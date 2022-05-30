#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
     string getLowerLetter(string s){
         for(int i = 0; i<s.length(); i++){
             if(s[i]>= 'A' && s[i] <='Z'){
                  s[i] = tolower(s[i]);
             }
         }
         return s;
     }
     string removeUnwantedChar(string s){
         string temp;
         for(int i=0; i<s.length(); i++){
             if(isalpha(s[i])){
                 temp.push_back(s[i]);
             }
             else if(s[i] >= '1' && s[i] <= '9'){
                 temp.push_back(s[i]);
             }
         }
         return temp;        
    }

public:
    bool isPalindrome(string s) {
        s = getLowerLetter(s);
        s = removeUnwantedChar(s);
        cout<<s<<endl;
        int st = 0, e = s.length()-1;  //

        while(st <= e){
            if(s[st] != s[e]){
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};

// Input: s = "A man, a plan, a canal: Panama"
int main()
{
    string s; 
    cin>>s;
    Solution  obj;
    cout<<obj.isPalindrome(s)<<endl;
    
    return 0;
}