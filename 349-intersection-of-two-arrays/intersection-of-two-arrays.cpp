class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int>ans;
        map<int,int>mp;

        for(auto  x : nums1){
            mp[x]=1;
        }

        for(int y : nums2){
            if(mp[y]==1){
                ans.push_back(y);
                mp[y]=0;
            }
        }

        return ans;
    }
};