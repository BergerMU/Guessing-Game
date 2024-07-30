// Guessing Game
#include <iostream>
#include <string>
using namespace std;

int HotOrCold(int rando) {
    //ranges
    double extremelyHot = 0.05;
    double reallyHot = 0.10;
    double hot = 0.15;
    double warm = 0.25;
    double cold = 0.35;
    double reallyCold = 0.50;
    int guess;
    int count = 0;

    while (true) {
        cout<<"Enter in your guess: ";
        cin>>guess;
        double difference = abs(guess - rando);
        double percentage = difference / rando;

        if (guess == rando) {
            cout<<"You did it, good job!"<<endl;
            break;
        } 
        count += 1;
        if (percentage <= extremelyHot) {
            cout<<"Extremely Hot!"<<endl;
        } else if (percentage <= reallyHot) {
            cout<<"Really Hot!"<<endl;
        } else if (percentage <= hot) {
            cout<<"Hot!"<<endl;
        } else if (percentage <= warm) {
            cout<<"Warm!"<<endl;
        } else if (percentage <= cold) {
            cout<<"Cold!"<<endl;
        } else if (percentage <= reallyCold) {
            cout<<"Really Cold!"<<endl;
        } else {
            cout<<"Freezing!"<<endl;
        }
    }
    return count;
}

int playGame() {
    //Initializing Variables
    int highEnd;
    int count;

    cout<<"Hot/Cold Guessing Game by Jacob Berger"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Enter in your top range: ";
    cin>>highEnd;

    //Generating random number
    srand((unsigned) time(NULL));
    int random = rand() % highEnd;
    count = HotOrCold(random);

    return count, random, highEnd;
}

int main() {
    playGame();
}