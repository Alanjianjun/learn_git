class Solution {
public:
    int firstUniqChar(string s) {
    	unordered_map<int,int> frequency;
    	for(auto & chr : s){
    		++frequency[chr];
    	}
    	for(int i =0;i<s.size();++i){
    		if(frequency[s[i]]==1){
    			return i;
    		}
    	}
    	return -1;
    }
};