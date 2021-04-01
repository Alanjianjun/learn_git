class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(vector<int>:: iterator it=digits.end()-1;it>=digits.begin();it--)
        {
            (*it)++;
            if(*it==10){*it=0;}
            else {return digits;}
            if(it==digits.begin()){digits.insert(digits.begin(),1);}
        }
        return digits;
    }
};