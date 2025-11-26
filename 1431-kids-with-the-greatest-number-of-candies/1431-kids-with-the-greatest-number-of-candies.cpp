class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=*max_element(candies.begin(),candies.end());
        vector<bool>candycrush(candies.size());
        for(int i=0;i<candies.size();i++){
           candies[i]=candies[i]+extraCandies;
           if(candies[i]>=mx){
            candycrush[i]=true;
           }
           else{
            candycrush[i]=false;
           }
        }
        return candycrush;
    }
};