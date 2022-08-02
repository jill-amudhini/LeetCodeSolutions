class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int l=0,r=nums.size()-1;
        int mid=(l+r)/2;
        
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
        }
        
        int a=0;
        
        cout<<mid;
        if(nums[mid]<target)
        {
            a=mid+1;
        }
        else
        {
            a=mid;
        }
        return a;
    }
};