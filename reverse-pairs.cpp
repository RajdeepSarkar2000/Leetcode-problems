//brute force  
class Solution {
public:
    int reverse(int n){
        int reverse =0 ;
        while(n>0){
            reverse= reverse*10 + n%10;
            n=n/10;
        }
        return reverse;
    }
    
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(reverse(nums[i])>2* nums[j])
                    ans++;
            }
        }
        return ans;
    }
};

class Solution {
public:
  int Merge(vector < int > & nums,long long int low,long long int mid,long long int high) {
  int total = 0;
  int j = mid + 1;
  for (int i = low; i <= mid; i++) {
    while (j <= high && nums[i] > 2*(long long int)nums[j]) {
      j++;
    }
    total += (j - (mid + 1));
  }

  vector < int > arr;
  int left = low, right = mid + 1;

  while (left <= mid && right <= high) {

    if (nums[left] <= nums[right]) {
      arr.push_back(nums[left++]);
    } else {
      arr.push_back(nums[right++]);
    }
  }

  while (left <= mid) {
    arr.push_back(nums[left++]);
  }
  while (right <= high) {
    arr.push_back(nums[right++]);
  }

  for (int i = low; i <= high; i++) {
    nums[i] = arr[i - low];
  }
  return total;
}
int MergeSort(vector < int > & nums,long long int low,long long int high) {

  if (low >= high) return 0;
  int mid = (low + high) / 2;
  int inv = MergeSort(nums, low, mid);
  inv += MergeSort(nums, mid + 1, high);
  inv += Merge(nums, low, mid, high);
  return inv;
}
int reversePairs(vector < int > & arr) {
  return MergeSort(arr, 0, arr.size() - 1);
}
};