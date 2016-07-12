class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        int i=0;
        for(;s[i]!='\0';i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') s1.push(s[i]);
            else if(s1.empty()) return false;
            else if(s[i]==')' && s1.top()=='(') s1.pop();
            else if(s[i]==']' && s1.top()=='[') s1.pop();
            else if(s[i]=='}' && s1.top()=='{') s1.pop();
            else break;
        }
        if(!s1.empty())
            return 0;
        return 1;
    }
};
