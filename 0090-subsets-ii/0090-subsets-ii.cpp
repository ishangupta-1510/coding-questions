class Solution {
public:
    void sub(int i,vector<int>& nums,set<vector<int>> &vec,int n,vector<int> v){
        if(i==n){
            sort(v.begin(),v.end());
            vec.insert(v);
            return;
        }
        v.push_back(nums[i]);
        sub(i+1,nums,vec,n,v);
        v.pop_back();
        sub(i+1,nums,vec,n,v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> vec;
        vector<int> v;
        int n = nums.size();
        sub(0,nums,vec,n,v);
        vector<vector<int>> ve;
         for (auto it = vec.begin(); it != vec.end(); it++) {
      ve.push_back( * it);
    }
        return ve;
    }
};