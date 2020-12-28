#include <bits/stdc++.h>

using namespace std;

// C++ program to check if two strings are a permutation of each other

string sortString(string &input){
	sort(input.begin(), input.end()); // Built in function to sort out the string
	
	return input;

}


int main(){
	string input1;
	string input2;
	cin>>input1;
	cin>>input2;
	
	if(input1 != input2 && sortString(input1) == sortString(input2)){ // The logic is: if two strings are different, but equal when sorted, them they're permutations
		cout<<"One is the permutation of the other and vice-versa";
	}
	else {
		cout<<"They're not a permutation of each other";	
	}
	return 0;
}
