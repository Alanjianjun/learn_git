bool isValid(string s) {
        stack<char> help;
        unordered_map<char, char> tmp{{')','('}, {'}','{'}, {']','['}};
        for(int i = 0; i < s.size(); i++)
        {
            if(help.empty())  help.push(s[i]);
            else{
                if(tmp[s[i]] == help.top()) help.pop();
                else help.push(s[i]);
            }
        }
        if(help.empty())  return true;
        return false;
    }

class Solution{
public:
    bool isValid(string s) {
        stack<char> help;
        unordered_map<char, char> tmp{{')','('}, {'}','{'}, {']','['}};
        for(int i = 0; i < s.size(); i++)
        {
            if(help.empty()){
                if (s[i]==')' || s[i]=='}' ||s[i]==']') {return false;}
                else{help.push(s[i]);}
            }  
            else{
                if(tmp[s[i]] == help.top()) help.pop();
                else help.push(s[i]);
            }
        }
        if(help.empty())  return true;
        return false;
    }
};
