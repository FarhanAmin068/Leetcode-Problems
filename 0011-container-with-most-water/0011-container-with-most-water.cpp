class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int h,w,area;
        int maxArea=0;
        while(left<right){
         h=min(height[left],height[right]);
         w=right-left;
         area=h*w;
         maxArea=max(maxArea,area);
         if(height[left]<height[right]){
            left++;
         }
         else{
            right--;
         }
        }
        return maxArea;
    }
};