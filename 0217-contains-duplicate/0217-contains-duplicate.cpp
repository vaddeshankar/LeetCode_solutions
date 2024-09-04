class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto i:nums)
        {
           hash[i]=hash[i]+1;
        }
        for(auto it:hash)
        {
            if(it.second>1)
            {
                return true;
            }
        }
        return false;
    }
};