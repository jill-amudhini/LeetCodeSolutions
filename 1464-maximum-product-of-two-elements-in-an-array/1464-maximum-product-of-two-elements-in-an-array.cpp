class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int num1=0,num2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>num1)
            {
                num2=num1;
                num1=nums[i];
            }
            else if(nums[i]>num2)
            {
                num2=nums[i];
            }
        }
        cout<<num1<<" "<<num2;
        return (num1-1)*(num2-1);
    }
};