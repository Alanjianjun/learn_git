class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){return n;}
        int pre=2;
        int pre2=1;
        int cur=0;
        for(int i =3;i<=n;i++){
            cur=pre+pre2;
            pre2=pre;
            pre=cur;
        }
        return cur;
    }
};