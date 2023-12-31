/*
 * File:   Exemplo_2.c
 * Author: Windows10
 *
 * Created on 26 de Maio de 2023, 18:31
 */

// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)
//
#define _XTAL_FREQ 4000000
#include <xc.h>

void main(void) 
{
   //para configuração de porta usaremos os registradores TRISX, PORTX, LATX
   // 0 configura como saida 
   // 1 configura como entrada
   // TRISB=0;
   // TRISB=0X00;
   // TRISB=0b00001111;
   // TRISBbits.TRISB0=0;
   // TRISA=0b00000011;
    TRISA=0b00011111; //Configurando todos os pinos da portA como entradas
    TRISB=0b00000000; //Configurando todos os bits da portB como saidas
    PORTB=0x00;      //Apagando todos os bits.
    
      while(1)
    {
          PORTB=0b11110000;    
    } 
}

