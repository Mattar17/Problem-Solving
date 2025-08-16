class Solution {
public:

    string encode(vector<string>& strs) {
        string str;

        for (auto x : strs){
            str += to_string(x.length()) + '#' + x; 
        }

        return str;
    }

   vector<string> decode(string s) {
        vector<string> ans;
        size_t i = 0;
        size_t j = i;
        string wordLength="";
        while(i<s.length()){
          wordLength = "";  
          while(s[j] != '#') {
            wordLength += s[i+(j-i)];
            j++;
          } 
          int len = stoi(wordLength);          
          
          ans.push_back(s.substr(j+1, len));
          
          i = j+1+len;
          j=i; 
        }
        return ans;
    }
};
