// Define a classe GradeBook com uma função-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.

#include <iostream>

using namespace std;

// Definição da classe GradeBook
class GradeBook
{
    public:
        void MostraMensagem(){
            // função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
            cout << "Bem vindo ao livro de notas." << endl;
        }
};


int main(){

    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook
    myGradeBook.MostraMensagem(); // chama a função displayMessage do objeto

    return 0;
}