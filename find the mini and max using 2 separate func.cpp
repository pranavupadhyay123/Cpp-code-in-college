#include <algorithm>
#include <iostream>
using namespace std;

int maximum(int a,int b,int c){
    int max;
    if(a>b && a>c){
        max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else{
        max=c;
    }
    return max;
}

int minimum(int a,int b,int c){
    int min;
    if(a<b && a<c){
        min=a;
    }
    else if(b<a && b<c){
        min=b;
    }
    else{
        min=c;
    }
    return min;
}

int main()
{
    int a,b,c,max,min;
    cin>>a>>b>>c;
    max=maximum(a,b,c);
    min=minimum(a,b,c);
    cout<<max<<endl;
    cout<<min<<endl;

}