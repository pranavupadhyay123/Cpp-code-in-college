#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n=0,count=0;
    cin>>n;
    int marks[n];
    
    for(int i=0;i<n;i++){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        marks[i]=a+b+c+d+e;
    }
    
    for (int i=1;i<n;i++) {
        if(marks[0]>marks[i]){
            count++;
        }
    }
    cout<<count;
}