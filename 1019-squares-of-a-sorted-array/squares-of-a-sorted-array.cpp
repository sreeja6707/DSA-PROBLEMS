class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int l=0;
        int r=n-1;
        int id=n-1;
        while(l<=r){
            int lS=nums[l]*nums[l];
            int rS=nums[r]*nums[r];

            if(lS>rS){
                res[id]=lS;
                l++;
            }
            else{
                res[id]=rS;
                r--;
            }
            id--;
        }
        return res;
    }
};