#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
    string x;
    const int screenWidth = 800;
    const int screenHeight = 450;
    int gold = 0;
    int material = 0;
    int amount = 1;
    int upgrade = 0;
    int upgradecost = 0;
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
                    cout << "You mined " << amount << " gold! \n";
                    gold = gold + amount;
                    energy = energy - 1;
    
                } else if (chance == 9){
                    cout << "You went mining for some materials! \n";
                    material = material + 1;
                    energy = energy -1; 
                }else if (chance >= 10)
                {
                    cout << "You mined extra hard today, you gain " << amount * 2 << " gold! \n";
                    gold = gold + (amount * 2);
                    energy = energy - 1;
                }
            } else if (energy == 0)
            {
                cout << "You dont have energy left! \n";
            }
            
            
            
        }else if (x == "upgrade")
        {
            if (upgrade <= gold){
                cout << "You upgraded the mine! \n";
                upgrade = upgrade + 1;
                upgradecost = upgrade * 2;
                amount = amount + upgrade;

            } else {
                cout << "You need more gold! \n";
            }        
        } else if (x == "rest")
        {
            cout <<"You rest for the day, all energy has been replenished! \n";
            energy = 10;
        } else if (x == "material") {
            cout << "You have " << material << " materials! \n";
        } else {
            cout <<"Command not found, try again! \n" ;
        }

    }
}