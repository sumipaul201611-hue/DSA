class Solution {
public:

    void subset(vector<int>&nums,vector<int>&ans,int i,   vector<vector<int>>&allSubset){
        if(i==nums.size()){
            allSubset.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        subset(nums,ans,i+1,allSubset);
        ans.pop_back();
        subset(nums,ans,i+1,allSubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>allSubset;
         vector<int>ans;

         subset(nums,ans,0,allSubset);

         return allSubset;
    }
};