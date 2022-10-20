class Solution {
public:
    void func(vector<int> nums,int n,vector<vector<int>> &vec,vector<int> &v, map<int,int> &freq){
        if(v.size()>=n){
            vec.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(!freq[i]){
                v.push_back(nums[i]);
                freq[i] = 1;
                func(nums,n,vec,v,freq);
                freq[i] = 0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> v;
        map<int,int> freq;
        func(nums, nums.size(),vec,v,freq);
        return vec;
    }
};