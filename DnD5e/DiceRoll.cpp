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

int D12Roll(){
    // Zufallsgenerator initialisieren
    srand(static_cast<unsigned int>(time(nullptr)));

    int unteresLimit = 1; // Standard unteres Limit für D12
    int oberesLimit = 12; // Standard oberes Limit für D12

    // Würfeln und Ergebnis ausgeben
    int wurf = 0;
    wurf = (rand() % (oberesLimit - unteresLimit + 1)) + unteresLimit;
    int modifikator = 0;

    // Modifikator abfragen
    cout << "Gib einen Modifikator ein (0, wenn keiner): ";
    cin >> modifikator;

    int ergebnis = 0;
    ergebnis = wurf + modifikator;

    cout << "Du hast einen 12-seitigen Würfel geworfen und die Zahl " << wurf << " erhalten." << endl;
            cout << "Mit Modifikator " << modifikator << " beträgt das Ergebnis: " << ergebnis << endl;
}

int D10Roll(){
    // Zufallsgenerator initialisieren
    srand(static_cast<unsigned int>(time(nullptr)));

    int unteresLimit = 1; // Standard unteres Limit für D10
    int oberesLimit = 10; // Standard oberes Limit für D10

    // Würfeln und Ergebnis ausgeben
    int wurf = 0;
    wurf = (rand() % (oberesLimit - unteresLimit + 1)) + unteresLimit;
    int modifikator = 0;

    // Modifikator abfragen
    cout << "Gib einen Modifikator ein (0, wenn keiner): ";
    cin >> modifikator;

    int ergebnis = 0;
    ergebnis = wurf + modifikator;

    cout << "Du hast einen 10-seitigen Würfel geworfen und die Zahl " << wurf << " erhalten." << endl;
            cout << "Mit Modifikator " << modifikator << " beträgt das Ergebnis: " << ergebnis << endl;
}

int D8Roll(){
    // Zufallsgenerator initialisieren
    srand(static_cast<unsigned int>(time(nullptr)));

    int unteresLimit = 1; // Standard unteres Limit für D8
    int oberesLimit = 8; // Standard oberes Limit für D8

    // Würfeln und Ergebnis ausgeben
    int wurf = 0;
    wurf = (rand() % (oberesLimit - unteresLimit + 1)) + unteresLimit;
    int modifikator = 0;

    // Modifikator abfragen
    cout << "Gib einen Modifikator ein (0, wenn keiner): ";
    cin >> modifikator;

    int ergebnis = 0;
    ergebnis = wurf + modifikator;

    cout << "Du hast einen 8-seitigen Würfel geworfen und die Zahl " << wurf << " erhalten." << endl;
            cout << "Mit Modifikator " << modifikator << " beträgt das Ergebnis: " << ergebnis << endl;
}

int D6Roll(){
    // Zufallsgenerator initialisieren
    srand(static_cast<unsigned int>(time(nullptr)));

    int unteresLimit = 1; // Standard unteres Limit für D6
    int oberesLimit = 6; // Standard oberes Limit für D6

    // Würfeln und Ergebnis ausgeben
    int wurf = 0;
    wurf = (rand() % (oberesLimit - unteresLimit + 1)) + unteresLimit;
    int modifikator = 0;

    // Modifikator abfragen
    cout << "Gib einen Modifikator ein (0, wenn keiner): ";
    cin >> modifikator;

    int ergebnis = 0;
    ergebnis = wurf + modifikator;

    cout << "Du hast einen 6-seitigen Würfel geworfen und die Zahl " << wurf << " erhalten." << endl;
            cout << "Mit Modifikator " << modifikator << " beträgt das Ergebnis: " << ergebnis << endl;
}

int D4Roll(){
    // Zufallsgenerator initialisieren
    srand(static_cast<unsigned int>(time(nullptr)));

    int unteresLimit = 1; // Standard unteres Limit für D4
    int oberesLimit = 4; // Standard oberes Limit für D4

    // Würfeln und Ergebnis ausgeben
    int wurf = 0;
    wurf = (rand() % (oberesLimit - unteresLimit + 1)) + unteresLimit;
    int modifikator = 0;

    // Modifikator abfragen
    cout << "Gib einen Modifikator ein (0, wenn keiner): ";
    cin >> modifikator;

    int ergebnis = 0;
    ergebnis = wurf + modifikator;

    cout << "Du hast einen 4-seitigen Würfel geworfen und die Zahl " << wurf << " erhalten." << endl;
            cout << "Mit Modifikator " << modifikator << " beträgt das Ergebnis: " << ergebnis << endl;
}

int main() {
    D20Roll();
}


