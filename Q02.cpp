
#include <iostream>    // input and output

using namespace std;

int main ()
{
    int input = 0, test ,a = 0, b = 1,c = 0;
    bool isFibonacci = false;

    // user input
    cout << "Digite um numero inteiro: ";
    cin  >> input; 

    // until input is passed by , or fibo is found
    while ( c < input && isFibonacci == false )
    {
        a = b;
        b = c;
        c = a + b;

        // test input with last fibo number (c)
        if ( input == c ) {
            isFibonacci = true;
        }
    }

    if( isFibonacci || input == 0 ){
        cout << "Pertence a sequencia Fibonnaci:";
    }
    else{
        cout << "Nao Pertence a sequencia Fibonnaci:";
    }

    return(0);
}

