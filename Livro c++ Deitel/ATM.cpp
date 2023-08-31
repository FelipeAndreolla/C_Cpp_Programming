/*
    Escreva uma instrução (ou comentário) para realizar cada uma das seguintes sentenças (assuma que as declarações using foram utilizadas):
    a) Determine se um programa calcula o produto de três inteiros.
    b) Declare as variáveis x, y, z e result como tipo int (em instruções separadas).
    c) Peça para o usuário inserir três inteiros.
    d) Leia três inteiros a partir do teclado e armazene-os nas variáveis x, y e z.
    e) Compute o produto dos três inteiros contidos nas variáveis x, y e z e atribua o resultado à variável result.
    f) Imprima “The product is: “ seguido pelo valor da variável result.
    g) Retorne um valor de main para indicar que o programa terminou com sucesso.
*/

// Calcula o produto de três inteiros

#include <iostream>

int main(){

    int x;
    int y;
    int z;
    int resultado;

    std::cout << "Digite três valores inteiros: \n";
    std::cin >> x >> y >> z;
    resultado = x * y * z;
    std::cout << "O valor final é: " << resultado << std::endl;

    return 0;
}