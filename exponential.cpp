#include <iostream>
using namespace std;

int exponent(int base,int power){
    int answer;
    for(int i=0;i<power;i++){
        answer=base*base;
    }
    return answer;
}

int main(){
    int base,power,answer;
    cin>>base>>power;
    answer=exponent(base,power);
    cout<<answer;
}