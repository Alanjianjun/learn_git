class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int mFive=0;
        int mTen=0;
        int mTwenty=0;
        for(auto bill:bills){
            if(bill==5){
                mFive++;
            }else if(bill==10){
                if(mFive==0){
                    return false;
                }else{mFive--;mTen++;}
            }else if(bill==20){
                if(mFive>=1&&mTen>=1){
                    mTen--;
                    mFive--;
                    mTwenty++;
                }else if(mFive>=3){
                    mFive-=3;
                    mTwenty++;}
                else{return false;}
            }
        }
        return true;
    }
};