//
//  num_30primo.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
int main() {
    int nprimo=3;
    int primo=3;
    int divisor=1;
    int flag=1;
    printf("2 3 ");
    while(nprimo<=30){ //modificar quantidade para ter resultado diferente de resultado
        do{
            if(((primo%divisor)==0)&&(divisor==primo)){
                printf("%d ",primo);
                nprimo=nprimo+1;
                flag=0;
            }else{
                if(((primo%divisor)==0)&&(divisor!=primo)){
                    flag=0;
                }
            }
            divisor=divisor+2;
        }while(flag);
        divisor=3;
        primo=primo+2;
        flag=1;
    }
    return 0;
}
