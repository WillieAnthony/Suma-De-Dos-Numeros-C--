// Codigo en lenguaje C++ que solicite al usuario que ingrese dos numeros, los sume y muestre el resultado



#include <stdio.h>

main() {
    float num1, num2, resultado;
    
    printf("SUMA DE DOS NUMEROS\n\n\n");
    
    // Solicitar Al Usuario Que Ingrese Dos Numeros
    printf("Ingrese El Primer Numero: \n");
    scanf("%f", &num1);
    
    printf("\n");
    
    printf("Ingrese El Segundo Numero: \n");
    scanf("%f", &num2);
    
    // Multiplicar Los Dos Numeros
    resultado = num1 + num2;
    
    printf("\n\n");
    
    // Mostrar El Resultado
    printf("La Suma de %.2f y %.2f es: %.2f\n\n\n\n\n", num1, num2, resultado);
    
	printf("21/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}
