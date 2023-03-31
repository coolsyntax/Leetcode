class Solution {
public:
    bool isPalindrome(string s) {
        
        //transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
        
        string str;
        for(int i=0;i<s.size();i++) {
            if(isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            if(isalnum(s[i])) {
                str.push_back(s[i]);
            }
        }
        string rev = str;
        reverse(rev.begin(), rev.end());
        return str == rev;
    }
};