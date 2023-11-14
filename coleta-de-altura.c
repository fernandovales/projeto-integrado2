#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    float altura[5];
    float somaaltura,media,maioraltura,menoraltura;
    int i,qtde;
    
    //Iniciando o gerador de altura
    srand(time(NULL));
    
    //Pegando a altura, a soma e media das alturas
    somaaltura=0;
    for(int i=0;i<5;i++){
        //Gera um valor aleatório entre 1.0 e 3.0
        altura[i] = ((float)rand() / RAND_MAX) * 3.0 + 1.0;
        somaaltura=somaaltura+altura[i];
        qtde++;
        
    }
    media=somaaltura/qtde;
    
    //Maior altura
    maioraltura=0;
    for(int i=0;i<5;i++){
        if(altura[i]>maioraltura){
            maioraltura=altura[i];
        }
    }
    
    //Menor altura
   menoraltura=altura[0];
   for(int i=1;i<5;i++){
       if(altura[i]< menoraltura){
           menoraltura=altura[i];
       }
   }
    
    //Contando as alturas inferiores a média
    int contmenor=0;
    for(i=0;i<5;i++){
        if(altura[i]<media){
            contmenor++;
        }
        
    }
    //Mostrando as informações
    printf("A SOMA DAS ALTURAS = %.2f\n",somaaltura);
    printf("A MÉDIA DAS ALTURAS = %.2f\n",media);
    printf("A MAIOR ALTURA = %.2f\n",maioraltura);
    printf("A MENOR ALTURA = %.2f\n",menoraltura);
    printf("QUANTAS ALTURAS INFERIOR A MÉDIA = %d\n",contmenor);
    
    //APENAS PARA MOSTRAR AS ALTURAS
    for(int i=0;i<5;i++){
        printf("%.2f\n",altura[i]);
    }
    
    return 0;
    
}
