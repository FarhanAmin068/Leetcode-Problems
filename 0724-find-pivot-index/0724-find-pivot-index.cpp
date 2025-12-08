class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
          total=total+nums[i];
        }
        vector<int>lftSum(nums.size());
         int lftSide;
         int rgtSide;

        lftSum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            lftSum[i]=lftSum[i-1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            
            lftSide=lftSum[i]-nums[i];
            rgtSide=total-lftSum[i];
            if(lftSide==rgtSide){
                return i;
            }
          
        }
      return -1;
    }
};