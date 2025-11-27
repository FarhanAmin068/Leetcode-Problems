class Solution {
public:
    string reverseVowels(string s) {
        string vow;
        for(int i=0;i<s.size();i++){
           if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||
           s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vow.push_back(s[i]);
           }
        }
       
       reverse(vow.begin(),vow.end());
       int i=0,j=0;
       while(i<s.size()){
          if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||
           s[i]=='i'||s[i]=='o'||s[i]=='u'){
            s[i]=vow[j];
            i++;
            j++;
           }
           else{
            i++;
           }
           
       }
       return s;
    }
};