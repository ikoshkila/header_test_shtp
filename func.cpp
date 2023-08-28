#include "header.h"

int sum(int a, int b){
	if(a == 20){
		volatile int *ptr = (int*)0;
		*ptr = 0;
	}
	return a + b;
}

std::string concat(std::string a, std::string b){
	if(a == "Result"){
		while(true){
			char* a = new char[1000];
			for(int i=0; i<1000; i++){
				a[i] = 1;
			}
		}
	}
	return a + b;
}

std::vector<char> str_list(std::string str){
	if(str == "abcdef"){
		while(true){
			int a = 1;
		}
	}
	std::vector<char> output;
	for(long long i = 0; i < str.size(); ++i)
		output.push_back(str[i]);
	return output;
}
