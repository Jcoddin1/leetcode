class Solution {
public:
    string makeFancyString(string s) {
        int count=1;
        string answer = "";
        answer.push_back(s[0]);
            for(int i=1;i<s.size();i++){
                if(s[i] == answer.back()){
                    count++;
                    if(count<3) { answer.push_back(s[i]);}
                }
                else{
                    count = 1;
                    answer.push_back(s[i]);
                }
            }
        return answer;
    }
// Uses solution by Jayant Singla to solve runtime issue
};
