#include <stdio.h>


double raizq(double);

int main(void) {  
    double numeroReal;    
    scanf("%lf",&numeroReal);    
    printf("%.2f \n",raizq(numeroReal));
    return(0);
}

double raizq (double numeroReal) {
    int x;
    double resultado = numeroReal;    
    for (x = 0; x < 200; ++x) {
    	resultado = resultado/2 + numeroReal/(2*resultado);	
    }            
    return(resultado);    
}