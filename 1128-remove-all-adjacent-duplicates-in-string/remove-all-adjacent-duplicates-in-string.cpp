class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>letter;
        for(int i=0;i<s.length();i++){
            if(!letter.empty() && letter.top()==s[i]){
                letter.pop();
            }
            else{
                letter.push(s[i]);
            }
        }
        string ans="";
        while(!letter.empty()){
            ans+=letter.top();
            letter.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};