#include <programa.h>
#INT_TIMER0
int contador =0;

void TIMER0(){
    contador++;
    output_low(PIN_D2);
    set_timer0(15536);
}
void main()
{
    setup_timer_0(RTCC_INTERNAL|RTCC_DIV_8);
    enable_interrupts(INT_TIMER0);
    enable_interrupts(GLOBAL);
    set_timer0(15536);
    
    printf("Bienvenido");
    
   while(TRUE)
   {

        if(contador==1){
            output_high(PIN_D2);
            contador=0;
            
        
        }
      //TODO: User Code
   }

}

