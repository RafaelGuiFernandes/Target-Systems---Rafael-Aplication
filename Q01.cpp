
#include <iostream>    // para entradas e saidas

using namespace std;

int main ()
{
    int INDICE = 13, SOMA = 0, K = 0;

    while ( K < INDICE)
    {
        K++;

        SOMA = SOMA + K;
    }

    cout << SOMA;

    return(0);
}

