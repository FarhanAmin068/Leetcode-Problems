class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string out;
        if(str1+str2 != str2+str1){
            return "";
        }
        else{
            int len1=str1.size();
            int len2=str2.size();
            int result=std::gcd(len1,len2);
            for(int i=0;i<result;i++){
                out=out+str1[i];
            }
        }
        return out;
    }
};