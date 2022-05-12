//brute force
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];}
        }
        return 0;
    }
};

//optimized 
class Solution {
    public :
    int findDuplicate(vector<int>&nums){
        int n=nums.size();
        int x = nums[0];
        int y=nums[0];
        do {
            x = nums[x];
            y=nums[nums[y]];
        }while(x!=y);
        y=nums[0];
        while(x!=y){
            x=nums[x];y=nums[y];
        }
        return x;
    }
};