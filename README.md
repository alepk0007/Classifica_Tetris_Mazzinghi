### 👾 Classifica Tetris (C++)

Un sistema gestionale a riga di comando sviluppato in C++ per mantenere, visualizzare e aggiornare dinamicamente la Top 10 dei punteggi di una partita a Tetris. Il programma è strutturato in modo modulare ed è gestito tramite CMake.

#### 🚀 Funzionalità Principali

* **Menu Interattivo:** Interfaccia utente a riga di comando che permette di scegliere tra l'inserimento di un nuovo punteggio, la visualizzazione della classifica aggiornata o l'uscita dal programma.


* **Algoritmo di Aggiornamento:** Quando viene inserito un nuovo record, il sistema itera sull'array per verificare se il punteggio merita di entrare nella Top 10. In caso affermativo, esegue uno *shift* degli elementi successivi per fare spazio al nuovo giocatore, garantendo che la classifica sia sempre ordinata.


* **Dati Fittizi di Inizializzazione:** Al primo avvio, il programma genera automaticamente una classifica di base popolata con giocatori generici e punteggi a scalare, pronta per essere sovrascritta dai dati reali.


* **Easter Egg "Veterano":** Inserendo il codice segreto `18042024` nel menu principale, si sblocca una speciale classifica storica *hardcoded* contenente i punteggi dei giocatori veterani.



#### 🛠 Tecnologie e Struttura del Codice

* **Linguaggio:** C++ (Standard 17).


* **Compilazione:** Configurazione tramite `CMakeLists.txt` per facilitare la compilazione multipiattaforma.


* **Architettura Modulare:** Separazione logica tra definizioni (`classifica.h`), implementazioni delle funzioni (`classifica.cpp`) e ciclo di esecuzione principale (`main.cpp`).


* **Strutture Dati Custom:** Utilizzo di una `struct Player` dedicata per incapsulare le informazioni del singolo giocatore (nome e punteggio).



#### ⚙️ Come testare il progetto

1. Assicurati di avere un compilatore C++ compatibile con lo standard C++17 e CMake installato sul tuo sistema.
2. Clona la repository sul tuo computer.
3. Genera i file di build tramite CMake e compila l'eseguibile.
4. Avvia il programma dal terminale e segui le istruzioni a schermo per testare l'inserimento dei punteggi.



---

Puoi copiare l'intero blocco qui sopra, incollarlo nel file `README.md` tramite il tuo editor di testo o GitHub Desktop, fare il commit e pusharlo online.
