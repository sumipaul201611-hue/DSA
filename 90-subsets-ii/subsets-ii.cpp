class Solution {
public:
    void subSet(vector<int>& nums,vector<int>& ans,int i,    vector<vector<int>>&allSubset){

        if(i==nums.size()){
            allSubset.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        subSet(nums,ans,i+1,allSubset);

        ans.pop_back();

        int idx=i+1;

        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }

          subSet(nums,ans,idx,allSubset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>>allSubset;
         vector<int>ans;

         subSet(nums,ans,0,allSubset);
         return allSubset;
    }
};