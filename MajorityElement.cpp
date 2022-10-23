class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
        int BigElement = 0, InterCount = 0;
        
        for(int i=0; i < nums.size(); i++ )
        {
            if(InterCount == 0)
                BigElement = nums[i];
            
            if(BigElement == nums[i])
                InterCount++;
            else
                InterCount--;
            
        }
        
        return BigElement;
        
    }
};