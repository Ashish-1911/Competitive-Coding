class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=nums[0];
int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)max=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]!=max){nums[i]++;j++;}
        }
        return j;
    }
};