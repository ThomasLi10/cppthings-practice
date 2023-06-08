#include <iostream>
#include <stdio.h>

using namespace std;

class Clock {
private:
    int hour, minute, second;

public:
    Clock(int h, int m, int s);
    void show_time();

    Clock& operator++();
    Clock operator++(int);

};

Clock::Clock(int h, int m, int s){
    if (h > 0 && h < 24 && m > 0 && m < 60 && s > 0 && s < 60){
        hour = h;
        minute = m;
        second = s;
    }
    else {
        cerr << "Format error!" << endl;
    }
}

void Clock::show_time(){
    printf("%02d:%02d:%02d\n", hour, minute, second);
}


Clock& Clock::operator++(){
    if ( second == 59 ){
        second = 0;
        if ( minute == 59) {
            minute = 0;
            if ( hour == 23 ){
                hour = 0;
            }
            else {
                ++hour;
            }
        }
        else {
            ++minute; 
        }
    }
    else {
        ++second;
    }

    return *this;
}

Clock Clock::operator++(int){
    Clock orig = *this;
    ++(*this);
    return orig;
}




// main
int main(){
    Clock my_clock(23, 59, 59);
    my_clock.show_time();
    (my_clock++).show_time();
    (++my_clock).show_time();
}

