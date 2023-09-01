// Define a classe GradeBook com uma função-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.

#include <iostream>
#include <string>

using namespace std;

// Definição da classe GradeBook
class GradeBook
{
    public:
        void MostraMensagem( string nomeCurso ){
            // função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
            cout << "Bem vindo ao livro de notas de " << nomeCurso << "!" << endl;
        }
};


int main(){

    string nomeDoCurso;
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook
    
    cout << "Por favor, informe o nome do curso: \n\n" << endl;
    getline( cin, nomeDoCurso );

    myGradeBook.MostraMensagem( nomeDoCurso ); // chama a função displayMessage do objeto

    return 0;
}