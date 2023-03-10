#include <iostream>     // input and output
#include <cstring>

using namespace std;

int main()
{
    // string str = "Hello, World!"
    string  str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // C-string

    cout << "string = " << str << endl;
    
    char    letter = '0';
    int     length = str.length() -1 ;
    int     index = 0;

    while( index < length  )
    {
        letter      = str[index];
        str[index]  = str[length];
        str[length] = letter;

        length = length - 1;
        index = index + 1;
    }

    
    cout << "string invertida = " << str;

    return (0);   
}