class Solution {
public:
    string makeFancyString(string s) {
        //int i=2;
        if(s.size()>2){
            for(int i=2;i<=s.size();i++){
                if(s[i]==s[i-1]&&s[i]==s[i-2]){
                    s.erase(i,1);
                }
            }
        }
    return s;
	}
};
