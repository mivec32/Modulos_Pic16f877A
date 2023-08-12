/*
 * File:   Exemplo_1.c
 * Author: Windows10
 *
 * Created on 27 de Maio de 2023, 14:34
 */


// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.



#define _XTAL_FREQ 4000000  // Oscilador tipo XT de 4MHz
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
    
    OPTION_REGbits.nRBPU=0; // ativa as resistências pull-up 
    TRISBbits.TRISB0=1;  //B0 como entrada
    TRISBbits.TRISB1=0;  // B1 como saida
    PORTBbits.RB1=0;     // estado inicial do pino em apagado
    
      while(1)
    {
        if(PORTBbits.RB0==1)
        {
            PORTBbits.RB1=1;
        }
        else
        {
            PORTBbits.RB1=0;
        }   
        
    } 
}

