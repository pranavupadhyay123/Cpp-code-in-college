//codeforce
#include <iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    char inputltr[i];
    
    for (int a=0;a<i;a++) {
        cin>>inputltr[a];
    }
	
    for (int a = 0; a < i; a++){

	    if (inputltr[a] == 'c' ||
	    inputltr[a] == 'o' ||
	    inputltr[a] == 'd' ||
	    inputltr[a] == 'e' ||
	    inputltr[a] == 'f' ||
	    inputltr[a] == 'r' ||
	    inputltr[a] == 's'){
		    cout<<"yes"<<endl;
	    }
	    else{
		    cout<<"NO"<<endl;
	    }
    }
}