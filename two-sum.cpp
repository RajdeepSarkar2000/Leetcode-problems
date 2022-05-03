


class Solution {
public:
//Hash table method
  vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> map;
      vector<int> pairs;
      int n = nums.size();
      for(int i = 0; i < n; i++) {
          int temp = target - nums[i];
          if(map.find(temp) != map.end()) {
              pairs.push_back(map.find(temp)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<int, int>(nums[i], i));
      }
      return pairs;
};
//Two pointer methods 
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int x = 0, y = n - 1; // here x and y are two pointers where x is starting from from front and y from end of the input string
    sort(nums.begin(), nums.end());
    while(x < y) {
      int temp = nums[x] + nums[y];
      if (temp == target)
       break;
      else if (temp > target)
       y--;
      else
       x++;
    }
    return {x, y};
};

};