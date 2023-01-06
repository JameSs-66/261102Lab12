#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int randgrade;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();

    srand(time(0));
    randgrade = rand()%9;
    cout << "You will get ";

    if(randgrade == 0) {cout << "A";}
    else if (randgrade == 1) {cout << "B+";}
    else if (randgrade == 2) {cout << "B";}
    else if (randgrade == 3) {cout << "C+";}
    else if (randgrade == 4) {cout << "C";}
    else if (randgrade == 5) {cout << "D+";}
    else if (randgrade == 6) {cout << "D";}
    else if (randgrade == 7) {cout << "F";}
    else  {cout << "W";}

    cout <<  " in this 261102. ";
    return 0;




}