   bool isPalindrome(string s) {
    string filterString = "";

    for (char c : s) {
        if (isalnum(c) && c != ' ')
            filterString += tolower(c);
    }

    int i = 0, j = filterString.length() - 1;
    while (j >= i) {

        if (filterString[i] != filterString[j]) return false;
        i++;
        j--;
    }
    return true;
}
