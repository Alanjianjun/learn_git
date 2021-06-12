class Solution{
public:
	string replaceSpace(string s){
		int count=0;
		int oldSize=s.size();
		for(int i=0;i<oldSize;i++){
			if (s[i]==' '){
				count++;
			}
		}
		int newSize=oldSize+2*count;
		int oldTail=oldSize-1;
		int newTail=newSize-1;
		s.resize(newSize);

		while(oldTail>-1){
			if (s[oldTail]!=' '){
				s[newTail]=s[oldTail];
				
			}else{
				s[newTail]='0';
				s[newTail-1]='2';
				s[newTail-2]='%';
				newTail-=2;
			}
			oldTail--;
			newTail--;
		}
		return s;
	}
}