class Solution {
public:
    int powerMod(long long int base, long long int power){
      long long int mod = 1337;
      long long int pow = 1;
      while(power){
         if(power & 1) pow = (pow * base) % mod;
         base = (base * base) % mod;
         power >>= 1;
      }
      return pow;
   }
   int superPow(int a, vector<int>& b) {
      if(b.size() == 0) return 1;
      int last = b.back();
      b.pop_back();
      return (powerMod(superPow(a, b), 10) * powerMod(a, last)) % 1337;
   }
};