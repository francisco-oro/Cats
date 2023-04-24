#include <iostream>
#include <string> 
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nl,*ip;
    std::string ldp;

    std::cout << "Digite cuantas letras tiene su palabra : " << std::endl;
    std::cin >> nl;
    std::cout << "Ingrese una palabra : " << std::endl;
    std::cin >> ldp;

    ip = (int *)calloc(nl, sizeof(int));
    for (int i = 0; i < nl; i++)
    {
        *(ip + i) = static_cast<int>(ldp[i]);
        std::cout << *(ip + i)  << std::endl;
        /*Codigo para transformar a binario*/
    }    
    
    return 0; 
}
