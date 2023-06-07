class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.size()-1;

        while(l < r) {
            if(!isalpha(s[l])) {l++;continue;}
            if(!isalpha(s[r])) {r--;continue;}

            swap(s[l], s[r]);
            l++;
            r--;
        }

        return s;
    }
};

