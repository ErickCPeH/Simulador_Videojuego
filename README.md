# Simulador_Videojuego
Realizaremos un servidor de multijugadores, en el cual nuestro objetivo
es representar como múltiples usuarios (hilos), ingresan a un servidor
con capacidad limitada (controlada por mutex), en el cual se realizan
turnos dentro de una partida, las librerías thread y mutex nos ayudaran
a manejar la ejecución paralela de los jugadores y asegurar el acceso
controlado de los recursos compartidos.

Pseudocodigo Entrar a juego. 


Incluir librería iostream

Incluir librería threading

incluir librería mutex

Definir mutex gobal para sincronización 

Definir función main():

Crear hilo 1 y mandar a función entrar a juego \n

Crear hilo 2 y mandar a función entrar a juego

Crear hilo 3 y mandar a función entrar a juego

Crear hilo 4 y mandar a función entrar a juego

Crear hilo 5 y mandar a función entrar a juego

Crear hilo 6 y mandar a función entrar a juego

Definir función void entrar a juego():

Creación de un ciclo while donde n < 3 donde n es la cantidad de veces que se va a repetir la función 

Definir mutex para sincronizar acceso a la función

Bloquear mutex

Mandar el hilo a la función turnos

Liberar mutex

Definir función void turnos():

Creación de ciclo while n < 3 donde n es la cantidad de veces que se repite x hilo

Imprime el movimiento que ha hecho el hilo x

Duerme el hilo de 3 a 10 segundos

cierra ciclo


// Cambios 10/04/2025 //

Se realizó el núcleo de concurrencia basado en el pseudocódigo antes listado. 

Durante el desarrollo encontramos que estabamos lidiando con algunas condiciones de carrera y problemas de optimización, por lo que para las siguientes versiones se mejorará en dichos aspectos. 


// Desarrollo de la actividad. //


FASE 1. 

Desarrollamos la primera instancia del núcleo concurrente. 

FASE 2. 

Realizamos una fase de pruebas donde encontramos los problemas más significativos.

FASE 3. 

A partir de la retroalimentación de nuestros compañeros, pudimos crear una planificación que nos permitirá mejorar nuestro programa. 



