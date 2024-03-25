#include <iostream>

//Inclui cada item da bibiloteca padrão de C++
using std::cin;
using std::cout;
using std::endl;
using std::string;


// Resolução Questão 1:
int potencia(int iBase, int iExpoente){
    int iResposta = 1;
    for(int i=0; i<iExpoente; i++){
        iResposta = iResposta * iBase;
    }

    return iResposta;
}

int main()
{
    int iBase;
    int iExpoente;
    int iResposta;


    std::cin >> iBase;
    std::cin >> iExpoente;

    iResposta = potencia(iBase, iExpoente);

    std::cout << iResposta;

    return 0;
}
