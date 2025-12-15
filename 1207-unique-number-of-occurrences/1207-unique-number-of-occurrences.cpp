class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        for(int x:arr){
            mp[x]++;
        }
        for(auto it:mp){
               int element=it.first;
               int freq=it.second;
               
               if(st.count(freq)==1){
                     return false;
               }
               st.insert(freq);
            
        }
       return true;

    }
};