#include "header.h"

void intro(string title, int time){
    system("clear");
    for (int i = 0; i < 50; i++)
        cout << "=";
    cout << endl;
    cout << endl;
    cout << title << endl;
    cout << endl;
    for (int i = 0; i < 50; i++)
        cout << "=";
    cout << endl;
    sleep(time);
    system("clear");
}

void scene1(){
    intro("John the Baptist Prepares the Way", 3);
    cout << "As it's written in Isaiah...";
}