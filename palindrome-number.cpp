class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        if(n<0 || (n%10 == 0 && n!=0)){
            return false;
        }
        int reverse = 0 ;
        while(n>reverse){
            reverse = (reverse*10) + (n%10);
            n=n/10;
        }
        return n== reverse || n== reverse/10;
    }
};
    