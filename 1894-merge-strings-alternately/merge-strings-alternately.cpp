class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        string s="";

        int l=0,r=0;

       while(l<m || r<n){
         if(l<m){
            s+=word1[l];
            l++;
         }

         if(r<n){
            s+=word2[r];
            r++;
         }
       }

        return s;
    }
};