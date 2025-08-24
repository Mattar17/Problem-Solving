class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        return false;

        unordered_map<char,int> m; 
        for(char c : t){
            m[c]++;
        }

        for(char c:s){
            m[c]--;
        }

        for(auto c:m){
            if (m[c.first] > 0)
            return false;
        }
        return true;
    }
};
