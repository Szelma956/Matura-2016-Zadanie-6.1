// Matura 2016 Zadanie 6.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
using namespace std;

const int maks = 3000;
char litery[maks];
int k = 107;
int x = k % 25;

int main()
{
    int j = 0;
    int enter = 0;
    ifstream dane("dane.txt");
    ofstream wynik("wynik.txt");
    for (int licznik = 0; !dane.eof(); licznik++) {
  
        dane >> litery[licznik];
        if (litery[licznik] > 90)
            break;
        else if (litery[licznik] < 65)
            break;
        else if (litery[licznik] == '\r\n')
            enter++;
        j++;
    }
    for (int i = 0; i < j; i++) {
        char litera = litery[i];
        int cyfrolitera = (int)litera;
        if (cyfrolitera + x > 90) {
            cyfrolitera = -90 + x + cyfrolitera + 65;
        }
        else
        {
            cyfrolitera = cyfrolitera + x;
        }
        int cos = cyfrolitera;
        char literocyfra = (char)cos;
            wynik << literocyfra;
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
