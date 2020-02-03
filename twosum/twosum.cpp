#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
using namespace std;

// Given an array, show which two indeces add up to the target

// Brute Force
vector<int> twoSum(vector<int>& nums, int target){
	vector<int> answer;
	for(int i=0;i!=nums.back();i++){
		for(int j=0;j<nums.back() && j!=i;j++){
			if(nums[i]+nums[j]==target){
				answer.push_back(j);
				answer.push_back(i);
				break;
			}
		}
	}	
	return answer;
}

// Need to be able to read input from a file and export output to a file

int main(){
	// Following Code exports to a file
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
	// Following Code imports from a file
	string line;
	ifstream mefile ("inexample.txt");
	if (mefile.is_open()){
		while(getline(mefile,line)){
			cout << line << '\n';
		}
	mefile.close();
	}
	else cout << "Unable to open file";

	int tester[] = {1,2,3,4,5,56};
	vector<int> input;
	for(int i=0;i<6;i++){
		input.push_back(tester[i]);
	}

	vector<int> disp = twoSum(input, 61);
	// This lists the values
	printf("%i and %i\n", disp[0], disp[1]);
	// This lists the indeces,(WHAT WE WANT)
	// printf("at indeces %i and %i\n",);
	return 0;
}
