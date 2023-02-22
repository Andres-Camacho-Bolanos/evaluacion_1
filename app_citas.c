/* Este programa le permitará al usuario evaluar si una persona que conoció en la app de citas cumple con ciertas características para que no le vuelvan a romper el corazón.
El usuario debe contestar 10 preguntas y cada una de ellas sumará una cantidad determinada de puntos, al finalizar se desplegará un mensaje para indicarle al usuario si el riesgo vale la pena.
Si el resultado final es mayor a 70% se considerará un buen prospecto, de lo contrario se alertará al usuario que no cumple con lo que está buscando.*/

//@date <23-02-2023>//
//@author <Camacho Bolaños Andrés>//
//@version <1.00>//

//@name <resultado>//
//@param <int>//
//@return <número entero>//




//@name <respuesta>//
//@param <int>//
//Parámetro de 10 valores//
//@return <número entero>//




//@name <sumaCompatibilidad>//
//@param <int>//
//@return <número entero>//




#include<stdio.h>
#define amorVerdadero 100




int resultado;
int respuesta[10];
int sumaCompatibilidad = 0;




int compatibilidad(){
   
    
    
    
    printf("Bienvenido :)\n");
    printf("Se realizaran 10 preguntas para tratar de analizar si su match es una opcion ideal para usted.\n");
   
   
   
        
        printf("\n\n\n1. ¿Ambos viven en la misma ciudad?\n");
        scanf("%i", &respuesta[0]);
        
    
    
    
        printf("\n\n\n2. ¿Comparten hobbies similares?\n");
        scanf("%i", &respuesta[1]);

        
        
        
   
        printf("\n\n\n3. ¿Le causa atraccion fisica?\n");
        scanf("%i", &respuesta[2]);
        
        

        
        printf("\n\n\n4. ¿Es una persona que evita realizar comportamientos tóxicos y/o manipuladores que puedan dañar una potencial relacion?\n");
        scanf("%i", &respuesta[3]);
        
         
          
   
        printf("\n\n\n5. ¿Ha confirmado que comparte los mismos sentimientos que usted?\n");
        scanf("%i", &respuesta[4]);
         
         
 

        printf("\n\n\n6. ¿Esa persona está dispuesta a salir de manera casual o como una cita?\n");
        scanf("%i", &respuesta[5]);

        


        printf("\n\n\n7. ¿Tiene disposicion para que ambos conozcan a sus amistades?\n");
        scanf("%i", &respuesta[6]);

        
        

        printf("\n\n\n8. ¿Esa persona realmente demuestra interes en usted?\n");
        scanf("%i", &respuesta[7]);

        
        

        printf("\n\n\n9. ¿Ambos pueden dejar a un lado los bienes materiales y enfocarse en los aspectos emocionales/sentimentales de la otra persona?\n");
        scanf("%i", &respuesta[8]);

         
         
          
        printf("\n\n\n10. ¿Aceptó su propuesta de iniciar una relacion?\n");
        scanf("%i", &respuesta[9]);
  
    
    
    
    for(int i=0; i<10; i++){
        sumaCompatibilidad += respuesta[i];
        
        
        
        
         resultado = sumaCompatibilidad / amorVerdadero * 100;
     
     
     
     
        if (resultado >=70){
            printf("\n\nEl porcentaje de compatibilidad es de: %i ¡Felicidades! Ha conocido a una persona que muestra señales de ser compatible con usted, esperamos que su amor sea muy duradero y hermoso.",resultado);
        }else if (resultado <70){
            printf("\n\n\n\n\n\nLa persona que ha conocido no muestra señales de ser una opcion recomendable para sus intereses.\n");
            printf("Es comprensible que pueda sentirse decepcionado(a) y triste, sin embargo, esto le sirve para saber que no estaba con una pesona indicada\n");
            printf("Puede traatar de enfocarse en sí mismo(a) y hacer cosas que le gustan, con el tiempo encontrara a una persona con quien pueda desarrollar una hermosa relacion");
            
        }





}


}



int main(){

    compatibilidad();
    return 0;

}
