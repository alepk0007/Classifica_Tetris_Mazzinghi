#include <iostream>
#include "classifica.h"
using namespace std;
int main() {

    Player ArrayGiocatori[10];
    int Pulsante =0;
    Player Nuovo;


        Genera(ArrayGiocatori);
        Stampa(ArrayGiocatori);

    do {
        cout<<"SCEGLI UN OPZIONE:"<<endl;
        cout<<"inserisci un nuovo punteggio---1"<<endl;
        cout<<"Stampa la classifica attuale---2"<<endl;
        cout<<"Chiudi Classfica Tetris--------3"<<endl;
        cout<<"-------------------------------------"<<endl;

        cin>>Pulsante;

        switch (Pulsante) {
            case 1 : Inserisci(Nuovo, ArrayGiocatori);
            break;

            case 2 : Stampa(ArrayGiocatori);
            break;

            case 3 :cout<<"Chiusura Classifica Tetris: Completata"<<endl;
                    cout<<"Programma elaborato da Alessandro Mazzinghi"<<endl;
                    exit(0);

            case 18042024: cout<<"--------------------"<<endl;
                    cout<<"|                  |"<<endl;
                    cout<<"|Benvenuto veterano|"<<endl;
                    cout<<"|                  |"<<endl;
                    cout<<"--------------------"<<endl;
                    Egg(ArrayGiocatori);
                    Stampa(ArrayGiocatori);
            break;

            default:cout<<"Comando non valido"<<endl;
        }

    }while(true);

}
