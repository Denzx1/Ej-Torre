#include <iostream>
using namespace std;

class Torre {
private:
    int fila;
    int columna;
    bool isBlack;
    
    bool validateMovement(int newFila, int newColumna){
        if(newFila == fila || newColumna == columna){
            return true;
        }
        else {
            return false;
        }
    }

public:
    Torre(int f, int c, bool black){
        fila = f;
        columna = c;
        isBlack = black;
    }

    void move(int newFila, int newColumna){
        if(newFila >0 && newFila <9 && newColumna >0 && newColumna <9){
            if(validateMovement(newFila, newColumna)){
                fila = newFila;
                columna = newColumna;
                cout<<"Realizando Moviemiento a la posicion: ("<<fila<<","<<columna<<")"<<endl;
            }
        }
        else {
            cout<<"Movimiento invlaido fuera del tablero"<<endl;
        }
    }
   
};

int main() {
    
    return 0;
}
