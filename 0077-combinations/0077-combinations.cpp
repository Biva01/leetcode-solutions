class Solution {
public:
    void helper(int i,int k,int n,vector<int>&nums,vector<int>&v,
        vector<vector<int>>&ans){
		
		//base case
        if(i>n || k==0){
            if(k==0)
                ans.push_back(v);
            return;
        }
		
		//pick up the element
        v.push_back(nums[i]);
        helper(i+1,k-1,n,nums,v,ans);
        v.pop_back();
        
		//dont pick up the element
        helper(i+1,k,n,nums,v,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v,nums(n+1,0);
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            nums[i]=i;
        }
        helper(1,k,n,nums,v,ans);
        return ans;
    }
};