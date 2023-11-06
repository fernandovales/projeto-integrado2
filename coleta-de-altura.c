
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    float altura[5];
    float somaaltura,media,maioraltura,menoraltura;
    int i,qtde;
    //PEGANDO AS ALTURAS, SOMA E A MEDIA
    for(int i=0;i<5;i++){
        printf("digite a altura: ");
        scanf("%f",&altura[i]);
        somaaltura=somaaltura+altura[i];
        qtde++;
        
    }
    media=somaaltura/qtde;
    
    //MAIOR ALTURA
    maioraltura=0;
    for(int i=0;i<5;i++){
        if(altura[i]>maioraltura){
            maioraltura=altura[i];
        }
    }
    
    //MENOR ALTURA
   menoraltura=altura[0];
   for(int i=1;i<5;i++){
       if(altura[i]< menoraltura){
           menoraltura=altura[i];
       }
   }
    
    //ALTURAS INFERIOR A MÉDIA
    int contmenor;
    for(i=0;i<5;i++){
        if(altura[i]<media){
            contmenor++;
        }
        
    }
    printf("soma = %f\n",somaaltura);
    printf("media = %f\n",media);
    printf("maior altura = %f\n",maioraltura);
    printf("menor altura = %f\n",menoraltura);
    printf("inferior a media= %d\n",contmenor);
    
    return 0;
    
}