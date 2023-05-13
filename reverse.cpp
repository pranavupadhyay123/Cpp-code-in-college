#include <iostream>
using namespace std;
int main(){
    int n=0;
    int* maxnums=new int[n];
    int testcases=0;
    int over = 0;
    cin >> testcases;
    cin >> n;
    
    for(int i = 0; i < testcases; i++){
        for(int i=0; i<n;i++){
            cin>>maxnums[i];
            over++;
        }
    }
    for(int i=n+over ; i-->0;){
            cout<<maxnums[i]<<" ";
        }
}