class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_set<char>st1(word1.begin(),word1.end());
        unordered_set<char>st2(word2.begin(),word2.end());
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        multiset<int> ms1;
        multiset<int> ms2;
        if(word1.size()!=word2.size()){
            return false;
        }

        if(st1==st2){
              for(char c: word1){
                mp1[c]++;
              }
              for(char c: word2){
                mp2[c]++;
              }

            for(auto it: mp1){
                ms1.insert(it.second);
            }

            for(auto it: mp2){
                ms2.insert(it.second);
            }

            if(ms1==ms2){
                return true;
            }
            else{
                return false;
            }



        }
        else{
           return false;
        }





    } 
};