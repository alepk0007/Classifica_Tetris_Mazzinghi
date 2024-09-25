#include "classifica.h"
#include <iostream>
#include <string>
using namespace std;


void Stampa (Player ArrayGiocatori [10] ){
    cout<<"TETRIS TOP PLAYER"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int i=0;i<10;i++){
        cout<<ArrayGiocatori[i].nome ;
        cout<<"-------------------";
        cout<<ArrayGiocatori[i].punteggio<<endl;

    }
    cout<<"-------------------------------------"<<endl;


}

void Inserisci(Player nuovo, Player ArrayGiocatori [10] ) {
    cout<<"Inserisci il tuo nickname:" <<endl;
    cin>>nuovo.nome;
    cout<<endl;
    cout<<"Inserisci il tuo punteggio:" <<endl;
    cin>>nuovo.punteggio;
    cout<<endl;
    int Maggiore=-1;
    for(int i=0;i < 10;i++) {
        if(nuovo.punteggio > ArrayGiocatori[i].punteggio){
            Maggiore=i;
            break;
        }
    }
        if (Maggiore!=-1){
            for(int j=9;j>Maggiore;j--) {
                ArrayGiocatori[j]=ArrayGiocatori[j-1];
            }

            ArrayGiocatori[Maggiore]=nuovo;
            cout<<endl;
            cout<<"Punteggio inserito correttamente"<<endl;
            cout<<endl;

        } else {
            cout<<"Potevi fare di meglio!!"<<endl;
        }
    }

void Genera (Player ArrayGiocatori[10]) {
    for (int i = 0; i < 10; i++) {
        ArrayGiocatori[i].nome = "Giocatore" + to_string(i + 1);
        ArrayGiocatori[i].punteggio = 100 - i * 10;
    }
}

void Egg(Player ArrayGiocatori [10] ) {
    ArrayGiocatori[0].nome="DL5AI";
    ArrayGiocatori[0].punteggio=29240;
    ArrayGiocatori[1].nome="Ketty5AI";
    ArrayGiocatori[1].punteggio=28320;
    ArrayGiocatori[2].nome="Pietro";
    ArrayGiocatori[2].punteggio=27020;
    ArrayGiocatori[3].nome="Tassoni";
    ArrayGiocatori[3].punteggio=26200;
    ArrayGiocatori[4].nome="Kismet";
    ArrayGiocatori[4].punteggio=17580;
    ArrayGiocatori[5].nome="Zerolere";
    ArrayGiocatori[5].punteggio=7290;
    ArrayGiocatori[6].nome="Alkalime";
    ArrayGiocatori[6].punteggio=6880;
    ArrayGiocatori[7].nome="Leamerolo";
    ArrayGiocatori[7].punteggio=6140;
    ArrayGiocatori[8].nome="Alepk007";
    ArrayGiocatori[8].punteggio=5890;
    ArrayGiocatori[9].nome="Blue Scuti";
    ArrayGiocatori[9].punteggio=5800;
}