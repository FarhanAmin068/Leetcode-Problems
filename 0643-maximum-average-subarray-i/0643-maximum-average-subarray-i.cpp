class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        double avg=0;
        double MaxAvg=-1e5;
        //for first window
        for(int i=0;i<k;i++){
            sum+=nums[i];   

        }
        avg=(double)sum/k;
        MaxAvg=max(MaxAvg,avg);
        //for rest of the windows we will insert one and remove the prev one
        for(int i=k; i<nums.size();i++){
            //prev element nums[i-k]
            //next element nums[i]
             sum=sum-nums[i-k]+nums[i];
             avg=(double)sum/k;
             MaxAvg=max(MaxAvg,avg);
        }

        return MaxAvg;
    }
};