#include<string.h>
class Solution {
public:
    void reverseWords(string &s) {
        int len=s.length(),i,j;
        if(len==0) return;
        remleadtrailspaces(s,len);
        len=s.length();
        len=remmulspaces(s,len);
        s=s.substr(0,len);
        i=0;
        j=len-1;
        reverse(s,i,j);
        i=0;j=0;
        while(j<len){
            while(j<len&&s[j]!=' ') j++;
            reverse(s,i,j-1);
            if(j<len) i=j+1;
            j++;
        }
        
    }
    void remleadtrailspaces(string &s,int len){
        int i,j;
        i=0;
        j=len-1;
        while(s[i]==' '&&i<len) i++;
        if(i==len&&s[i]==' ') return;
        while(s[j]==' '&&j>=0) j--;
        s=s.substr(i,j-i+1);
    }
    int remmulspaces(string &s,int len){
        int i=0,j=0;
        while(i<len){
            s[j]=s[i];
            j++;
            if(s[i]!=' ') i++;
            else{
                while(s[i]==' '&&i<len)
                    i++;
            }
        }
        return j;
    }
    void reverse(string &s,int i,int j){
        char temp;
        for(;i<j;i++,j--){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};
