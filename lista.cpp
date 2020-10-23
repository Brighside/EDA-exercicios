#include <iostream>
#include <stdlib.h>

using namespace std;

void fazListavazia(int *); 
void insere(int , int *);
void retira(int, int *);
bool listaVazia(int *);
void imprime(int *);
int menu(int *);

int main() {
    int vetor[5] = {0, 0, 0, 0, 0};
    int continua;
    do {
        continua = menu(vetor);
    }
    while (continua != 5);

    return 0;
}

int menu(int *vetor){
    int escolha, num;
        cout << "---EScolha uma opção---\n" << 
        "1 - Criar uma lista vazia\n"<< 
        "2 - Inserir um Número na lista\n"<< 
        "3 - Retirar Um Número da lista\n"<< 
        "4 - Mostrar a lista na tela\n"<<
        "5 - sair do programa\n" << 
        "Qual sua escolha? ";
        cin >> escolha;
    
        switch (escolha)
        {
        case 1:
            fazListavazia(vetor);
            break;
        case 2:
            cout << "Digite o Número: ";
            cin >> num;
            insere(num ,vetor);
            break;
        case 3:
            cout << "Digite o Número: ";
            cin >> num;
            retira(num, vetor);
            break;
        case 4:
            imprime(vetor);
            break;
        case 5:
            cout << "Ate a proxima (* - *)/\n";
            break;
       default:
            cout << "Opção invalida\n" << 
            "Digite novamente: ";
            cin >> escolha;
            return false;
        }
        
        return escolha;
}

void fazListavazia(int *vetor){
    if (!listaVazia(vetor)) {
        char res;
        cout << "No momento já existe uma lista\n" <<
        "Digite 's' para continuar: ";
        cin >> res;
        
        if (res == 's') {
            for (int i = 0; i < 5; i++) {
            vetor[i] = 0;
            }

            cout << "Lista Criada\n";
        } else {
            cout << "Lista não apagada";
        } 
    } else {
         for (int i = 0; i < 5; i++) {
            vetor[i] = 0;
            }

            cout << "Lista Criada";
    } 
}

void insere(int num, int *vetor){
    bool inserido = 0;
    for (int i = 0; i < 5; i++) {
        if (vetor[i] == NULL) {
            vetor[i] = num;
            inserido++;
        }
    }

    if (inserido < 1) {
        cout << "Número não inserido na lista\n" << 
        "Lista Cheia\n";
    } else {
        cout << "O Número foi inserido na lista com sucesso\n";
    }
}

void retira(int num, int *vetor){
    if (!listaVazia(vetor)) {
            for (int i = 0; i < 5; i++) {
                if (num == vetor[i]){
                    vetor[i] = NULL;
                }
            }

            cout << "Número apagado da lista\n";
    } else {
        cout << "A lista está vazia\n";
    }
}

bool listaVazia(int *vetor){
    bool taVazia = true;
    for(int i = 0; i < 5; i++){
            if (vetor[i] != NULL){
                taVazia = false;
            } 
    }

    return taVazia;
}

void imprime(int *vetor){
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << ' ';    
    }

    cout << endl;
    system("pause");
}