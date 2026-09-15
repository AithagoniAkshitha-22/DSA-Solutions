class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>m;
        int a=nums.size();
        for(int i=0;i<a;i++){
            m[nums[i]]++;

            if(m[nums[i]]>a/2){
                return nums[i];
            }
        }
        return 0;
    }
};