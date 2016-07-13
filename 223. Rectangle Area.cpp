class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int a=(C-A)*(D-B)+(G-E)*(H-F);
        if(E>=C||F>=D||G<=A||H<=B)    
            return a;
        return a-(min(C,G)-max(A,E))*(min(D,H)-max(B,F));
    }
};
