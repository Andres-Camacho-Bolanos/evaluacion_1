/* Laboratorio4
Author: Camacho Bolaños Andrés 
date: 9-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
*/

//---------------------INSTRUCCIONES-----------------------




//Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares//


void suma_pares() {
    int a;
    int b;
    int resultado;
    
    
    
    printf("Introduzca un número par:\n");
    scanf("%d", &a);
    printf("Introduzca otro número par:\n");
    scanf("%d", &b);




    if (a % 2 == 0 && b % 2 == 0) {
        resultado = a + b;
        printf("La suma de los números pares es: %d\n", resultado);
        
        
        
        
    } else {
        printf("No todos los números que fueron ingresados son pares.\n");
    }
}




//Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares//


void resta_multiplo5() {
    int a;
    int b;
    int resultado;
    
    
    
    printf("Introduzca un número que sea múltiplo de 5:\n");
    scanf("%d", &a);
    printf("Introduzca otro número que sea múltiplo de 5:\n");
    scanf("%d", &b);




    if (a % 5 == 0 && b % 5 == 0) {
        resultado = a - b;
        printf("La resta de los números es: %d\n", resultado);
        
        
        
        
    } else {
        printf("No todos los números que fueron ingresados son múltiplo de 5.\n");
    }
}




//Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta//


void division_sin_residuo() {
    int a;
    int b;
    int resultado;
    
    
    
    printf("Introduzca un número:\n");
    scanf("%d", &a);
    printf("Introduzca otro número:\n");
    scanf("%d", &b);




    if (a != 0 && a % b == 0) {
        resultado = a / b;
        printf("El resultado de la división es: %d\n", resultado);
    }
    else {
        printf("La división no es exacta.\n");
    }
}




//Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10//


void multiplicacion_mayor10() {
    int a;
    int b;
    int resultado;
    
    


    printf("Introduzca un número:\n");
    scanf("%d", &a);
    printf("Introduzca otro número:\n");
    scanf("%d", &b);




    if (a > 10 && b > 10) {
        resultado = a * b;
        printf("El resultado de la multiplicación es: %d\n", resultado);
    }
    else {
        printf("No todos los números que se multiplican son mayores a 10.\n");
    }
}




/*¿Qué hace el While?
Es un tipo de estructura de control que nos permitirá repetir un bloque de código en forma de ciclo (bucle) mientras un a condición se cumpla.
Existen dos tipos de While:
Do While: Primero realiza acción al menos una vez y luego evalúa si la condición es verdadera.
While Do: Primero evalúa si la condición se cumple y después empezará el ciclo.*/




#include <stdio.h>
#include <stdlib.h>

int printMenu(){
    /* printMenu
    Author: Camacho Bolaños Andrés
    Date: 09-03-2023
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    */
    int option;
    system("clear");
    fflush( stdin );
    int n;
    
    printf("\nBienvenido\n");
    printf("\n Por favor, introduzca una opción (1-5):");
    printf("\n 1.Suma de números pares");
    printf("\n 2.Resta de números que son múltiplos de 5");
    printf("\n 3.División sin residuo");
    printf("\n 4.Multiplicación de números mayores a 10");
    printf("\n 5.Salir");
    scanf("%d", &option);
    printf("\n");

    if ( option >=1 || option <=5)
    return option;
    else
        return 0;
}

int main(){
    char inutil;
    int flag = 0;
    while(flag!=5){
        flag = printMenu();
        
        switch (flag){
            case 1:
                suma_pares();
                break;
            
            case 2:
                resta_multiplo5();
                break;
            
            case 3:
                division_sin_residuo();
                break;
                
            case 4:
                void multiplicacion_mayor10();
                break;
            
            case 5:
                printf("\nAdiós.");
                break;
                
            default:
                printf("\nNo se ha seleccionado una opción valida.");
                break;
        }
        printf("\nOprima enter tecla cualquiera para continuar.");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("excelente");
}


//---------------------INSTRUCCIONES-----------------------

//explique: 

//      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
Es un menú que nos va a permitir seleccionar seleccionar un caso. La condición flag dentro del while va a hacer que se repita el bucle mientras la opción que seleccionemos no sea 4.
Contiene un mensaje de error en caso de que ingresemos un valor diferente de 1, 2, 3 y 4.//

//      2. ¿Para qué sirve la función fflush?
Es para asegurarnos que los datos almacenados en el búfer se muestren en pantalla antes de que se limpie la memoria al realizar otra operación.//

//      3. ¿Cuál es la sintaxis de un while?
while(condición){
//código que se ejecuta mientras se cumpla la condición.
}

//      4. ¿Cuál es la sintaxis de un switch?
switch(variable){
case 1:
//código que se ejecuta si la variable toma ese valor.
break;

case 2:
//código que se ejecuta si la variable toma ese valor.
break;

case 3:
//código que se ejecuta si la variable toma ese valor.
break;

default:
//código que se ejecuta en caso de que la variable no tome ningún valor anterior.
break;

//Modifique el siguiente código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
//Guarde y suba su código a un repositorio.
