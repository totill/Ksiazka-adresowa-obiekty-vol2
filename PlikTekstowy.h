#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU_TEKSTOWEGO;

public:
    PlikTekstowy(string nazwaPlikuTekstowego) : NAZWA_PLIKU_TEKSTOWEGO(nazwaPlikuTekstowego) {}

    string pobierzNazwePliku();
    bool czyPlikJestPusty();
};

#endif // PLIKTEKSTOWY_H
