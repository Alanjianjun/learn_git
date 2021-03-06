class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int numOfChildren = g.size(),numofCookies=s.size();
        int count=0;
        for(int i=0,j=0;i<numOfChildren&&j<numofCookies;i++,j++){
            while(j<numofCookies&&s[j]<g[i]){
                j++;
            }
            if(j<numofCookies){count++;}
        }
        return count;
    }
};