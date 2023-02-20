#include <iostream>
using namespace std;

int calculator(int num1, int num2, char oper){
    if (oper == '+'){
        cout<<"the addition of above number is" <<num1+num2;
    }
    else if (oper == '-'){
        cout<<"the subtraction of above number is" <<num1-num2;
    }
    else if  (oper == '/'){
        cout<<"the division of above number is" <<num1/num2;
    }
    else if  (oper == '*'){
        cout<<"the multiplication of above number is" <<num1*num2;
    }
    else{
        cout<<"please choose correct operator";
    }
    return 0;
}

int main()
{
    float num1,num2;
    char oper;
    cout<<"please enter num1:";
    cin>>num1;
    cout<<"please enter num2:";
    cin>>num2;
    cout<<"please select operator for calculating:";
    cin>>oper;
    calculator(num1,num2,oper);
    return 0;
}