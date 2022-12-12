//
//  main.cpp
//  Week 9 Prog 1
//
//  Created by Pippo Pesic on 10/12/22.
//

#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;
public:
    string getName() {
        return name;
    }
    void setName (string inName) {
        name = inName;
    }
    Player() {
        name = "";
    }
    Player(string inName) {
        name = inName;
    }
};

class Team {
public:
    Player* pPlayerArr[7];

    void printPlayers() {
        for (int i = 0; i < 7; i++) {
            if (pPlayerArr[i] != NULL) {
                cout << i+1 << " " << pPlayerArr[i]->getName() << endl;
            }
        }
    }
    
    Team() {
        for (int i = 0; i < 7; i++) {
            pPlayerArr[i] = NULL;
        }
    }
};

int main() {
    Player* pPlayer1 = new Player("George");
    Player* pPlayer2 = new Player("Ivan");
    Player* pPlayer3 = new Player("Hang");
    Player* pPlayer4 = new Player("Tuyet");
    Player* pPlayer5 = new Player();
    pPlayer5->setName("Sue");
    Player* pPlayer6 = new Player();
    pPlayer6->setName("Victoria");
    Player* pPlayer7 = new Player();
    pPlayer7->setName("Tumbo");

    
    Team* pBasketballTeam = new Team();
    Team* pSoccerTeam = new Team();
    
    
    pBasketballTeam->pPlayerArr[0] = pPlayer1;
    pBasketballTeam->pPlayerArr[1] = pPlayer2;
    pBasketballTeam->pPlayerArr[2] = pPlayer3;
    pBasketballTeam->pPlayerArr[3] = pPlayer4;
    pBasketballTeam->pPlayerArr[4] = pPlayer5;
        
    cout << "Basketball players:" << endl;
    pBasketballTeam->printPlayers();
    cout << endl << endl;

    cout << "Soccer players:" << endl;
    pSoccerTeam->pPlayerArr[0] = pPlayer1;
    pSoccerTeam->pPlayerArr[1] = pPlayer2;
    pSoccerTeam->pPlayerArr[2] = pPlayer3;
    pSoccerTeam->pPlayerArr[3] = pPlayer4;
    pSoccerTeam->pPlayerArr[4] = pPlayer5;
    pSoccerTeam->pPlayerArr[5] = pPlayer6;
    pSoccerTeam->pPlayerArr[6] = pPlayer7;
    
    pSoccerTeam->printPlayers();
    cout << endl << endl;
    
    delete pBasketballTeam;
    
    cout << "Basketball players after team deletion:" << endl;
    cout << pPlayer1->getName() << endl;
    cout << pPlayer2->getName() << endl;
    cout << pPlayer3->getName() << endl;
    cout << pPlayer4->getName() << endl;
    cout << pPlayer5->getName() << endl;
    cout << endl << endl;
    
    delete pSoccerTeam;
    
    cout << "Soccer players after team deletion:" << endl;
    cout << pPlayer1->getName() << endl;
    cout << pPlayer2->getName() << endl;
    cout << pPlayer3->getName() << endl;
    cout << pPlayer4->getName() << endl;
    cout << pPlayer5->getName() << endl;
    cout << pPlayer6->getName() << endl;
    cout << pPlayer7->getName() << endl;
    cout << endl << endl;
    
    delete pPlayer1;
    delete pPlayer2;
    delete pPlayer3;
    delete pPlayer4;
    delete pPlayer5;
    delete pPlayer6;
    delete pPlayer7;
    
    cout << "Philip Pesic 10/16/22" << endl;
    return 0;
}
