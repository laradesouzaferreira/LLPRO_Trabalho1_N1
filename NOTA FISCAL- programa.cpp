#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese_Brazil");
    
    char produto1[18], produto2[18], produto3[18], produto4[18], produto5[18], produto6[18], produto7[18], produto8[18];
    float valor_p1, valor_p2, valor_p3, valor_p4, valor_p5, valor_p6, valor_p7, valor_p8;
    int qtd_p1, qtd_p2, qtd_p3, qtd_p4, qtd_p5, qtd_p6, qtd_p7, qtd_p8;
    int codigo1 = 20, codigo2 = 21, codigo3 = 22, codigo4 = 23;
    int codigo5 = 24, codigo6 = 25, codigo7 = 26, codigo8 = 27;
    
    float total;
    
    printf("Programa para criar Nota Fiscal");
    printf("\n\nNome do Produto: ");
    gets(produto1);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p1);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p1);
	fflush(stdin);	
	
    printf("\nNome do Produto: ");
    gets(produto2);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p2);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p2);
	fflush(stdin);	
	
    printf("\nNome do Produto: ");
    gets(produto3);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p3);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p3);
	fflush(stdin);	
	
	printf("\nNome do Produto: ");
    gets(produto4);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p4);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p4);
	fflush(stdin);	
	
	printf("\nNome do Produto: ");
    gets(produto5);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p5);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p5);
	fflush(stdin);	
	
	printf("\nNome do Produto: ");
    gets(produto6);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p6);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p6);
	fflush(stdin);	
	
	printf("\nNome do Produto: ");
    gets(produto7);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p7);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p7);
	fflush(stdin);	
	
	printf("\nNome do Produto: ");
    gets(produto8);
    printf("Valor do Produto: ");
    scanf( "%f" , &valor_p8);	
    printf( "Quantidade do Produto: " );
	scanf( "%d" , &qtd_p8);
	fflush(stdin);
	
	total = valor_p1*qtd_p1 + valor_p2*qtd_p2 + valor_p3*qtd_p3 + valor_p4*qtd_p4 + valor_p5*qtd_p5 + valor_p6*qtd_p6 + valor_p7*qtd_p7 + valor_p8*qtd_p8; 
	


	printf("|%-6s |%-6s |%-18s |%-10s |%-10s|\n", "Código", "Quant.", "Discriminação", "P.Unitário", "Preço Total");
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo1, qtd_p1, produto1, valor_p1, valor_p1*qtd_p1);
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo2, qtd_p2, produto2, valor_p2, valor_p2*qtd_p2);
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo3, qtd_p3, produto3, valor_p3, valor_p3*qtd_p3);
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo4, qtd_p4, produto4, valor_p4, valor_p4*qtd_p4);
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo5, qtd_p5, produto5, valor_p5, valor_p5*qtd_p5);
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo6, qtd_p6, produto6, valor_p6, valor_p6*qtd_p6);
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo7, qtd_p7, produto7, valor_p7, valor_p7*qtd_p7);
    printf("|%-6d |%-6d |%-18s |R$ %8.2f|R$ %8.2f|\n", codigo8, qtd_p8, produto8, valor_p8, valor_p8*qtd_p8);
    printf("|%-6s |%-6s |%-18s |%-10s |R$ %8.2f|\n", "", "", "", "Total", total);
    
    
   system("pause");
   return 0;
   
}
