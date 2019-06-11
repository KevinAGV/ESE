#include <programa.h>

int contador =0;

#INT_TIMER0
void TIMER0(){
    contador++;
    output_low(PIN_D2);
    set_timer0(15536);
}
void main()
{
   
    
    
    
   while(TRUE)
   {

        if(contador==10){
            output_high(PIN_D2);
            contador=0;
            
        
        }
      //TODO: User Code
   }

}
