class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = INT_MIN;
        int n = s.length();
        for(int i=0;i<n;i++){
            set<int>arr;
            for(int j=i;j<n;j++){
                if(arr.find(s[j])!= arr.end()){
                    ans = max(ans, j-i);
                    break;
                }
                arr.insert(s[j]);
            }
        }
        return ans;
    }
};