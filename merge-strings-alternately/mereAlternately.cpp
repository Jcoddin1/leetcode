class Solution {
public:
	string merge Alternately(string word1, string word2){

		string mergedString = ""'
		for(int i=0;i<word1.size()||i<word2.size();i++){
			if(i<word1.size()){
				mergedString+=word1[i];
			}
			if(i<word2.size()){
				mergedString+=word2[i];
			}
		}
		return mergedString;
	}
};
