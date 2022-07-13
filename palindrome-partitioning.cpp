class Solution {
public:
    bool isPalindrome(string s,int x,int y){
        while(x <= y){
            if(s[x++]! = s[y--])
                return false;
        }
        return true;
    }
    void setPalindrome(int index, string s, vector<string> &a, vector<vector<string>>& ans){
       if(index == s.size()){
           ans.push_back(a);
           return;
       }
       for(int i=index;i<s.size();++i){
           if(isPalindrome(s,index,i)){
               a.push_back(s.substr(index,i-index+1));
               setPalindrome(i+1,s,a,ans);
               a.pop_back();
           }
       }
    }


    vector<vector<string>> partition(string s) {
      vector<vector<string>>ans;
      vector<string>a;
      setPalindrome(0,s,a,ans);
      return ans;  
    }
};