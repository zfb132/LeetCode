class Solution {
public:
    string reverseString(string s) {
        int len=s.length();
        char t;
        for(int i=0;i<len/2;i++)
        {
            t=s[i];
            s[i]=s[len-i-1];
            s[len-i-1]=t;
        }
        return s;
    }
};