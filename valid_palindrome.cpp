class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0; i<s.size(); i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || isdigit(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        string comp=str;
        reverse(str.begin(), str.end());
        return (str==comp);
    }
};