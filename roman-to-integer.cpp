class Solution {
public:
    int conversion(char r ){
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
    }
    int romanToInt(string s) {
        int ans =0;
        int n= s.length();
        for(int i=0;i<n;i++){
            int s1 = conversion(s[i]);
            if(i + 1 < n){
                int s2 = conversion(s[i+1]);
                if(s1>=s2){
                    ans = ans + s1;
                }
                else {
                    ans = ans + s2 - s1;
                    i++;
                }
            }
            else {
                ans = ans + s1;
            }
        }
        return ans;
    }
};