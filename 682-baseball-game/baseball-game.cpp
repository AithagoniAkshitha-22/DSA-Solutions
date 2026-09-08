class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>stack;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                stack.pop();
            }
            else if(operations[i]=="D"){
                stack.push(stack.top()*2);
            }
            else if(operations[i]=="+"){
                int a=stack.top();
                stack.pop();

                int b=stack.top();
                stack.push(a);
                stack.push(a+b);
            }
            else{
                stack.push(stoi(operations[i]));
            }
        }
        int total=0;
        while(!stack.empty()){
            total=total+stack.top();
            stack.pop();
        }
        return total;
    }
};