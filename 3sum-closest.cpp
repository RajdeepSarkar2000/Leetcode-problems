class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int diff = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                int sum = nums[left] + nums[right] + nums[i];
                if(abs(target - sum)< diff){
                    ans = sum;
                    diff = abs(target - sum);
                }
                if(sum == target) return sum;
                else if(sum>target) right--;
                else left++;
            }
        }
        return ans;
    }
};