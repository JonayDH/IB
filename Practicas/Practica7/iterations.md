# Práctica 07. Iteraciones. GitHub Classroom.

# Factor de ponderación: 7

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Sea capaz de resolver problemas sencillos en C++ usando todos los conocimientos adquiridos hasta ahora, y en particular haciendo uso de sentencias iterativas
* Comience a utilizar funciones en sus programas y modularice sus programas en diferentes funciones
* Estudie y conozca los fundamentos de trabajo con las herramientas Git y GitHub

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica. Se comprobará que el alumnado:
* Es capaz de escribir programas simples en C++ que resuelvan problemas de complejidad similar a los que se han propuesto para esta práctica
* Hace que sus programas se estructuren en torno a diferentes funciones (sean modulares)
* Ha automatizado la compilación de sus programas usando un fichero `Makefile` para cada uno de los programas que desarrolle 
* Acredita que es capaz de subir programas a la plataforma [Jutge](https://jutge.org/) para su evaluación
* Ha incluido un comentario prólogo en todos los ficheros (`*.cc`, `*.h`) de sus ejercicios
* Hace que todos los programas de sus prácticas se ajusten a la [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 
* Acredita que es capaz de editar ficheros remotos en su VM usando vi
* Demuestra que es capaz de ejecutar comandos Linux en su VM

### GitHub Classroom
En el futuro se utilizará GitHub Classroom (una plataforma relacionada con GitHub) para gestionar las prácticas de *Informática Básica*. En esa plataforma, para la realización de cada práctica recibirá una invitación a una tarea que tendrá que aceptar. Una vez acepte la invitación, tendrá que clonar con `git` un repositorio asociado a la tarea. Ese repositorio privado será el punto de partida y tendrá Ud. que añadir en él directorios con los programas que realice.

El enlace de invitación, que aparecerá en la tarea correspondiente del Aula Virtual, tiene una apariencia similar a `https://classroom.github.com/a/XXXXXXXX`. Si entra en él, se le solicitará que se autentifique en su cuenta de GitHub y, una vez autentificado/a, se le solicitará que se una a la clase (*classroom*) **IB-2025-2026**. Para ello ha de seleccionar su dirección de correo de la lista de identificadores (*Identifiers*) que figura en esa página. A continuación se le solicitará que acepte la tarea (*assignment*) **P07-iterations**. Por cada futura práctica de esta asignatura aparecerá en la clase una nueva tarea asociada con la misma.

Cuando haya Ud. aceptado la tarea, aparecerá una pantalla de confirmación. Cuando refresque la pantalla (pulsando F5), se le mostrará otra pantalla en la que figura el enlace al repositorio privado que ha sido creado para su trabajo en la práctica. En él podrá desarrollar los programas correspondientes a la práctica en cuestión. El enlace que figura en ese repositorio es el que ha de entregar Ud. en la tarea del aula virtual correspondiente a la práctica. Para empezar a trabajar en la práctica, clone este repositorio (usando la opción SSH) en su máquina virtual con `git clone`, como se ha hecho en prácticas anteriores.

Al contrario que los repositorios que ha clonado previamente en esta asignatura, Ud. estará autorizado/a a realizar modificaciones sobre el repositorio que se genere al aceptar cada tarea. Consulte la práctica anterior para recordar cómo transferir las modificaciones que realice sobre el mismo en su máquina virtual a GitHub (usando `git commit` y `git push`). Recuerde hacer estas operaciones con frecuencia para mantener un registro de los cambios realizados. Tenga en cuenta que cada uno de estos cambios quedan registrados permanentemente en el repositorio y serán visibles para el profesorado.

Al finalizar la sesión de evaluación de la práctica, deberá entregar 2 elementos: 
* El enlace a su repositorio privado, que puede incluir en su entrega desde el momento en que acepte la tarea en GitHub Classroom, no es necesario que espere a la sesión de evaluación para subirlo.
* Un fichero `.tar.gz` conteniendo todos los programas que desarrolle, tanto antes como durante la sesión de evaluación. Deberá esperar a la sesión de evaluación para subir el fichero `.tar.gz` conteniendo sus programas.

### `.gitignore`
Incluido en su repositorio privado debería aparecer un fichero `.gitignore`, que también encontrará en la mayoría de repositorios de Git. Este fichero contiene una colección de *patrones* que indican qué ficheros deberían descartarse automáticamente a la hora de guardar los cambios en un repositorio. La web [gitignore.io](https://www.gitignore.io/) permite generar este tipo de ficheros de forma sencilla para el lenguaje o sistema que utilice su repositorio.

Pruebe a generar un `.gitignore` para repositorios que contengan programas en C++. Los patrones que aparecerán definen todos los ficheros superfluos que pueden generarse con la compilación y que no es necesario registrar en el sistema de control de versiones. Observe que en la lista aparecen por ejemplo los ficheros `.o`, con los que ya debería estar familiarizado/a. Puede editar en cualquier momento su fichero `.gitignore` para añadir otros ficheros que desee que `git` descarte - como por ejemplo los nombres de los ficheros ejecutables que `make` deberá generar.

### Material de estudio complementario
Estudie todo lo que se indica en el epígrafe [Comments](https://google.github.io/styleguide/cppguide.html#Comments) de la Guía de Estilo de Google y ponga en práctica todo lo que en ella se propone.

Estudie del [tutorial de referencia](https://www.learncpp.com/) en la asignatura los siguientes apartados:
* [Comments](https://www.learncpp.com/cpp-tutorial/comments/)
* El capítulo 2 [Basics: Functions and Files](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/) (completo)
* [Command line arguments](https://www.learncpp.com/cpp-tutorial/command-line-arguments/)

### Diseño de los programas
Recuerde las que se han estudiado como *Buenas Prácticas* a la hora de diseñar sus funciones:
* El código deberá organizarse en diferentes funciones 
* Cada función deberá realizar una única tarea y hacerlo correctamente 
* El identificador de una función debe reflejar claramente lo que la función hace 

Tal como se indica en [How to design your first programs](https://www.learncpp.com/cpp-tutorial/how-to-design-your-first-programs/), su código debiera estar organizado en torno a funciones que se invocan desde la función *main()*. Así, la apariencia habitual de la función principal de cualquier programa debería ser algo similar a:
``` .cpp
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  }
  GetUserInput();
  GetMathematicalOperation();
  GetUserInput();
  CalculateResult();
  PrintResult();
  return 0;
}
```
en el sentido de que la función *main()* es una mera *orquestadora* de las funciones que componen el programa. *main()* pasa a esas funciones los parámetros necesarios para su funcionamiento y las diferentes funciones devuelven a *main()* el valor que calculan (si fuera el caso).

Incluya en todos sus programas dos funciones con la siguiente declaración:
```
void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
```
La primera de ella se invocará al comienzo de la ejecución para imprimir un mensaje explicativo de la finalidad del programa en cuestión. La segunda devolverá *verdadero* si al programa se le ha pasado el número adecuado de parámetros por línea de comandos (3 en el ejemplo anterior) y *falso* en caso contrario. Estudie el programa [check-correct-parameters.cc](https://github.com/IB-2023-2024/IB-class-code-examples/blob/master/Functions/check-correct-parameters.cc) de los ejemplos de código de las clases de teoría, que ilustra el uso de estas dos funciones.

### Ejercicios
* Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente para cada uno de los ejercicios. Asigne a cada uno de esos directorios nombres significativos. 
* Automatice la compilación del programa correspondiente a cada ejercicio con un fichero `Makefile` independiente para cada programa e inclúyalo en el correspondiente directorio.
* Una vez complete un ejercicio, recuerde ejecutar `make clean` para eliminar los ficheros innecesarios y dejarlo listo para entregar.

1. Escriba un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión. 
```
Public test cases
Input   Output
2022    6
1492    16
0       0
```

2. Desarrolle un programa que imprima los N primeros términos de la [Serie de Fibonacci](https://en.wikipedia.org/wiki/Fibonacci_number). Los primeros términos de la serie son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
```
Public test cases
Input   Output
5       0 1 1 2 3
9       0 1 1 2 3 5 8 13 21
1       0
```

3. Estudie en el tutorial Learn C++ los epígrafes [Numeral systems (decimal, binary, hexadecimal, and octal)](https://www.learncpp.com/cpp-tutorial/numeral-systems-decimal-binary-hexadecimal-and-octal/) y [Converting between binary and decimal](https://www.learncpp.com/cpp-tutorial/converting-between-binary-and-decimal/).

Escriba un programa `binary-to-decimal.cc` que convierta números binarios en decimal. No utilice los tipos `std::string`, `std::vector` o `std::array`. Si la entrada no fuera un número binario, el programa debe imprimir en pantalla un mensaje de error y finalizar la ejecución.
```
Public test cases
Input      Output
1111       15
1011110    94
1018110    Wrong Input
10010111   151
```

4. Escriba un programa `decimal-to-binary.cc` que convierta números de decimal a binario. No utilice los tipos `std::string`, `std::vector` o `std::array`.
```
Public test cases
Input   Output
15      1111
94      1011110
151     10010111
```

5. Escriba un programa `leap-year.cc` que indique si un año es [bisiesto](https://en.wikipedia.org/wiki/Leap_year) o no. Después de la reforma gregoriana, se determinó que los años bisiestos son aquellos que son divisibles entre 400 o que son divisibles entre 4 pero no entre 100. Así, 1800 y 1900, a pesar de ser múltiplos de cuatro, no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto. 

```
Public test cases
Input   Output
1999    NO
1968    YES
2000    YES
1800    NO
```

Tenga en cuenta que en la evaluación de las prácticas de *Informática Básica* se utilizarán ejercicios de Jutge, de modo que resolver problemas en esa plataforma mejorará sus capacidades como programador/a. Realice todos los ejercicios que sea capaz. Recuerde siempre que Jutge sólo evalúa la corrección de su programa desde un punto de vista de su correcto funcionamiento. Su código ha de cumplir además con los requisitos de modularidad, formato y estilo.
