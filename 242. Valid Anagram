class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26],i;
        if(s.length()==0&&t.length()==0)
            return 1;
        if(s.length()!=t.length())
            return 0;
        for(i=0;i<26;i++){
            a[i]=0;
        }
        for(i=0;i<s.length();i++){
            a[s[i]-97]++;
        }
        for(i=0;i<t.length();i++){
            a[t[i]-97]--;
        }
        for(i=0;i<26;i++){
            if(a[i]!=0) return 0;
        }
        return 1;
    }
};
