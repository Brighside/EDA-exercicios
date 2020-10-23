#include <iostream>
using namespace std;

// implementação de uma lista Encadeada Simples

struct no
{
    int info;
    struct no *prox;
};

typedef struct no *noPtr;
noPtr topo = NULL;

bool listaVazia(noPtr topo);
void Menu();
void listar();
void empilhar();
void desempilhar();

int main() {
    Menu();
    return 0;
}

bool listaVazia(noPtr topo) {
    if(topo != NULL) {
        return false;
    }
    else 
        return true;
}

void Menu() {
    int op;
    cout << "----Escolha uma opcao----" 
         << "\n1: adicionar elemento na pilha." 
         << "\n2: remover elemento na pilha."
         << "\n3: mostrar a pilha."
         << "\n0: sair"
         << "\n-------------------------"
         << "\nDigite sua opcao: ";
    do {
        cin >> op;
        switch (op)
        {
        case 0:
            cout << "Ate a Proxima (; - ;)/";
            break;
        case 1:
            empilhar();
            break;
        case 2:
            desempilhar();
            break;
        case 3:
            listar();
            break;
        default:
            cout << "opcao invalida!" 
                << "\ndigite uma opcao valida: ";
            break;
        }
    } while (op > 3 || op < 0);
}

void listar() {
    noPtr p = topo;
    if(listaVazia){
        cout << "Lista Vazia!\n";
    } else {
        cout << "Pilha: ";
        // while(p->prox != NULL) {
        //     cout << p->info;
        //     p = p->prox;
        // }
    }

    Menu();
}

void empilhar() {
    noPtr p = new no;
    cout << "-------------------------"
         << "\nDigite um numero: ";
    cin >> p->info;

    p->prox = topo;
    topo = p;

    cout << "O Numero " << p->info << " foi adicionado na pilha!\n";
    cout <<"topo->info: " << topo->info << "\ntopo->prox: " << topo->prox << '\n';
    Menu();
}

void desempilhar() {

}
