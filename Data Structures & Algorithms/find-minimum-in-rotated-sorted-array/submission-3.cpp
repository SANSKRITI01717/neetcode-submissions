class Solution {
public:
    int findMin(vector<int> &nums) {
        if(nums[0]<nums[nums.size()-1] || nums.size()==1){
            return nums[0];
        }
        int st=0;
        int ans=INT_MAX;
        int n=nums.size();
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
          
             if(nums[mid]>nums[end]){
                st=mid+1;
            }else if(nums[mid]<=nums[end]){
                  ans=min(ans,nums[mid]);
                   end=mid-1;
            }
        }
        return ans;
    }
};
