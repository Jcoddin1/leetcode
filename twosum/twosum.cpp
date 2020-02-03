#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

// Given an array, show which two indeces add up to the target

// Brute Force
vector<int> twoSum(vector<int>& nums, int target){
	vector<int> answer;
	for(int i=0;i!=nums.back();i++){
		for(int j=0;j<nums.back() && j!=i;j++){
			if(nums[i]+nums[j]==target){
				answer.push_back(nums[j]);
				answer.push_back(nums[i]);
				break;
			}
		}
	}	
	return answer;
}

int main(){
	int tester[] = {1,2,3,4,5,56};
	vector<int> input;
	for(int i=0;i<6;i++){
		input.push_back(tester[i]);
	}

	vector<int> disp = twoSum(input, 61);
	printf("%i and %i\n", disp[0], disp[1]);
	
}
