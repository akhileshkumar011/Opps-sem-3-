#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;

public:
    Time(int h, int m) {
        hour = h;
        minute = m;
    }

   
    friend Time addTime(Time t1, Time t2);

    void display() {
        cout << "Time = " << hour << " hours "
             << minute << " minutes" << endl;
    }
};


Time addTime(Time t1, Time t2) {
    Time result(0, 0);

    result.hour = t1.hour + t2.hour;
    result.minute = t1.minute + t2.minute;


    if (result.minute >= 60) {
        result.hour++;
        result.minute -= 60;
    }

    return result;
}

int main() {
    Time t1(2, 45);
    Time t2(3, 30);

    Time total = addTime(t1, t2);

    total.display();

    return 0;
}