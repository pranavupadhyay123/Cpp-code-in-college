#include<iostream>
using namespace std;

void max_min(int a,int b,int c){
    int max;
    int min;
    if (a>b && a>>c){
        max=a;
    }
    else if(b>c&&b>a){
        max=b;
    }
    else if (c>a&&c>b){
        max=c;
    }
    else{
        cout<<"sorry";
    }
    if(a<b&&a<c){
        min=a;
    }
    else if(b<a&&b<c){
        min=a;
    }
    else if(c<b&&c<a){
        min=a;
    }
    else{
        cout<<"sorry";
    }
    cout<<"the largest number is :"<<max<<endl;
    cout<<"the smallest number is :"<<min<<endl;
}

int main(){
    int a,b,c;
    cout<<"please enter 3 number to find the largest and smallest among them\n";
    cin>>a>>b>>c;
    max_min(a,b,c);
}