#include <iostream>
#include <ctime>
using namespace std;

/* DECLARACIÓN DE VARIABLES Y MATRICES DENTRO DEL JUEGO */
const int x = 10; // puntero listas 
const int y =10; // puntero columnas
int a = 0; // genera un número random para agregar un barco a la matriz 
int tablero[x][y]; //tablero
int full = 10; // cantidad de naves que puede tener el tablero

/* MAIN */
int main(){
    vacio();
    mostrar();
    cout << "LA CANTIDAD DE BARCOS QUE QUEDAN SON: " << CantidadDeNaves() << endl;
    colocar();
    mostrar();
    system("pause");
    return 0;
}

// este lo unico que hace es que te muestra la matriz sin ningún barco dentro
void vacio(){
    for(int i = 0 ; i < x; i++){
        for(int m = 0 ; i < y; m++){
            tablero[i][m] = 0;
        }
    }
}

//es el que muestra la matriz o tablero
void mostrar(){
    for(int i = 0 ; i < x; i++){
        for(int m = 0 ; i < y; m++){
            cout << tablero[i][m] << " ";
        }
        cout << endl;
    }
}

//variable contador declarada para llevar cuenta de cuantas naves hay
void CantidadDeNaves(){
    int contador = 0;
        for(int i = 0 ; i < x; i++){
        for(int m = 0 ; i < y; m++){
            if(tablero[x][y] == 1){
                contador++;
            }
        }
    }return contador;
}

//esto se encarga de ir colocando de manera aleatoria naves en la matriz, representadas con 1
void colocar(){
    while(a < full){
        int colx = rand() % x; //genera un número random con límite 10 para colocarlo en x
        int coly = rand() % y; //genera un número random con límite 10 para colocarlo en y
        if(tablero[x][y] != 1){
            a++;
            tablero[x][y] = 1;
        }
    }
}

//booleano que va a buscar si hay una nave en el punto que le apuntemos. Si hay 1, hay nave.
bool ataque(int x, int y){
    if(tablero[x][y] == 1){
        tablero[x][y] = 2;
        return true;
    }
    return false;
}

