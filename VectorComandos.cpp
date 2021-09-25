//
//  VectorComandos.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <string>
#include <locale.h>
#include "StringList.h"
#include <fstream>
#include <istream>
#include <algorithm> // std::copy
#include <iterator>  // istream_iterator
#include <stdio.h>
#include <iostream>//Incluir uma Biblioteca Externa
#include <string>//Biblioteca padrao std:: que e o name espace
using namespace std;

// <tipo de retorno> <nome> (<argumentos...>) {<escopo>}
void PrintTest(int x){//acresentando & muda os valores de 20, 30
                        //Precisa dar valor int y=20;...
    x +=1;
    std::cout<<x<<"foi o Teste! \n";
    //std::cout<<"Teste!\n";
    //std::cout<<"Batata!\n";
    //std::cout<<"Dinosauro";
}
int main(int argc, char** argv){
    int x = 10;
    PrintTest(x);
    std::cout<<x<<"\n";
    PrintTest(20);
    PrintTest(30);
}

int MySum(int x, int y){// para sumar dos caracteres con valor definido
        return x+y;
}
int main(int argc, char** argv){
        int x = 10;
        int y = 10;
        int z; //x+y
        //z = x+y; Seria a opcao comun de fazer
        z = MySum(x, y);
    std::cout<<z<<"\n";
    }

struct Human {//Container de dados pasados publico = class
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
        std::cout<<"Name:"<<name<< "\n";
        std::cout<<"Age:"<<age<< "\n";
        std::cout<<"Height"<<height<< "\n";
        std::cout<<"Weight"<<weight<< "\n";
    }
    std::string name;
    int age;//edade
    float height;//altura
    float weight;//peso
};

int main(int argc, char** argv){
    Human Marco("Marco",38);
    Human Antonio("Antonio",50);
    Marco.ShowID()
    std::cout<<"\n";
    Antonio.ShowID();
    
    //std::cout<<me.name<< "\n";
    //std::cout<<me.age<< "\n";
    //std::cout<<me.height<< "\n";
    //std::cout<<me.weight<< "\n";
    
    //me.name = "Marco Antonio";
    //me.age = 39
    //me.height = 1.75f;
    //me.weight = 90.f;
}

class Human {//Container de dados pasados privados
public: //Para definir la informacion q es publica
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
        std::cout<<"Name:"<<name<< "\n";
        std::cout<<"Age:"<<age<< "\n";
        std::cout<<"Height"<<height<< "\n";
        std::cout<<"Weight"<<weight<< "\n";
    }
    void Birthday(){
        age++;
        std::cout<<name<<" now is "<<age<<" years old\n";
    }
private:
    std::string name;
    int age;//edade
    float height;//altura
    float weight;//peso
};

int main(int argc, char** argv){
    Human marco("Marco",38);
    Human Antonio("Antonio",50);
    for(int i=0;i<10;i++){
    marco.Birthday();
    }
    Marco.ShowID();
    std::cout<<"\n";
    Antonio.ShowID();
    
    std::cout<<"Ola Mundo!\n";//Paquete de funcoes Utilitarios ConsolidOutPut
    
    int vidas; //10, 25 Numero Inteiro pode ser positivo negativo
    
    {
        int x = 10;
        if (x>=0){//Printar que xe+ ou xe-
            int y = 0;
            std::cout<<"X eh positivo!\n";
        }
        else{//senao, se ele nao entra no de cima vai entrar no de abaixo
            std::cout<<"X eh menor do que zero!\n";
            
        }
        
        while (true){//Sempre que for verdade ejecuta lup infinito
            int x = -10;//=Para definir um valor
            std::cout<<"Digite um numero: ";
            std::cin>> x; //Para o ususario digitar ConsolidInput
            if(x==1337){//==Para comparar dos valores
                break;//Quebra o Lup que esta rodando joga para o FINAL
            }
            if (x>0){//Se x for maior do que 0
                std::cout<<"X eh positivo!\n";
            }
            else if(x<0){//Para dar uma condicao antes
                std::cout<<"X eh negativo!\n";
            }
            else{//senao, se ele nao entra no de cima vai entrar no de abaixo
                std::cout<<"X eh menor do que zero!\n";
            }
            
        }
        for (int i=0; i<10;i++){//i++ =a i+=1 roda 10 veces i-- ou i-=1
            int x = -10;//=Para definir um valor
            std::cout<<"Digite um numero: ";
            std::cin>> x; //Para o ususario digitar ConsolidInput
            
            if (x>0){//Se x for maior do que 0
                std::cout<<"X eh positivo!\n";
            }
            else if(x<0){//Para dar uma condicao antes
                std::cout<<"X eh negativo!\n";
            }
            else{//senao, se ele nao entra no de cima vai entrar no de abaixo
                std::cout<<"X eh menor do que zero!\n";
            }
            
            {
                int myArray[10];//Roda 9 veces
                for(int i=0; i<10; i++){//Comeca em 0 ate menor que 10
                    myArray[i]=0;//=0 Comeca rodar em 0; =i de 0 a 9; =i+1 de 1 a 10
                }
                for(int i=0; i<10; i++){//
                    std::cout<<myArray[i]<<"\n";//Para printar
                }
            }
            
    int myInt=0; //10, 25 Numero Inteiro "Ignora os numeros depois da virgula"
                                            //Se dividir dois numeros Inteiro
    unsigned int myUint = 0;//Nao tem sinal. Nao pode ser negativo
    myInt=10;
    myInt=20;
    myInt=10 + 20;
    
    myInt +=10;
        myInt -=5 + myInt;
    myInt *=10;
    myInt /=10;
        std::cout<<myInt<< "\n";
    }
    
    
    float decimal2; //2.5 myFloat=0.0f "Colocar f no final para identificar"
                    //Permite nummeros decimais.
    double decimal; //2.499999999 myDouble =0.0;
    double decima2=5.2; //5.2 Tem mais precisao depois da virgula
    
    bool myBool = true;//Valor binario
    myBool = false;
    bool vivo; //true=verdadeiro1 | false=falso0
    bool viv=true; //true=verdadeiro1 | false=falso0
    
    char myChar = 't';//Um unico caracter 256 caracteres letras ou numeros
    char letras; //'B'
    char letra='B'; //'B'    string nome="Bruno" //"Bruno"
    char myArray[11] = "0123456789";//Aceita 10 caracteres porque o Ultimo caracter e \0
    
    std::string myString = "Teste";//Representa melhor que myArray de caracteres
    myString = "bshadbkas dksa";//Trocar o valor da string
    myString += "nksbdjksa";//Somar duas string
    
    size_t mySizeT = 0;//Tamaños de coisas. Nao pode ter numeros negativos -5
    
    cout << vidas << "\n";
    cout <<letra<<"\n";
    cout <<decimal<<"\n";
    cout <<vivo<<"\n";
    cout <<nome<<"\n";
    
    return 0;
}
