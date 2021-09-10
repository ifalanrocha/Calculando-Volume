#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 
 
int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int RAIO, ALTURA, VOLUME;
 
    cout<<"Qual o raio? \n";
    cin >>RAIO;
    
    cout<<"Qual a altura? \n";
    cin >>ALTURA;
    
    VOLUME=3,14*(RAIO*RAIO)*ALTURA;
    
    cout <<"O volume é: "<< VOLUME; 
    cout <<"\n"; 
    
    system("pause"); 
}
