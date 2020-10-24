#include <iostream>
using namespace std;

// implementação de uma lista Encadeada Simples
// Lista (queue)

struct no {
    int info;
    struct no *prox;
};

typedef struct no *noPtr;
noPtr  ult = NULL, topo = NULL;

bool listaVazia();
void listar();
void Menu();
void enfileirar();
void desenfileirar();

int main() {
    Menu();
    return 0;
}

bool listaVazia() {
    if(topo == NULL) 
        return true;
    else
        return false;
}

void listar () {
    noPtr p = topo;

    if (listaVazia()) 
        cout << "Lista Vazia!";
    else {
        cout << "Lista: ";
        do {
            cout << p->info << ' ';
            p = p->prox;
        } while (p);
    }
    cout << '\n';
    Menu();
}

void Menu() {
    int op;
    cout << "----Escolha uma opcao----" 
         << "\n1: adicionar elemento na lista." 
         << "\n2: remover elemento na lista."
         << "\n3: mostrar lista."
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
            enfileirar();
            break;
        case 2:
            desenfileirar();
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

void enfileirar() {
    noPtr p = new no;
    // noPtr aux = topo;

    cout << "Digite um Numero: ";
    cin >> p->info;

    if(listaVazia()){
        p->prox = topo;
        topo = p;
        ult = p; 
    } else {
        p->prox = ult->prox;
        ult->prox = p;
        ult = p;
    }

    // Solução sem o Ponteiro ult, usando a variavel aux
    // if (listaVazia()) {
    //     p->prox = topo;
    //     topo = p;
    // } else {
    //     while(aux->prox != NULL) {
    //         aux = aux->prox;
    //     }
    //     p->prox = aux->prox;
    //     aux->prox = p;
    // }

    cout << "O Numero " << p->info << " foi inserido na lista!\n";
    Menu();
}

void desenfileirar() {
    if(listaVazia()) 
        cout << "Lista Vazia\n";
    else {
        noPtr p = topo;
        topo = topo->prox;
        cout << "O Numero "<< p->info << " foi deletado!\n";
        delete p;
    }
    Menu();    
}
