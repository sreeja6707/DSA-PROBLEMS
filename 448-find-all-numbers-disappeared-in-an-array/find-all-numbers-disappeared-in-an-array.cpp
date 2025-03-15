class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            int n1=abs(nums[i]);
            if(nums[n1-1]>0){
                nums[n1-1]=-nums[n1-1];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                res.push_back(i+1);
            }
        }
        return res;
    }
};