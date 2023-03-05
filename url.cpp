#include <iostream>
#include <string>
using namespace std;
int main(){
	string url="open https://www.google.com";
	for(int i=0;i<5;i--){
		system(url.c_str());
	}
}