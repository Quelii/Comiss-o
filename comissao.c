#include<stdio.h>

int main(){  
    
    int salario, comissao, vendas, sf;
    
    printf("Digite o Salario Bruto \n");
    scanf("%d",& salario);
    
    printf("Digite Suas Vendas \n");
    scanf("%d",&vendas);
    
   sf = (vendas * 0.04) + salario;
   
    
    
    printf("Voce Receberar :%d de Salario", sf);
    
    
	
}