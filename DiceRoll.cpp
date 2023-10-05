#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int D20Roll(){
    // Zufallsgenerator initialisieren
    srand(static_cast<unsigned int>(time(nullptr)));

    int unteresLimit = 1; // Standard unteres Limit für D20
    int oberesLimit = 20; // Standard oberes Limit für D20

    // Würfeln und Ergebnis ausgeben
    int wurf = 0;
    wurf = (rand() % (oberesLimit - unteresLimit + 1)) + unteresLimit;
    int modifikator = 0;

    // Modifikator abfragen
    cout << "Gib einen Modifikator ein (0, wenn keiner): ";
    cin >> modifikator;

    int ergebnis = 0;
    ergebnis = wurf + modifikator;

    cout << "Du hast einen 20-seitigen Würfel geworfen und die Zahl " << wurf << " erhalten." << endl;
            cout << "Mit Modifikator " << modifikator << " beträgt das Ergebnis: " << ergebnis << endl;
}

int main() {
            D20Roll();
            D20Roll();
            D20Roll();
            D20Roll();
            D20Roll();
}


