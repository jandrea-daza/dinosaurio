#ifndef miguel_h
#define miguel_h
#include "Arduino.h"

class miguel {
  private:    
    int y;         

  public:
    miguel(int posicionInicial);
    void mover();
    int obtenerPosicion();    
};

#endif
