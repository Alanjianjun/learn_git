class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n<1){return res;}
        _generate(res,0,0,n,"");
        return res;
    }

    void _generate(vector<string>& res,int left, int right, int n,string s){
        //terminator
        if(left==n&&right==n){res.push_back(s);}
        // do logic//dynamic scheme
        if(left<n){_generate(res,left+1,right,n,s+'(');}
        if(right<left){_generate(res,left,right+1,n,s+')');}
        //drill down

        //reverse state
    }
};