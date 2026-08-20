class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=0;
        int carry=1;
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            sum=digits[i]+carry;
            digits[i]=sum%10;
            carry=sum/10;
        }
        if(carry==1){
            vector<int> temp(n+1,1);
            for(int i=1;i<=n;i++){
                temp[i]=digits[i-1];
            }
            return temp;
        }
        return digits;
    }
};