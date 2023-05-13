#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student{
    public:
        int numbers[5];
        int calculateTotalScore(){
            for(int i=0;i<5;i++){
                int sum+=numbers[i];
            }
            return sum;
        }
        int input(){
            for(int i=0;i<5;i++){
                cin>>numbers[i];
            }
        }
};
int main() {
    int n;
    cin>>n;
    student scores[n];
    return 0;
}
