class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(temp.empty())   //if the stack is empty we will push the input string
                temp.push(s[i]);
            else if ((temp.top()=='(' && s[i]==')')|| (temp.top()=='{' && s[i]=='}')|| (temp.top()=='[' && s[i]==']')) {  
                temp.pop(); // this condition will check whether the starting parentheses has any matching closing parentheses. If yes then they will be popped out 
            }
            else {
                temp.push(s[i]); //after the first condition stack becomes empty so this will continue the process
            }
        }
        if(temp.empty()){
            return true;
        }
        return false;
    }
};