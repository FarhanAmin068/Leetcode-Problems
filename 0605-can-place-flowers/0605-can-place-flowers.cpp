class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool lft,rgt;
        bool out;
        int cnt=0;
      for(int i=0;i<flowerbed.size();i++){
              if(n==0){
                return true;
              }
             if(flowerbed[i]==0){
                if(i==0){
                    lft=true;
                }
                else if(flowerbed[i-1]==0){
                    lft=true;
                }
                else{
                    lft=false;
                }
               
               if(i==flowerbed.size()-1){
                rgt=true;
               }
               else if(flowerbed[i+1]==0){
                rgt=true;
               }
               else{
                rgt=false;
               }

               if(lft && rgt){
                flowerbed[i]=1;
                cnt++;
                if(cnt>=n){
                   return true;
                }
               }
             }
             
      }
      return false;
    }
};