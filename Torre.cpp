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

   
};

int main() {
    
    return 0;
}
