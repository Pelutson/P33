#include <iostream>
#include <random>
#include "random.h"

using namespace std;

int main()
{
    int balance = 10000;
    int insert = 0;
    int number_being_bet_on = 0;

    int randomnumber = getRandom(0,36);

    while(balance > 0){
        cout << "Wie viel wollen Sie einsetzen?" << std::endl;
        cin >> insert;

        if(insert > 0 && insert <= balance){
            cout << "Einzahlung war erfolkreich!" << std::endl;

            number_being_bet_on = -1;

            while(number_being_bet_on < 0 || number_being_bet_on > 36){
                cout << "Auf welche Zahl wollen sie Wetten? (0-36)" << std::endl;
                cin >> number_being_bet_on;


            }

            if (number_being_bet_on == randomnumber){
                cout << "Sie haben gewonnen! Aktueller Kontostadt betragt:";
                balance += insert * 35;
                cout << balance << " Euro" << std::endl;


            }else{

                cout << " Sie haben verloren! Aktueller Kontostandt betragt:" << std::endl;
                balance = balance - insert;
                cout << balance << " Euro" << randomnumber <<std::endl;
            }




        }else{
            cout << "Fehler: Nicht genug Geld ist vorhanden!" << std::endl;
        }
    }






    return 0;
}
