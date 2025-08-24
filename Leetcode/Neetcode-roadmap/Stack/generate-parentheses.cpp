string sol = "";
    vector<string> res;

    void backtrack(int openCount,int closeCount,int n) {
        
        if (openCount == n && closeCount == n) {
            res.push_back(sol);
            return;
        }

        if (openCount < n) {
            sol.push_back('(');
            backtrack(openCount + 1, closeCount,n);
            sol.pop_back();
        }

        if (closeCount < openCount) {
            sol.push_back(')');
            backtrack(openCount, closeCount + 1,n);
            sol.pop_back();
        }


    } 

    vector<string> generateParenthesis(int n) {
        backtrack(0,0,n);
        return res;
    }
