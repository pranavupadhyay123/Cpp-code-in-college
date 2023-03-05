#include <windows.h>
#include <iostream>
#include <string>
 
using namespace std;
int main(){
	string url = "https://www.google.com";
    for(int i=0;i<20;i--)
    {
        ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
    }
}