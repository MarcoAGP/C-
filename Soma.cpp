//
//  Soma.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
#include <iostream>

int main(int argc, char** argv){
    
    int myInt = 0;
    
    myInt = 10;
    myInt = 20;
    myInt = 10 + 20;
    
    myInt += 10;
    myInt -= 5 + myInt;
    myInt *= 10;
    myInt /= 10;
    
    std::cout<<myInt<<"\n";
    
    system("pause");
    
    return 0;
}
