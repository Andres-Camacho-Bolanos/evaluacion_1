/* Este programa le permitará al usuario evaluar si una persona que conoció en la app de citas cumple con ciertas características para que no le vuelvan a romper el corazón.
El usuario debe contestar 10 preguntas y cada una de ellas sumará una cantidad determinada de puntos, al finalizar se desplegará un mensaje para indicarle al usuario si el riesgo vale la pena.
Si el resultado final es mayor a 70% se considerará un buen prospecto, de lo contrario se alertará al usuario que no cumple con lo que está buscando.*/

//@date <23-02-2023>//
//@author <Camacho Bolaños Andrés>//
//@version <1.00>//

//@name <resultado>//
//@param <int>//
//@return <número entero>//




//@name <preguntas>//
//@param <int>//
//Parámetro de 10 valores//
//@return <número entero>//




//@name <compatibilidad>//
//@param <int>//
//@return <número entero>//




#include<stdio.h>
#define AmorMaximo 100

int PruebaAmor(){
    
    int preguntas[10]; 
    int compatibilidad = 0;
    int resultado;
    

    printf("Bienvenido :)\n");
    printf("Se realizaran 10 preguntas para tratar de analizar si su match es una opcion ideal para usted.\n");
   
   
   
   
    printf("\n\n\n1. ¿Ambos viven en la misma ciudad?\n");
    printf("10.Sí\n");
    printf("0.No\n");
    scanf("%i",&preguntas[0]);
    
    
    
    
    printf("\n2. ¿Comparten hobbies similares?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[1]);
    
    
    
    
    printf("\n3. ¿Le causa atraccion fisica?\n");
    printf("10. Sí\n");
    printf("20. No\n");
    scanf("%i",&preguntas[2]);
    
    
    
    
    printf("\n4. ¿Es una persona que evita realizar comportamientos tóxicos y/o manipuladores que puedan dañar una potencial relacion?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[3]);
    
    
    
    
    printf("\n5. ¿Esa persona está dispuesta a salir de manera casual o como una cita?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[4]);
    
    
    
    
    printf("\n6. ¿Ha confirmado que comparte los mismos sentimientos que usted?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[5]);
    
    
    
    
    printf("\n7. ¿Tiene disposicion para que ambos conozcan a sus amistades?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[6]);
    
    
    
    
    printf("\n8. ¿Esa persona realmente demuestra interes en usted?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[7]);
    
    
    
    
    printf("\n9. ¿Ambos pueden dejar a un lado los bienes materiales y enfocarse en los aspectos emocionales/sentimentales de la otra persona?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[8]);
    
    
    
    
    printf("\n10. ¿Aceptó su propuesta de iniciar una relacion?\n");
    printf("10. Sí\n");
    printf("0. No\n");
    scanf("%i",&preguntas[9]);
    
    
    

   for(int i=0;i<10; i++){
        compatibilidad+=preguntas[i];//contador
    }
   
   
   
   
   resultado = compatibilidad/ AmorMaximo * 100;
   
   
   
   
   if (compatibilidad > 70){
    printf("El porcentaje de compatibilidad es de: %i ¡Felicidades! Ha conocido a una persona que muestra señales de ser compatible con usted, esperamos que su amor sea muy duradero y hermoso.",compatibilidad);
    
   }
   
   
   
   
   else {
    printf("La persona que ha conocido no muestra señales de ser una opcion recomendable para sus intereses.\n");
    printf("Es comprensible que pueda sentirse decepcionado(a) y triste, sin embargo, esto le sirve para saber que no estaba con una pesona indicada.\n");
    printf("Puede tratar de enfocarse en sí mismo(a) y hacer cosas que le gustan, con el tiempo encontrara a una persona con quien pueda desarrollar una hermosa relacion.");

   }
   
   
   
   
    return resultado;
    
    
    
    
}




int main(){
    PruebaAmor();
    return 0;
}
