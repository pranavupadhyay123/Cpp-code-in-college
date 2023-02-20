#include <iostream>
#include<algorithm>

using namespace std;

int maximum(int num1,int num2,int num3){
    int val = num1;
    val = max(val, num2);
    val = max(val, num3);
    return val;
}

int main()
{
    int num1,num2,num3,large;
    cin>>num1>>num2>>num3;
    large=maximum(num1,num2,num3);
    cout<<large;
}