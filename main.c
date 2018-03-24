#include <p18f67j60.h>
#define _XTAL_FREQ 2000000

int main()
{
  TRISB4 = 0; //RB0 as Output PIN
  TRISA0 = 0; //RA0 as Output PIN
  TRISA1 = 0; //RA1 as Output PIN
  TRISE1 = 0; //RE1 as Output PIN
  TRISE0 = 0; //RE1 as Output PIN

  TRISB2 = 0;
  TRISB3 = 0;
  TRISG4 = 0;
  
  TRISF6 = 0;
  TRISF5 = 0;
  TRISF4 = 0;
  TRISF3 = 0;
  TRISF2 = 0;
  TRISF1 = 0;
  TRISA3 = 0;
  TRISA2 = 0;
  TRISA5 = 0;
  TRISA4 = 0;

  TRISC2 = 0;
 
  TRISB5 = 0;
  TRISB4 = 0;
  TRISD2 = 0;
  TRISD1 = 0;
  TRISD0 = 0;
  TRISE5 = 0;
  TRISE4 = 0;
  TRISE3 = 0;
  TRISE2 = 0;
  
  
  while(1)
  {
    RB4 = 1;  // LED ON
    RB2 = 1;
    RB3 = 1;
    RG4 =1;
    RF1 = 1;
    RB5 = 1;
    RD2 = 1;
    RD1 = 1;
    RD0 = 1;
    __delay_ms(1); 
    RB4 = 0;  // LED ON
    RB2 = 0;
    RB3 = 1;
    RG4=1;
    RF1 = 1;
    
    RB5 = 1;
    RD2 = 1;
    RD1 = 1;
    RD0 = 1;
    
    __delay_ms(1); 
    RB4 = 1;  // LED ON
    RB2 = 0;
    RB3 = 0;
    RG4 =0;
    RF1 = 1;
    RB5 = 1;
    RF1 = 0;
    RB5 = 0;
    RD2 = 1;
    RD1 = 1;
    RD0 = 1;
    __delay_ms(1); 
    RB4 = 0;  // LED ON
    RB2 = 0;
    RB3 = 0;
    RG4=0;
    RF1 = 0;
    RB5 = 0;
    RD2 = 1;
    RD1 = 1;
    RD0 = 1;
    __delay_ms(1); 
    RB4 = 1;  // LED ON
    RB2 = 0;
    RB3 = 0;
    RG4=0;
    RF1 = 0;
    RB5 = 0;
    RD2 = 1;
    RD1 = 1;
    RD0 = 1;
    __delay_ms(1);
    RB4 = 0;  // LED ON
    RB2 = 0;
    RB3 = 0;
    RG4=0;
    RF1 = 0;
    RB5 = 0;
    RD2 = 0;
    RD1 = 1;
    RD0 = 1;
    __delay_ms(1);
    RB4 = 1;  // LED ON
    RB2 = 0;
    RB3 = 0;
    RG4=0;
    RF1 = 0;
    RB5 = 0;
    RD2 = 0;
    RD1 = 0;
    RD0 = 1;
    __delay_ms(1);
    RB4 = 1;  // LED ON
    RB2 = 0;
    RB3 = 0;
    RG4=0;
    RF1 = 0;
    RB5 = 0;
    RD2 = 0;
    RD1 = 0;
    RD0 = 0;
    
    
    
    
    
    
    __delay_ms(10);
  }
  return 0;
}