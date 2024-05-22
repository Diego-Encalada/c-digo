#include <stdio.h>

int main() {
    // 1. Declarar variables de al menos 3 tipos de datos diferentes
    int numEntero;           // Variable entera
    float numDecimal;        // Variable de punto flotante
    char caracter;            // Variable de tipo carácter

    // 2. Usar printf para mostrar un mensaje de bienvenida
    printf("---------Bienvenido -------\n");

    // 3. Solicitar al usuario ingresar los valores de las variables declaradas
    // Solicitar un número entero
    printf("Ingrese un número entero: ");
    scanf("%d", &numEntero);

    // Solicitar un número decimal
    printf("Ingrese un número decimal: ");
    scanf("%f", &numDecimal);

    // Solicitar un carácter
    printf("Ingrese un solo carácter: ");
    scanf(" %c", &caracter);  // El espacio antes de %c es importante para consumir cualquier carácter de nueva línea pendiente

    // 4. Usar printf para mostrar los valores ingresados por el usuario junto con un mensaje descriptivo
    printf("Ha ingresado el número entero: %d\n", numEntero);
    printf("Ha ingresado el número decimal: %.2f\n", numDecimal);  // .2f para mostrar dos decimales
    printf("Ha ingresado el carácter: %c\n", caracter);

    return 0;
}
