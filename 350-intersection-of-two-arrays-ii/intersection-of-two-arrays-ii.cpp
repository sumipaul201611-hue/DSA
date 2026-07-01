class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          map<int,int>mp;
          vector<int>arr;

        for(auto x : nums1){
            mp[x]++;
        }

        for(auto x : nums2){
            if(mp[x]>0){
                arr.push_back(x);
                mp[x]--;
            }
        }
        return arr;
    }
};