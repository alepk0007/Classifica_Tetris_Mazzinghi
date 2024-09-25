#include <string>

struct Player {
    std::string nome;
    int punteggio;
};

void Genera (Player ArrayGiocatori[10]);///Funzione per la generazione iniziale della classfica
void Stampa( Player ArrayGiocatori[10]); ////Funzione per visualizzare la classifica
void Inserisci(Player nuovo, Player ArrayGiocatori [10]); ////Funzione per inserire un nuovo punteggio
void Egg(Player ArrayGiocatori [10] ); ///Per i più audaci giocatori (18/04/2024),