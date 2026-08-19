class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
 int len=nums.size();
 int j=1;
 int c=0;
 while(i<j && j<len)
 {
  if(nums[i]==nums[j])
  {
    j++;
  }
    else if(nums[i]!=nums[j])
    {
      swap(nums[i+1],nums[j]);
      c++;
      j++;
      i++;
    }

  
 }

return c+1;
  
    }  
};