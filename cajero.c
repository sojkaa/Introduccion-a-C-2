#include <stdio.h>

int main(void) {

  // TODO
  int monto, b50 = 0, b20 = 0, b10 = 0, b5 = 0, b1 = 0;

    printf("ingrese monto a retirar:");
    scanf("%d", &monto);

    while (monto >= 50) {
    b50 = b50 + 1;
    monto = monto - 50;
    }

    while (monto >= 20) {
    b20 = b20 + 1;
    monto = monto - 20;
    }
  

    while (monto >= 10) {
    b10 = b10 + 1;
    monto = monto - 10;
    }

    while (monto >= 5) {
    b5 = b5 + 1;
    monto = monto - 5;
    }

    while (monto >= 1) {
    b1 = b1 + 1;
    monto = monto - 1;
    }

    printf("Cantidad de billetes de 50 a retirar %d\n", b50);
    printf("Cantidad de billetes de 20 a retirar %d\n", b20);
    printf("Cantidad de billetes de 10 a retirar %d\n", b10);
    printf("Cantidad de billetes de 5 a retirar %d\n", b5);
    printf("Cantidad de billetes de 1 a retirar %d\n", b1);
    

  
  return 0;
}
