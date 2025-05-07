#include<iostream>
using namespace std;

class Solution{
    public:
    void whichWeekDay(int day){
        if(day > 7 || day<1){
            cout<<"Invalid";
        }

        switch(day){
            case 1: {cout<<"Monday";
                break;}
            case 2: {cout<<"Tuesday";
                 break;}
            case 3: {cout<<"Wednesday";
                  break;}
            case 4: {cout<<"Thrusday";
                  break;}
            case 5: {cout<<"Friday";
               break;}
            case 6: {cout<<"Saturday";
               break;}
            case 7: {cout<<"Sunday";
               break;}
        }
    }

};

int main(){
    Solution obj;
    int day;
    cin>>day;
    obj.whichWeekDay(day);
    return 0;
}