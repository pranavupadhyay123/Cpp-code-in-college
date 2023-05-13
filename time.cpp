#include <iostream>
using namespace std;

class time{
    public:
        int tot_hour;
        int tot_minute;
        int tot_second;
        int hour1,minute1,second1;
        int hour2,minute2,second2;
        void first(){
            cin>>hour1>>minute1>>second1;
        }
        void sec(){
            cin>>hour2>>minute2>>second2;
        }
        
        void add_hour(){
            tot_hour=hour1+hour2;
        }
        void add_minute(){
            tot_minute=minute1+minute2;
            if (tot_minute>60){
                tot_minute=tot_minute%60;
                tot_hour++;
            }
        }
        void add_second(){
            tot_second=second1+second2;
            if (tot_second>60){
                tot_second=tot_second%60;
                tot_minute++;
            }
        }
};

int main()
{
    time hel;
    hel.first();
    hel.sec();
    hel.add_hour();
    hel.add_minute();
    hel.add_second();

    return 0;
}