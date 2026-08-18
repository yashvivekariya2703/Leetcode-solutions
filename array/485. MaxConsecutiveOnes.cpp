class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(ans<count)
                {
                    ans=count;
                }
               
            }
             
            else{
                
                    count=0;
                
            }
        }
        return ans;
    }
};