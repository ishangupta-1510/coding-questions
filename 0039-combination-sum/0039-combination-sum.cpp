class Solution {
public:
    int i;
    void comb(vector<int> c,int i,int target,vector<vector<int>> &vec,vector<int> &v){
        
        if(i== c.size()){
            if(target == 0)
                vec.push_back(v);
            return;
        }
        if(target>=c[i]){
            v.push_back(c[i]);
            comb(c,i,target-c[i],vec,v);
            v.pop_back();
        }
        
        comb(c,i+1,target,vec,v);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> vec;
        vector<int> v;
        comb(candidates,i,target,vec,v);
        return vec;
    }
};