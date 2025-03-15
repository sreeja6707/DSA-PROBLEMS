class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        vector<int>N=nums;
        sort(N.begin(),N.end());
        for(int i=0;i<n;i++){
            res[i]=lower_bound(N.begin(),N.end(),nums[i])-N.begin();
        }
        return res;
    }
};