class Solution {
public:
    bool isValid(string s) {
       stack<char>k;
       for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            k.push(s[i]);
        }
        else{
            if(k.empty()){
                return false;
            }
            char x = k.top();
            k.pop();
            if((x=='(' && s[i]==')') || (x=='{' && s[i]=='}') || (x=='[' && s[i]==']')){
                continue;
            }
            else{
                return false;
            }
        }
       }
       return k.empty(); 
    }
};