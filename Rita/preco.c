#include <stdio.h>

float op1(float pr){
    float desconto;
    desconto = pr * 0.90;
    return desconto;
}

float op2(float pr ){
    float parcela;
    parcela = pr / 2;
    return parcela;
}

float op3(float pr){
    int op;
    float parcela = pr;
    printf("Digite a quantidade de parcelamento:\n1-em 3x\n2-em 4x\n3-em 5x\n4-em 6x\n5-em 7x\n6-em 8x\n7-em 9x\n8-em 10x\n ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
       printf("Parcelamento em 3x!\n");
        if (parcela > 100)
        {
          parcela = (parcela/3) * 1.3;
        } else{
          parcela =  parcela/3;
        }
            return parcela;
            break;
    case 2:
       printf("Parcelamento em 4x!\n");
        if (parcela > 100)
        {
            parcela = (parcela/4) * 1.3 ;
        } else{
           parcela = parcela/4;
        } 
            return parcela;
            break;
    case 3:
       printf("Parcelamento em 5x!\n");
        if (parcela > 100)
        {
          parcela = (parcela/5) * 1.3 ;
        } else{
           parcela = parcela/5;
        } 
        return parcela; 
        break; 

    case 4:
       printf("Parcelamento em 6x!\n");
        if (parcela > 100)
        {
           parcela = (parcela/6) * 1.3 ;
        } else{
           parcela = parcela/6;
        } 
        return parcela;
        break; 

    case 5:
       printf("Parcelamento em x7!\n");
        if (parcela > 100)
        {
            parcela = (parcela/7) * 1.3 ;
        } else{
          parcela = parcela/7;
        } 
        return parcela;
        break;  

    case 6:
       printf("Parcelamento em 8x!\n");
        if (parcela > 100)
        {
            parcela = (parcela/8) * 1.3 ;
        } else{
            parcela = parcela/8;
        }  
        return parcela;
        break;  

    case 7:
       printf("Parcelamento em 9x!\n");
        if (parcela > 100)
        {
            parcela = (parcela/9) * 1.3;
        } else{
            parcela =  parcela/9;
        } 
        return parcela;
        break; 

    case 8:
       printf("Parcelamento em 10x!\n");
        if (parcela > 100)
        {
            parcela =  (parcela/10) * 1.3 ;
        } else{
            parcela = parcela/10;
        } 
        return parcela;
        break;
    
    default:
        break;
    }
} 

int main(){
    float valortotal, saida;
    int op;

    printf("Digite o total gasto pelo cliente: ");
    scanf("%f", &valortotal); 

    printf("Digite as opção de pagamento desejada:\n1-À vista\n2-Em 2x\n3-Parcelado\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        saida = op1(valortotal);
        printf("%.f", saida);
        break;
    case 2: 
        saida = op2(valortotal);
        printf("%f", saida);
        break;
    case 3: 
        saida = op3(valortotal);
        printf("%f", saida);
        break;
    default:
        break;
    }
}