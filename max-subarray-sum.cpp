class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = -99999 ,sum =0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            if(max < sum)
                max=sum;
            if(sum<0)
                sum=0;
        }
        return max;
    }
};