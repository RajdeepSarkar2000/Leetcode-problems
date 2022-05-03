class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
     unordered_map<int,int> left, right, count;
     int degree = 0;
     int n= nums.size();
    for (int i = 0; i <n; i++) {
        int x = nums[i];
        if (left.find(x)==left.end()) 
            left.insert({x,i});
        right[x]=i;
        count[x]++;
        degree=max(degree,count[x]);
    }
    int ans = n;
    for (auto &it:count) {
        if (it.second == degree) {
            ans = min(ans, right[it.first] - left[it.first] + 1);
        }
    }
    return ans;
    }
};