#include<iostream>

using namespace std;

class time_converter{

    int hour,minutes,seconds;

    public:

    void seconds_to_hh_mm_ss(int total_seconds)
    {
        this -> hour = total_seconds/3600;
        total_seconds %= 3600;
        this -> minutes =total_seconds/60;
        this -> seconds =total_seconds%60;

        cout << "HH:MM:SS => " 
            << this->hour << ":" 
            << this->minutes << ":" 
            << this->seconds << endl;   

    }

    void HH_MM_SS_to_seconds(int h,int m ,int s)
    {
        hour =h;
        minutes =m;
        seconds = s;
        
        int total_seconds = (hour*3600)+(minutes*60)+ seconds;

        cout << "total_seconds: " << total_seconds <<endl;
    }


};


int main()
{
    time_converter t;
    int choice ;

    cout << "1: convert from seconds to hours: \n";
    cout << "2: convert from hh:mm:ss to totalseconds: \n";
    cout << "enter your choice:";
    cin >> choice;

    if(choice ==1 )
    {

        int total_sec;

        cout << "enter total seconds:";
        cin >> total_sec;

        t.seconds_to_hh_mm_ss(total_sec);

    }
    else if(choice ==2)
    {
        int h,m,s;

        cout << "Enter Hours:" << endl;
        cin >> h;
        cout << "Enter Minutes:" << endl;
        cin >> m;
        cout << "Enter Seconds:" << endl;
        cin >> s;

        t.HH_MM_SS_to_seconds(h,m,s);
    }
    else
    {
        cout << "invalid choice";
    }
    
    return 0;
}