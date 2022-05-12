class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        if(!n){ 
            ans.push_back(1);
            return ans;
        }
        int carry = 0, tmp;
        tmp = digits[n-1]+1;
        
        for(int i=n-2;i>=0;i--){
            if(tmp>=10){
                carry = 1;
                tmp = tmp%10;
            }
            ans.push_back(tmp);
            tmp = carry+digits[i];
            carry = 0;
        }
        if(tmp>=10){
            ans.push_back(tmp%10);
            carry = 1;
        }
        else{
            ans.push_back(tmp);
        }
        if(carry == 1){
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
 }



};