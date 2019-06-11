#include <programa.h>
#INT_TIMER0
int contador =0;
long conteo=0;
int opcionA=1;
void TIMER0(){
    contador++;
    output_low(PIN_D2);
    if(opcionA==1){
        conteo++;
    }
    set_timer0(15536);
}
void main()
{
    setup_timer_0(RTCC_INTERNAL|RTCC_DIV_8);
    enable_interrupts(INT_TIMER0);
    enable_interrupts(GLOBAL);
    set_timer0(15536);
    
    printf("Bienvenido");
    char op;
   while(TRUE)
   {

        if(contador==1){
            output_high(PIN_D2);
            contador=0;
        }
        
        if(kbhit()){
        //getch(op);
            op=getch();
        }
        
        switch(op){
            case 'R':
               conteo=0;
            break;
            
           
            
        }
      //TODO: User Code
   }

}

