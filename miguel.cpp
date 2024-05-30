#include "miguel.h"

miguel::miguel(int posicionInicial) {  
  y = posicionInicial;  
}

void miguel::mover() {   
  if(y > 0) {
    y = y - 1;
  }
  else {
    y = 16;
  }  
}

int miguel::obtenerPosicion() {
  return y;
}
