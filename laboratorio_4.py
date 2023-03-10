''' Laboratorio4
Author: Camacho Bolaños Andrés
date: 9-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
'''

#---------------------INSTRUCCIONES-----------------------
#Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares


import os



def suma_pares():
    a = int(input("Introduzca un número par:\n"))
    b = int(input("Introduzca otro número par:\n"))
    if a % 2 == 0 and b % 2 == 0:
        resultado = a + b
        print(f"La suma de los números pares es: {resultado}")
    else:
        print("No todos los números que fueron ingresados son pares.")

        
        
        
#Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares


def resta_multiplo5():
    a = int(input("Introduzca un número que sea múltiplo de 5:\n"))
    b = int(input("Introduzca otro número que sea múltiplo de 5:\n"))
    if a % 5 == 0 and b % 5 == 0:
        resultado = a - b
        print(f"La resta de los números es: {resultado}")
    else:
        print("No todos los números que fueron ingresados son múltiplo de 5.")
        
        
        
        
#Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta


def division_sin_residuo():
    a = int(input("Introduzca un número:\n"))
    b = int(input("Introduzca otro número:\n"))
    if a != 0 and a % b == 0:
        resultado = a // b
        print(f"El resultado de la división es: {resultado}")
    else:
        print("La división no es exacta.")
        
        
        
        
#Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10


def multiplicacion_mayor10():
    a = int(input("Introduzca un número:\n"))
    b = int(input("Introduzca otro número:\n"))
    if a > 10 and b > 10:
        resultado = a * b
        print(f"El resultado de la multiplicación es: {resultado}")
    else:
        print("No todos los números que se multiplican son mayores a 10.")
        
        
        
        
def printMenu():
    ''' printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    '''
    os.system('cls')
    print("Bienvenido al menú seleccione una opciónn \n\n")
    print("\t1)Suma de números pares\n")
    print("\t2)Resta de números que son múltiplos de 5\n")
    print("\t3)División sin residuo\n")
    print("\t4)Multiplicación de números mayores a 10\n")
    print("\t5)Salir\n")
    option = input()
    if(option):
        return int (option)
    else:
        return 0


def main():
    flag = 0
    inutil =''
    while(flag!=5):
        flag = printMenu()
        
        if (flag==1):
            suma_pares()
        elif (flag==2):
            resta_multiplo5()
        elif (flag==3):
            division_sin_residuo()
        elif (flag==4):
            multiplicacion_mayor10()
        elif (flag==5):
            print("\nAdiós.")
        else:
            print("\nNo se ha seleccionado una opción valida.")

        print("\nOprima enter tecla cualquiera para continuar ")
        input(inutil)
    print("excelente")

if __name__ == "__main__":
    main()
#---------------------INSTRUCCIONES-----------------------
#explique: 
#      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
#Muestra un menú con cuatro opciones y luego lee la entrada que introducimos para devolver un valor entero que representa la opción elegida. Tiene un while para hacer que se repita el bucle mientras no seleccionemos 4.

#      2. ¿Cuál es la sintaxis de un while?
#while condición:
    #Código que se va a ejecutar cuando la condición se cumpla.

#      3. ¿Exite switch en python?
#No existe un switch de manera primitiva, pero se pueden importar librerias para utilizarlos.

#      4. ¿Qué es un elif?
#Si no se cumple la primera condición en un if, el código pasará a la siguiente condicional y si los parámetros se cumplen, ejecutará elif. De lo contrario, pasara a otro elif que esté después de este o un else.

#      5. ¿Qué función de se ejecuta al correr el script?
#if __name__ == "__main__ va a comprobar si el script se está ejecutando directamente y no está siendo importado. Si es el primer caso, va a llamar a la funcion main.


#Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
#Guarde y suba su código a un repositorio.
