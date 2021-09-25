//
//  SiempreVerdade.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <iostream>
#include <string>

int main(int argc, char** argv) {

 for(int i=0; i<10; i++){//para rodar uma cantidad determinada 10veces
// i++ = x++; = x+=1; = x-- = x-=1
 //while (true) {//vai executar sempre que for verdade
        
    int x = -10;//cambiando valor
    
    std::cout<<"Digite um numero: ";
    std::cin>>x;//codigo para incerir datos
    
    //    if (x==1337) {
    //    break;//para sair do infinito
    //}
    
    if(x>0) {
        std::cout<<"X eh positivo!\n";
    }
    else if (x<0){
        std::cout<<"X eh negativo!\n";
    }
    else{
        std::cout<<"X eh zero\n";
    }
 }
    return 0;
}
