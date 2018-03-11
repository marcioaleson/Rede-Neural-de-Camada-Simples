#include<stdio.h>

int main(){
int entradas = 0 ,qDeNeuronios = 0 ,i = 1, j = 1;
float x = 0, w = 0,aux = 0, limear = 0;
printf("Entre com a quantidade de entradas Xn:");
scanf("%d",&entradas);
printf("Entre com a quantidade de neuronios:");
scanf("%d",&qDeNeuronios);
for(i = 1;i <= qDeNeuronios; i++){
    printf("Entre com o Limear de ativacao Q do neuronio %d:",i);
    scanf("%f",&limear);
    for(j = 1; j <= entradas ; j++){
       printf("Entre com peso sinaptico W do neuronio %d:",i);
       scanf("%f",&w);
       printf("Entre com sinal de entrada X do neuronio %d:",i);
       scanf("%f",&x);
        aux += w*x;
    }
    (aux-limear)>=0 ? printf("Saida da funcao degrau: 1"): printf("Saida da funcao degrau: 0");
}
return 0;
}
