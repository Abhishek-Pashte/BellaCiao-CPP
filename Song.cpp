/*Bella Ciao*/
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

    float a4=440,b4=493.88,c4=261.63,d4=293.66,e4=329.63,f4=349.23,a5=880,b5=987.77,c5=523.25,d5=587.33,e5=659.46,f5=698.46,g4=392,g5=783.99;
    Beep(440,500);
    Beep(415.3,500);
    Beep(349.23,500);
    Beep(329.63,1000);

    Beep(587.33,500);
    Beep(523.25,500);
    Beep(493.88,500);
    Beep(440,1000);


    Beep(440,500);
    Beep(412.3,500);
    Beep(349.63,500);
    Beep(349.23,500);
    Beep(415.3,1000);

    Beep(440,500);
    Beep(493.88,500);
    Beep(587.33,500);
    Beep(523.25,500);
    Beep(493.88,500);
    Beep(440,500);
    Beep(415.3,500);
    Beep(440,1000);

    for(int i=0;i<2;i++)
    {
    Beep(329.63,500);
    Beep(440,500);
    Beep(493.88,500);
    Beep(523.25,500);
    Beep(440,1000);
    }

    Beep(329.63,500);
    Beep(440,500);
    Beep(493.88,500);
    Beep(523.23,1000);

    Beep(493.88,500);
    Beep(440,500);
    Beep(523.25,1000);

    Beep(493.88,500);
    Beep(440,900);
    Beep(659.25,900);
    Beep(659.25,1000);

    Beep(659.46,500);
    Beep(587.33,500);
    Beep(659.25,500);
    Beep(698.46,500);
    Beep(698.46,1000);

    Beep(f5,500);
    Beep(e5,500);
    Beep(d5,500);
    Beep(f5,500);
    Beep(e5,1000);

    Beep(e5,500);
    Beep(d5,500);
    Beep(c5,500);
    Beep(b4,500);
    Beep(e5,500);
    Beep(b4,500);
    Beep(c5,500);
    Beep(a4,1000);

    Beep(e5,500);
    Beep(d5,500);
    Beep(f5,500);
    Beep(f5,1000);

    Beep(f5,500);
    Beep(e5,500);
    Beep(d5,500);
    Beep(f5,500);
    Beep(e5,1000);
}
