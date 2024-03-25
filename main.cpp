#include <iostream>

//Inclui cada item da bibiloteca padrão de C++
using std::cin;
using std::cout;
using std::endl;
using std::string;

int fatorial(int iNumero);
int fibonacci(int iPosFibonacci);
int numdigitos(float fNumero);



int main()
{
    int iBase;
    int iExpoente;
    int iResposta;

    cin >> iBase;
    cin >> iExpoente;

    iResposta = potencia(iBase, iExpoente);

    cout << iResposta;

    float fNumero;

    cout << "Digite um número: ";
    cin >> fNumero;

    int num_dig = numdigitos(fNumero);

    cout << "O número de dígitos em " << fNumero << " é: " << num_dig << endl;

    int iPosFibonacci;

    cout << "Digite a posição na sequência de Fibonacci: ";
    cin >> iPosFibonacci;

    int resultado = fibonacci(iPosFibonacci);

    cout << "O número de Fibonacci na posição " << iPosFibonacci << " é: " << resultado << endl;

    cout << "Digite o valor inicial: ";
    cin >> iInicial;

    cout << "Digite a razão: ";
    cin >> iRazao;

    cout << "Digite a posição: ";
    cin >> iPosicao;

    int iValorFinal = progressao_aritmetica(iInicial, iRazao, iPosicao);

    cout << "O valor na posição " << iPosicao << " da progressão é: " << iValorFinal << endl;


    return 0;
}

int potencia(int& iBase, int& iExpoente){
    int iResposta = 1;
    for(int i = 0; i < iExpoente; i++){
        iResposta *= iBase;
    }
    return iResposta;
}

int fatorial(int& iNumero) {
    int iResposta = iNumero;
    if (iNumero == 1) {
        return 1;
    } else {
        return iResposta * fatorial(--iNumero);
    }
}

int progressao_aritmetica(int& iInicial, int& iRazao, int& iPosicao) {
    int iValorFinal;
    iValorFinal = iInicial + iPosicao * iRazao;
    return iValorFinal;
}

int fibonacci(int& iPosFibonacci) {
    if (iPosFibonacci < 2) {
        return 1;
    }
    return fibonacci(iPosFibonacci - 1) + fibonacci(iPosFibonacci - 2);
}

int numdigitos(float& fNumero) {
    int iContador = 0;
    while (fNumero >= 1) {
        fNumero /= 10;
        iContador++;
    }
    return iContador;
}
