#include <iostream>
using namespace std;

//Implementação do Selectionsort 

void showList (int *);      // mostra o array na tela 
void selectionSort (int *); // ordena o array 

int main () {
    int array[5] = {25,4,8,17,16};
    selectionSort(array);
    showList(array);
    
    return 0;
}

void selectionSort (int *array) {
    int aux = 0;

    for(int i = 0; i < 4; i++) {  
        int menor = i; 

        for(int j = i + 1; j < 5; j++) {  
            if(array[menor] > array[j]){
                menor = j;
            }
        }

        // se o valor da variavel menor for diferente da posição atual do laço, será realizada a troca
        if(menor != i) { 
            aux = array[i];
            array[i] = array[menor];
            array[menor] = aux;
        } 
    }
}

void showList (int *array) { 
    cout << "Array Ordenado: ";
    for(int i = 0; i < 5; i++)
        cout << array[i] << ' ';
}