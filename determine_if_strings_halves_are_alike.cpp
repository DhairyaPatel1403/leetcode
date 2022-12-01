class Solution {
public:
    bool halvesAreAlike(string s) {
        int j=0;
        for(int i=0; i<s.size()/2; i++){
            char a = tolower(s[i]);
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
                j++;
            }
        }
        for(int i=s.size()/2; i<s.size(); i++){
            char a = tolower(s[i]);
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
                j--;
            }
        }
        return (j==0);
    }
};