//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void sums(vector<int> arr,int i,vector<int> &v,int N,int sum){
        
        if(i==N){
            // cout<<sum;
            v.push_back(sum);
            return;
        }
        
        sums(arr,i+1,v,N,sum);
        sums(arr,i+1,v,N,sum+arr[i]);
        
    }
    vector<int> subsetSums(vector<int> &arr, int N)
    {
        // Write Your Code here
        int sum = 0;
        vector<int> v;
        sums(arr,0,v,N,0);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends