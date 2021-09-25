//
//  MyArray.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
#include <iostream>

#include <string>

int main(int argc, char** argv) {
    int myArray[10];

 for(int i=0; i<10; i++){//para rodar uma cantidad determinada 10veces comeca em 0 e termina em 9
// i++ = x++; = x+=1; = x-- = x-=1

        myArray[i]=i + 1;//com [0] roda 10 veces 0
}
        
    for(int i=0; i<10; i++){
        std::cout << myArray[i] << "\n";
}



    return 0;
    
}
