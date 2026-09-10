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
    Torre(int f, int c, bool color){
        fila = f;
        columna = c;
        isBlack = color;
    }

    void move(int newFila, int newColumna){
        if(newFila >0 && newFila <9 && newColumna >0 && newColumna <9){
            if(validateMovement(newFila, newColumna)){
                fila = newFila;
                columna = newColumna;
                cout<<"Realizando Moviemiento a la posicion: ("<<fila<<","<<columna<<")"<<endl;
            }
            else{
                cout<<"Movimiento invalido"<<endl;
            }
        }
        else {
            cout<<"Movimiento invalido fuera del tablero"<<endl;
        }
    }
   
    string draw(){
        if(isBlack){
            return "##";
        }
        else{
            return "TT";
        }
    }

    void Printstate(){
        cout<<"color de la torre: "<<draw()<< " " << (isBlack ? "Negro" : "Blanca") << endl;
        cout<<"en posicion,  fila: "<<fila<<", columna: "<<columna<<endl;
    }
};

int main() {
    int fil, col;
    Torre t1(1,3,true), t2(3,4,false);
    cout<<"Ingrese fila para t1 : "<<endl;
    cin>>fil;
    cout<<"Ingrese columna para t1 : "<<endl;
    cin>>col;
    t1.move(fil, col);
    t1.Printstate();

    cout<<"Ingrese fila para t2 : "<<endl;
    cin>>fil;
    cout<<"Ingrese columna para t2 : "<<endl;
    cin>>col;
    t2.move(fil, col);
    t2.Printstate();
    return 0;
}
