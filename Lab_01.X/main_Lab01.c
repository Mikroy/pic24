/*
 * File:   main_Lab01.c
 * Author: Rogelio Ruiz Esparza
 *
 * Created on 4 de mayo de 2021, 11:45 AM
 * PIC24FJ128GA406
 */

#include "xc.h"
//#include <pic24.h>

//#define FCY

void delay_num(int delayVar);
void filtro_complementario(int, float);

int main(void) {
  TRISB = 0;
  while (1) {
    LATB = ~LATB;
    delay_num(4096);
    delay_num(2000);
    filtro_complementario(50, 25.45);
  }
  return 0;
}

void delay_num(int delayVar) {
  while (delayVar) {
    delayVar--;
  }
}

void filtro_complementario(int delayVar, float var) {
  while (delayVar) {
    delayVar--;
    delay_num(1);
  }
}