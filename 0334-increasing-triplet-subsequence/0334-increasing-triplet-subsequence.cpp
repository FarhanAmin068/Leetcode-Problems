class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
     int first=INT_MAX;
     int second=INT_MAX;
     int third;
     for(int i=0;i<nums.size();i++){
        if(nums[i]<=first){
          first=nums[i];
        }
        else if(nums[i]>first && nums[i]<=second){
            second=nums[i];
        }
        else{
          third=nums[i];
          return true;
        }
     }

     return false;
    }
};