class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.length();
      int maxlen=0;
      for(int i=0;i<n;i++){
        string str="";
        for(int j=i;j<n;j++){
            bool match=false;
            for(int a=0;a<str.length();a++){
                if(str[a]==s[j]){
                    match=true;
                    break;
                }
            }
        if(match) 
        break;
        else{
            str+=s[j];
        }
        
        }
      maxlen=max(maxlen,(int)str.length());
    }     
  
      
      return maxlen;
       
    }
};
