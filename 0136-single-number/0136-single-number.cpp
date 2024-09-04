class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>hash;
       int A;
       for(auto it:nums)
       {
        hash[it]++;
       }
       for(auto i:hash)
       {
        if(i.second==1)
        {
           A= i.first;
        }
      
       }
       return A;
    }
};