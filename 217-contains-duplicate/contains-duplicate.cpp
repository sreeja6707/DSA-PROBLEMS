class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int j=0;j<n-1;j++){
            if(nums[j]==nums[j+1]){
                    return true;
            }
        }
        return false;
    }
};