// Create a class time with hours and minutes now overload the subtraction operator to subtract two types objects 

#include <iostream>
using namespace std;
class Time {
    public:
    int hours; 
    int minutes;
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }
    Time operator-(Time t) {
        int totalMinutes1 = hours * 60 + minutes;           
        int totalMinutes2 = t.hours * 60 + t.minutes;
        int diffMinutes = totalMinutes1 - totalMinutes2;
        int diffHours = diffMinutes / 60;   


        int diffMins = diffMinutes % 60;
        return Time(diffHours, diffMins);
    }
    void display() {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }       
};
int main() {
    Time t1(5, 30);
    Time t2(2, 45);         

    Time t3 = t1 - t2;
    t3.display();
    return 0;
}