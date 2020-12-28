#include <bits/stdc++.h>

using namespace std;

string sortString(string &input){
	sort(input.begin(), input.end());
	
	return input;

}


int main(){
	string input1;
	string input2;
	cin>>input1;
	cin>>input2;
	
	if(sortString(input1) == sortString(input2)){
		cout<<"One is the permutation of the other and vice-versa";
	}
	else {
		cout<<"They're not a permutation of each other";	
	}
	return 0;
}
