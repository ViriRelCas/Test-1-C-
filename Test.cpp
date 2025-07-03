#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
    string x;
    int gold = 0;
    int material = 0;
    int amountgained = 1;
    int upgrade = 1;
    int upgradecost = 1;
    int upgradematcost= 1;
    int minelevel = 0;
    int energy = 10;

    cout << "Welcome to the mining game, type mine to mine some gold! \n";

    for (int ng = 0; ng = 1;ng = 0) {
        cin >> x;

        if (x == "gold"){
        cout << "You have "<< gold << " gold!" "\n";
        }else if (x == "mine")
        {
            int chance = rand() % 10 + 1;

            if (energy >= 1)
            {
                if (chance <= 8) 
                {
                    cout << "You mined " << amountgained << " gold! \n";
                    gold = gold + amountgained;
                    energy = energy - 1;
    
                } else if (chance == 9){
                    cout << "You went mining for some materials! \n";
                    material = material + 1;
                    energy = energy -1; 
                }else if (chance >= 10)
                {
                    cout << "You mined extra hard today, you gain " << amountgained * 2 << " gold! \n";
                    gold = gold + (amountgained * 2);
                    energy = energy - 1;
                }
            } else if (energy == 0)
            {
                cout << "You dont have energy left! \n";
            }
            
            
            
        } else if (x == "rest")
        {
            cout <<"You rest for the day, all energy has been replenished! \n";
            energy = 10;
        } else if (x == "material") {
            cout << "You have " << material << " materials! \n";
        } else if (x == "upgrade")
        {
            if (upgrade <= 9){
                if (gold <= upgradecost){
                gold = gold - upgradecost;
                cout << "You upgraded the mine! \n";
                upgrade = upgrade + 1;
                upgradecost = minelevel * 0.5;
                amountgained = amountgained + minelevel;
                minelevel = minelevel + 1;
                } else {
                    cout << "Not enough gold! \n";
                }

            }  else if (upgrade == 10){
                if (material <= upgradematcost){
                    material = material - upgradematcost;
                    cout << "You upgraded the mine! \n";
                    upgrade = 1;
                    upgradecost = minelevel * 0.5;
                    amountgained = amountgained + (minelevel * 2);
                    minelevel = minelevel + 1;
                } else {
                    cout << "Not enough materials! \n";
                }
            }
        } else if (x == "level") {
            cout <<"You mine level is " << minelevel << "\n" ;
        } else {
            cout <<"Comand not found, try again! \n";
        }

    }
}
