//
//  Humano.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
#include <iostream>
#include <string>

// <tipo de retorno> <nome> (argumentos...>){
//        <escopo>
//}
class Human {
 public:
    Human(){
        this->name = "Human";
        this->age = 0;
        this->height = 0.10f;
        this->weight = 0.5f;
    }
    Human(std::string n, int age=0){
        this->name = n;
        this->age = age;
        this->height = 0.10f;
        this->weight = 0.5f;
    }
    
    void ShowID(){
        std::cout<<"Name:"<<name<<"\n";
        std::cout<<"Age:"<<age<<"\n";
        std::cout<<"Height:"<<height<<"\n";
        std::cout<<"Weight:"<<weight<<"\n";
    }
    void Birthday() {
        age++;
        std::cout<<name<<" now is "<<age<<" years old \n";
    }
    
private:
    std::string name;
    
    int age;
    float height;
    float weight;
};

int main(int argc, char** argv) {
    Human tonny("Tonny",38);
    Human dominic("Dominic",40);
    
    for(int i=0; i<10; i++){
    tonny.Birthday();
}
    
    tonny.ShowID();
    std::cout<<"\n";
    dominic.ShowID();
    
    return 0;
    
}
