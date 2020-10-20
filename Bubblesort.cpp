#include <iostream>
using namespace std;

//Implementação do BubbleSort 

void showList (int *);   // mostra o array na tela 
void bubbleSort (int *); // ordena o array 

int main () {
    int array[5] = {25,4,8,17,16};
    bubbleSort(array);
    showList(array);
    return 0;
}

void bubbleSort (int *array) {
    int aux = 0;
    
    for(int i = 0; i < 4; i++) { //compara um elemento do array com todos os outros
        for(int j = i + 1; j < 5; j++) {
            if(array[i] > array[j]) { // para ordenar em ordem decrescente, trocar ">" por "<"
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

void showList (int *array) { 
    cout << "Array Ordenado: ";
    for(int i = 0; i < 5; i++)
        cout << array[i] << ' ';
}