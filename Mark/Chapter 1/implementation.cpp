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

//Characters
void characterJumping(){
    static int jump = 0;
    if (jump == 0){
        cout << endl;
        cout << "웃" << endl;
        jump++;
    }
    else{
        cout << "웃" << endl;
        jump--;
    }
    sleep(1);
    system("clear");
}

//Scenes
void scene1(){
    intro("John the Baptist Prepares the Way", 3);
    cout << "John: \"The beginning of the gospel of Christ, son of God.\"" << endl;
    sleep(4); system("clear");
    cout << "As it's written in Isaiah..." << endl;
    sleep(3); system("clear");
    cout << "Behold, I send my messenger before your face.\n\twho will prepare your way,\nthe voice of one crying in the wilderness:\n\tPrepare the way of the Lord,\n\tmake his paths straight." << endl;
    sleep(5); system("clear");
}