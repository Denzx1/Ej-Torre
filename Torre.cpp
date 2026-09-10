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
   
    string draw(){
        if(isBlack){
            cout<<"White ";
            return "##";
        }
        else{
            cout<<"Black";
            return "TT";
        }
    }

    void Printstate(){
        cout<<"color de la torre: "<<draw()<<endl;
        cout<<"en posicion,  fila: "<<fila<<", columna: "<<columna<<endl
    }
};

int main() {
    
    return 0;
}
