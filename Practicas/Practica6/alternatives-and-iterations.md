# Práctica 06. Alternativas e Iteraciones. Make.

# Factor de ponderación: 6

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Sea capaz de resolver problemas sencillos en C++ usando todos los conocimientos adquiridos hasta ahora, y en particular haciendo uso de sentencias alternativas y de iteración.
* Conozca la herramienta `make` y que sea capaz de configurar ficheros `Makefile` sencillos para la automatización de la compilación de sus programas.

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica. Se comprobará que el alumnado:
* Es capaz de escribir programas simples en C++ que resuelvan problemas de complejidad similar a los que se han propuesto para esta práctica
* Ha automatizado la compilación de sus programas usando un fichero `Makefile` para cada uno de los programas que desarrolle 
* Acredita que es capaz de subir programas a la plataforma [Jutge](https://jutge.org/) para su evaluación
* Ha incluido un comentario prólogo en todos los ficheros (`*.cc`, `*.h`) de sus ejercicios
* Hace que todos los programas de sus prácticas se ajusten a la [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 
* Acredita que es capaz de editar ficheros remotos en su VM usando vi
* Demuestra que es capaz de ejecutar comandos Linux en su VM

Recuerde que para cada práctica tiene que entregar: 
* Un fichero `.tar.gz` conteniendo todos los programas que desarrolle tanto antes como durante la sesión de evaluación.
Se ha de esperar a la sesión de evaluación para subir el fichero .tar.gz conteniendo sus programas.

### La utilidad `make`
Hasta ahora en la asignatura se han compilado los programas de forma manual, invocando al compilador con un comando como
```
$ g++ -std=c++17 -Wall -o hello_world hello_world.cc
```
Tal como se ha explicado en las clases de teoría, la compilación manual de programas es por lo general bastante tediosa, especialmente cuando el programa consta de varios ficheros con código fuente y es necesario especificar opciones adicionales del compilador. En la práctica, lo más común es usar herramientas para automatizar el proceso de compilación. `make` es una de las herramientas mas usadas para tal propósito.

[make](https://en.wikipedia.org/wiki/Make_(software)) es una herramienta que permite automatizar el proceso de desarrollo de software. La función de `make` es determinar automáticamente qué ficheros de un programa necesitan ser recompilados y ejecutar los comandos necesarios para realizar esa tarea.

Comience su estudio de `make` estudiando [este tutorial](https://makefiletutorial.com/) y reproduciendo en su máquina virtual y entendiendo cada uno de los ejemplos. Estudie solamente hasta el apartado *Static Pattern Rules* del tutorial. En [este directorio](https://github.com/IB-2023-2024/IB-class-code-examples/tree/master/IntroductionToC++/make_tutorial2) puede encontrar los ejercicios de ese tutorial.

Estudie también el tutorial [A Simple Makefile Tutorial](https://cs.colby.edu/maxwell/courses/tutorials/maketutor/). En ese tutorial se utiliza el compilador `gcc`, pero puede Ud. sustituirlo por `g++` puesto que el compilador de C++ compila igualmente el código en C (como se ha explicado, C++ es un superconjunto de C). En  [este
directorio](https://github.com/IB-2023-2024/IB-class-code-examples/tree/master/IntroductionToC++/make_tutorial) puede encontrar los ejercicios de ese tutorial, adaptados al compilador `g++`.

En ese tutorial, el programa que se compila está compuesto de tres ficheros:
- *hellomake.cc*, el programa principal,
- *hellofunc.cc*, un fichero en el que figura el código de la función *myPrintHelloMake()*
- *hellomake.h*, el fichero en el que figura la definición de la función
Ésta es la situación habitual en la que una aplicación desarrollada en C++ consta no de tres sino, en general, de decenas de ficheros que hay que compilar.

Una compilación manual de ese programa se realizaría con los comandos:
```
g++ -std=c++17 -Wall -c hellomake.cc
g++ -std=c++17 -Wall -c hellofunc.cc
g++ -o hellomake hellomake.o hellofunc.o
```
de los cuales, los dos primeros compilan el correspondiente código fuente generando solamente el código objeto (ficheros `*.o`) y el tercero invoca al enlazador (*linker*) para construir el fichero binario ejecutable *hellomake* a partir de los ficheros objetos generados por los dos primeros comandos.

Estudie cuidadosamente las explicaciones de ese tutorial. En el [directorio](https://github.com/IB-2023-2024/IB-class-code-examples/tree/master/IntroductionToC++/make_tutorial) puede hallar las 5 versiones del fichero `Makefile` que se estudian en ese tutorial. Para utilizar (por ejemplo) el fichero Makefile.2 ejecute el comando
```
make -f Makefile.2
```
Recuerde que para que `make` utilice el fichero por defecto, éste ha de llamarse `Makefile`, en cuyo caso basta con ejecutar
```
make 
```

Para finalizar, en el directorio `make-example` que ha recibido Ud. con esta práctica puede estudiar un fichero [Makefile](https://github.com/IB-2025-2026/P06-alternatives-iterations/blob/main/make-example/Makefile) que se utiliza para compilar el programa `digits.cc`. Ese fichero `Makefile` contiene comentarios indicando la finalidad de cada una de las líneas que figuran en el mismo. Debería Ud. estudiar cada una de esas líneas y comprender su finalidad y formato. Se comentan a continuación algunos de los aspectos más destacados.

Tenga en cuenta en primer lugar (como habrá estudiado en los tutoriales) que el formato del fichero `Makefile` requiere que en algunos puntos del mismo haya un caracter tabulador (*tab*, `\t`) y no acepta espacios en su lugar. Así, el primer carácter en las líneas 18 y 26 del fichero ha de ser forzosamente un tabulador (no espacios).

La línea 15 es la que especifica el nombre del fichero ejecutable que ha de construir `make`, que en este caso es *digits*. Se indica en la línea 17 que el fichero *digits* depende de su código objeto *digits.o*. La línea 18 indica cómo "construir" el fichero *digits* a partir de *digits.o*: se invocaría el compilador con una línea como:
```
g++ -std=c++17 -Wall -o digits digits.o
```
Observe que ése es efectivamente el segundo comando que se ejecuta cuando se invoca a `make`: se invoca al enlazador (*linker*) para que produzca el código binario (*digits*) a partir del código objeto (*digits.o*).

La línea 26 indica cómo construir los ficheros objeto (*.o*) a partir de su correspondientes ficheros fuente (*.cc*). En este ejemplo, esa línea será la primera que se ejecute produciendo:
```
g++ -std=c++17 -Wall -c -o digits.o digits.cc
```
Esta línea invoca al compilador con la opción `-c` (solo compilar, sin enlazar) para producir el código objeto (*digits.o*) a partir del fichero fuente (*digits.cc*). Observe que ese comando es el primero que se ejecuta al invocar a `make` (`all` depende de `digits`, que depende de `digits.o`)

Las líneas 25 y 26 indican que el fichero *digits.o* depende de *digits.cc* y cómo generarlo, pero tal como indica el comentario, esa regla no necesita especificarse explícitamente porque `make` ya la contempla por defecto. Pruebe a comentar ambas líneas con `#` y observará que la compilación aún se realiza correctamente.

Por último, observe que los comandos que figuran después de la línea 30 se ejecutan al invocar:
```
make clean
```
Se puede utilizar *clean* o cualquier otra etiqueta, pero se ha convertido en una costumbre utilizar la etiqueta *clean*. La finalidad de estos comandos (que puede Ud. configurar a su gusto) es borrar todos aquellos ficheros que, siendo producto de la compilación/edición del proyecto, no se desea retener. Así por ejemplo los ficheros `*.o` con código objeto o el fichero ejecutable (`digits` en este caso) no conviene conservarlos, puesto que ocupan espacio y no son necesarios, ya que se pueden obtener a partir del codigo fuente.

### Alternativas e iteraciones
Para el desarrollo de esta práctica será necesario saber programar sentencias condicionales e iterativas en C++. Recuerde que, a grandes rasgos, su funcionamiento es el siguiente:

``` c++
if (condición) {
  sentencias_1;
} else {
  sentencias_2;
}

for (inicio; condición; incremento) {
  sentencias;
}

while (condición) {
  sentencias;
}
```

En el bloque `if-else` anterior, si la `condición` booleana se cumple, se ejecutará `sentencias_1`; si no se cumple, se ejecutará `sentencias_2`. Si `sentencias_2` estuviera vacío, no es necesario escribir el bloque `else`. 

En un bucle `for` se puede especificar una sentencia de `inicio` que puede incluir declaraciones de variables, una `condición` booleana que deberá cumplirse para que el bucle continúe en ejecución, y una sentencia de `incremento` que se ejecutará después de cada iteración del bloque de `sentencias`. En resumen, en un bucle `for` se ejecutará primero la sentencia de `inicio` y luego, mientras que la `condición` sea *verdadera*, se ejecutará repetidamente (iterativamente) el bloque de `sentencias` y el `incremento`.

Los bucles `for` deben usarse cuando se conoce de antemano el número de iteraciones a ejecutar; en caso contrario, es mejor utilizar bucles `while`, que carecen de sentencias de `inicio` e `incremento`. En un bucle `while`, mientras que la `condición` sea *verdadera*, se ejecutará iterativamente el bloque de `sentencias`.

Estudie el código [`digits.cc`](https://github.com/IB-2025-2026/P06-alternatives-iterations/blob/main/make-example/digits.cc) incluido en el directorio `make-example` de esta práctica para ver un ejemplo de las tres estructuras.

### Material de estudio complementario
Estudie del [tutorial de referencia](https://www.learncpp.com/) en la asignatura los siguientes apartados:
* 2.1 [Introduction to functions](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)
* Del capítulo 7 los apartados 7.1 al 7.11

### Ejercicios
* Escriba programas que solucionen los siguientes problemas y evalúe su solución utilizando Jutge.
* Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente para cada uno de los ejercicios. Asigne a cada uno de esos directorios nombres significativos. Por ejemplo `P34279_add-one-second` para el tercer ejercicio.
* Automatice la compilación del programa correspondiente a cada ejercicio con un fichero `Makefile` independiente para cada programa y que ha de incluir en el correspondiente directorio.

1. [P98960](https://jutge.org/problems/P98960_en) Uppercase and lowercase letters
2. [P90615](https://jutge.org/problems/P90615_en) Maximum of three integer numbers
3. [P34279](https://jutge.org/problems/P34279_en) Add one second
4. [P97156](https://jutge.org/problems/P97156_en) Numbers in an interval
5. [P59539](https://jutge.org/problems/P59539_en) Harmonic numbers (1)

Tenga en cuenta que en la evaluación de las prácticas de *Informática Básica* se utilizarán ejercicios de Jutge, de modo que resolver problemas en esa plataforma mejorará sus capacidades como programador/a. Recuerde intentar resolver tantos ejercicios de Jutge como pueda. No se preocupe demasiado si no consigue solucionar alguno de los problemas concretos: es preferible que centre sus esfuerzos en realizar muchos programas que en solucionar alguno concreto.

Recuerde siempre que Jutge solo evalúa la corrección de su programa desde un punto de vista de su correcto funcionamiento. Su código ha de cumplir adicionalmente con los requisitos de modularidad, formato y estilo.
