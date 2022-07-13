class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int maxSum=0;
        int n=nums.length();
        for(int i=0;i<n;++i){
            int sum=0;
            for(int j=i;j<n;++j){
                sum+=nums[j];
                if(sum==k){
                   maxSum=max(maxSum,j-i+1); 
                }
            }
        }
        return maxSum;
    }
};