char closingParentheses(char c){
        if(c == '(') return ')';
        if(c == '{') return '}';
        if(c == '[') return ']';
        else return 'n';
    }
    bool isValid(string s) {
        stack<char> charStack;
        for(int i=0;i<s.length();i++){
            if(charStack.empty()) {
                charStack.push(s[i]);
            }
            
        else {
            if(closingParentheses(charStack.top()) == s[i])        
            charStack.pop();
            else
            charStack.push(s[i]);
            }
        }
        return charStack.empty();
    }
