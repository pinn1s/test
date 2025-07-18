// hey... i smell something weird...
// are you seeing MY source code??
// i wish you dont bypass the file by peeking at the password in source code in github pls :(
// im not doing this trick to achieve the yolo achievement in github but some people use the source code to peek at the password part
// - ugh, 18th july 2025

#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <iomanip> // for setfill and setw
using namespace std;
using namespace std::chrono;
void pause(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
int main() {
    auto start = high_resolution_clock::now();
    const string password = "dev";
    string input;

    cout << "bro..." << endl;
    pause(2000);
    cout << "you found a file...";
    pause(1500);
    cout << " a file that is the only file that has this kind of password-protected stuff... ";
    pause(4000);
    cout << " i'm so impressed..." << endl;
    pause(1000);
    cout << "but bc i dont wanna laze around with time so i'm giving you this stuff below. touch wood >:)" << endl;
    cout << "pls enter the password for free robux- AHEM i mean secrets exposed from the creator of the repo pinn1s/test: ";

    cin >> input;

    if (input == password) {
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start).count();

        int hours = duration / 3600000;
        int minutes = (duration % 3600000) / 60000;
        int seconds = (duration % 60000) / 1000;
        int milliseconds = duration % 1000;

        cout <<"checking..."<<endl<<"BRO WHAT??" << endl;
        cout << "your speedrun dont.cpp 100% time taken (build time dont count): ";
        cout << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << "."
             << setw(2) << setfill('0') << milliseconds / 10
             << endl;
        cout<<"btw my secret: you've been trolled there is no secret revealed the only secret is your speedrun stopwatch";
    } else {
        cout << "checking..."<<"this is not. sorry but i cant tell you the secret";
    }

    return 0;
}

