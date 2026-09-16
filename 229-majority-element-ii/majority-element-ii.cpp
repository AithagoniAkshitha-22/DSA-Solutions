class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>m;
        vector<int>ans;
        int a=nums.size();
        int threshold=a/3+1;
        for(int i=0;i<a;i++){
            m[nums[i]]++;
            if(m[nums[i]]==threshold){
                ans.push_back(nums[i]);
            }
            if(ans.size()==2){
                return ans;
        
            } 
        }
        return ans; 
    }
};