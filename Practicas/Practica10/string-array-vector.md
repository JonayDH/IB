# Práctica 10. `std::string`, `std::array`, `std::vector`. Exercism.

# Factor de ponderación: 8

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Sea capaz de resolver problemas sencillos en C++ usando todos los conocimientos adquiridos hasta ahora, en particular utilizando funciones y objetos de las clases `std::string`, `std::array` y `std::vector`
* Diseñe, desarrolle y utilice funciones en sus programas, haciendo que sus programas sean modulares
* Conozca la plataforma Exercism y sea capaz de interactuar con la misma para resolver problemas 

### Rúbrica de evaluación de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica. Se comprobará que el alumnado:
* Conoce los conceptos expuestos en el material de referencia de esta práctica
* Ha realizado todos los ejercicios propuestos en este enunciado
* Es capaz de escribir programas simples en C++ que resuelvan problemas de complejidad similar a los que se proponen en este documento
* Conoce la plataforma Exercism y es capaz de descargar y realizar problemas sencillos interactuando con ella
* Ha automatizado la compilación de sus programas usando un fichero `Makefile` para cada uno de los programas que desarrolle 
* Hace que sus programas se estructuren en torno a diferentes funciones (sean modulares)
* Todos sus programas se estructuran en directorios diferentes para cada "proyecto", haciendo que cada uno de ellos contenga un fichero `Makefile` con la configuración de compilación del proyecto
* Utiliza en todos sus programas comentarios adecuados en el formato requerido por [Doxygen](https://www.doxygen.nl/index.html)
* Acredita que todas las prácticas realizadas hasta la fecha se encuentran alojadas en repositorios privados de [GitHub](https://github.com/).
* Acredita que es capaz de subir programas a la plataforma [Jutge](https://jutge.org/) para su evaluación
* Ha incluido un comentario de prólogo en todos los ficheros (`*.cc`, `*.h`) de sus ejercicios
* Que todos los programas que desarrolla imprimen en pantalla antes de su ejecución un mensaje indicando la finalidad del programa, así como la información que precisará del usuario para su correcta ejecución
* Hace que todos los programas que se presentan para su evaluación cumplan con los estándares definidos en la [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 
* Utiliza siempre identificadores significativos en su programa (para constantes, variables, etc.) y no utiliza nunca identificadores de una única letra, excepto tal vez para las variables que utilice para iterar en un bucle
* Acredita que es capaz de editar ficheros remotos en su VM usando Vi
* Ha realizado todos sus ejercicios en la máquina virtual Ubuntu de la asignatura.
* Demuestra que es capaz de ejecutar comandos Linux en su VM

### Exercism
[Exercism](https://exercism.io/) es una plataforma orientada a aprender a programar o también a mejorar las capacidades de cualquier programador/a. El objetivo de Exercism es servir como medio para aprender a programar en un determinado lenguaje, y para ello se propone hacerlo mediante la resolución de ejercicios que otros usuarios han planteado. Lo que se persigue es que tanto quien resuelve el problema como quien lo planteó aprendan al mismo tiempo. Además, la interacción con el resto de la comunidad podrá llevar a debates para determinar cuál sería la mejor solución para un determinado problema.

La plataforma se basa en una una aplicación ejecutable en línea de comandos disponible para diferentes sistemas operativos (Linux, Mac, Windows). Usando esa aplicación, un usuario puede descargar una serie de ejercicios de programación disponibles en Exercism y realizar los correspondientes programas hasta que consiga pasar los diferentes tests que se suministran con cada ejercicio.

La plataforma puede ser usada en "modo práctica", en cuyo caso no existe la opción de *mentorización* (solicitar que un/a experto/a le ayude con sus ejercicios), pero aún así merece la pena practicar los múltiples ejercicios que hallará en la plataforma.

#### Primeros pasos en Exercism
Comience por [registrarse en Exercism](https://exercism.io/users/sign_up). Si lo desea, puede Ud. hacerlo usando la cuenta de GitHub de la que ya dispone. Una vez disponga de una cuenta, configure lo básico de la misma y elija un *track* (lenguaje) en el que desee practicar. Obviamente, se propone que elija el *track* correspondiente a C++.

Al hacerlo, la plataforma le preguntará si quiere trabajar en el editor en red o en su máquina local. Si escoge la segunda opción, se le explicará cómo trabajar con la plataforma en su máquina local. Para instalar Exercism en su máquina virtual, debe ejecutar el siguiente comando:
```sh
$ sudo snap install exercism
```
[`snap`](https://blogubuntu.com/que-es-ubuntu-snap) es un mecanismo alternativo al ya conocido `apt-get install` para instalar aplicaciones en Ubuntu Linux. Si quiere saber más sobre `snap` puede consultar [esta referencia](https://snapcraft.io/docs/getting-started), pero no es necesario para esta práctica. Para comprobar que la instalación es correcta, puede usar el comando
```sh
$ exercism version
```
Una vez instalada la aplicación `exercism`, el siguiente paso es configurar la interfaz de comandos (*Command Line Interface*, CLI) de la aplicación. Para ello tendrá que copiar su *token* personal, que podrá encontrar en el apartado [API/CLI](https://exercism.org/settings/api_cli) de la página de configuración de su cuenta de usuario. Por ejemplo, si su token fuera `xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx`, debería usted ejecutar
```sh
$ exercism configure --token=xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx
```
Una vez ejecutado, este comando muestra
```
You have configured the Exercism command-line client:

Config dir:                       /home/usuario/snap/exercism/5/.config/exercism
Token:         (-t, --token)      xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx
Workspace:     (-w, --workspace)  /home/usuario/snap/exercism/5/exercism
API Base URL:  (-a, --api)        https://api.exercism.io/v1
```
A continuación, ya puede elegir un problema para pasar a resolverlo. Se propone elegir el problema ["Hello World"](https://exercism.org/tracks/cpp/exercises/hello-world). En la página de cada problema figura una descripción precisa del mismo y un enlace 
"[Learn more about solving exercises locally](https://exercism.org/docs/using/solving-exercises/working-locally)" en el que figuran instrucciones para:
* Descargar el problema mediante el comando
  ```exercism download --track=cpp --exercise=xxxx```  
  Este comando se mostrará siempre junto al enunciado del problema a resolver
* Resolver el problema usando el editor que usted prefiera - se recomienda usar Vim.
* Subir la solución que usted proponga mediante el comando `exercism submit`

Si se ejecuta el comando para descargar el problema el sistema responde:
```sh
$ exercism download --track=cpp --exercise=hello-world

Downloaded to
/home/usuario/snap/exercism/5/exercism/cpp/hello-world
```
indicando el directorio donde ha colocado el código necesario para trabajar en ese problema. Si revisa los ficheros descargados, observará que Exercism utiliza `.cpp` como extensión para los ficheros con código fuente C++, en lugar de la extensión `.cc` que se usa en *Informática Básica*. La extensión `.cpp` es muy común para ficheros de código C++.

#### Ejecución de los tests para un determinado problema
El siguiente paso consiste en editar el programa (en el caso del problema *"Hello World",* el fichero a editar es `hello_world.cpp`). Edite ese fichero hasta que considere que tiene una versión operativa. Una vez finalizado su programa, el siguiente paso consiste en pasar (superar) los tests del código. Cada ejercicio de Exercism va acompañado de una serie de tests que el programa debe superar para ser considerado válido.

Tal como se explica en la página [Running the Tests](https://exercism.io/tracks/cpp/tests), cada problema va acompañado de sus tests unitarios y de un fichero `CMakeLists.txt` que se utiliza para automatizar la compilación de los tests y del propio programa. Tenga en cuenta que **no** debe modificar el fichero `CMakeLists.txt`.

Tal como se indica en la página anterior y suponiendo que su ejercicio se llame `bob`, deberían existir los ficheros `bob.cpp` y `bob.h` antes de ejecutar los tests. Esos ficheros podrían estar vacíos, pero han de existir. En el caso del ejercicio `hello-world`, los ficheros son `hello_world.cpp` y `hello_world.h`

El siguiente paso es compilar el programa y los tests unitarios. Para ello, colóquese en el directorio del ejercicio (`/home/usuario/snap/exercism/5/exercism/cpp/hello-world`) y ejecute:
```sh
$ touch hello_world.{h,cpp}
$ mkdir build
$ cd build
$ cmake -G "Unix Makefiles" ..
$ make
```
El comando [touch](https://ss64.com/bash/touch.html) modifica la fecha del fichero o ficheros que se le pase como argumentos. El directorio `build` que se crea servirá para alojar, entre otros ficheros, un programa ejecutable que pasará los tests a su código. Exercism utiliza `cmake`, de modo que tendrá usted que instalar esa aplicación en su VM si no la tiene instalada (`sudo apt install cmake`).

Al ejecutar `cmake -G "Unix Makefiles" ..` CMake creará un fichero `Makefile` que le servirá para compilar su ejercicio. Al ejecutar `make` en el directorio `build` se compilan los tests que ha de pasar su programa. Si se producen errores de compilación, tendrá usted que solucionarlos en el directorio de su ejercicio (el directorio padre de `build`). Una vez que se corrijan los errores, `make` construirá y ejecutará los tests que haya disponibles para el ejercicio en cuestión.

Normalmente cada problema viene acompañado de un conjunto de tests cuyo código se encuentra en un fichero cuyo nombre tiene el sufijo `_test` (`hello_world_test.cpp` en el caso del ejercicio "Hello World"). La estrategia que ha de seguir a la hora de progresar en la mejora de su ejercicio es hacer que su código pase progresivamente las diferentes pruebas (tests) que figuran en ese fichero. Para ello basta que "mueva" en el código la línea
```cpp
#if defined(EXERCISM_RUN_ALL_TESTS)
```
(si ésta existe) para situarla después del siguiente test que quiera probar. La plataforma de testing que utiliza Exercism es [Catch2](https://github.com/catchorg/Catch2) y los tests en formato Catch2 son fáciles de entender.

Cuando su solución al problema pase todos los tests, puede remitirla a la
plataforma. Utilice para ello el comando `exercism submit` que hallará en el fichero `HELP.md` incluido junto a los ficheros del problema. Una vez que haya enviado su solución a Exercism, recibirá un mensaje similar a este:
```
Your solution has been submitted successfully.
You can complete the exercise and unlock the next core exercise at:

https://exercism.io/my/solutions/xxxx
```
A partir de este punto puede ya ver las soluciones que otros/as usuarios/as hayan dado al mismo problema o bien avanzar con otros problemas de ese mismo *track*. Comience por trabajar con los problemas etiquetados como fáciles (*Easy*).

#### El problema de los años bisiestos
Resolveremos a continuación el problema [Leap](https://exercism.org/tracks/cpp/exercises/leap) de Exercism.

Previamente, si aún no lo ha hecho, resuelva el problema [P61634 Leap Years](https://jutge.org/problems/P61634_en) de Jutge. Hágalo en base a una función booleana `IsLeapYear(const int year)` que determine si el año que se le pasa como parámetro es o no bisiesto. Confirme que su programa pase todos los tests públicos antes de subirlo a [Jutge](https://jutge.org/) y conseguir un veredicto AC.

A continuación descargue el problema [Leap](https://exercism.org/tracks/cpp/exercises/leap) de Exercism:
```sh
exercism download --track=cpp --exercise=leap
```
El programa se descarga en el directorio `~/snap/exercism/5/exercism/cpp/leap`. Recuerde que debe copiar todos los ejercicios de Exercism que resuelva al directorio de trabajo de esta práctica:
```sh
cd ~/practicas/practica09-string-array-vector
mkdir Exercism-Leap
cd Exercism-Leap
cp -R ~/snap/exercism/5/exercism/cpp/leap/* .
```
Si inspecciona el fichero `leap_test.cpp` observará que contiene varios tests como el siguiente:
```cpp
 8 TEST_CASE("not_divisible_by_4")
 9 {
10     REQUIRE(!leap::is_leap_year(2015));
11 }
```
Su programa ha de cumplir todos estos tests. La línea 8 indica simplemente un nombre (arbitrario) que se le ha puesto al test. La línea 10 indica que se requiere que la función `is_leap_year()` del espacio de nombres `leap` devuelva `false`. Observe que la función se invoca usando el espacio de nombres en que está definida:
```cpp
leap::is_leap_year(2015);
```
La cláusula `REQUIRE` es específica de la plataforma de testing [Catch2](https://github.com/catchorg/Catch2) que utiliza Exercism y su significado es obvio: se *requiere* que su argumento `!leap::is_leap_year(2015)` sea cierto o, dicho de otro modo, que la función devuelva `false` cuando se le pasa el año 2015 como parámetro.

De esta inspección se deduce que los tests utilizan una función con nombre `is_leap_year()`, que toma un parámetro entero correspondiente al año a evaluar. Los tests comprueban que la función debe devolver `true` para los años 1996 y 2000 mientras que debe devolver `false` para los años 2015, 1970, 2100 y 1800. Así pues, habrá que diseñar una función cuyo prototipo ha de ser:
```cpp
bool is_leap_year(const int year);
```
Incluya el prototipo (declaración) de la función en el fichero `leap.h` cuyo contenido sería:
```cpp
#if !defined(LEAP_H)
#define LEAP_H

namespace leap {
  bool is_leap_year(const int year);
}  // namespace leap

#endif // LEAP_H
```
Obsérvese que el prototipo se está incluyendo en el espacio de nombres `leap`. Observe también que Exercism tampoco sigue la regla de la Guía de Estilo de Google para los identificadores de funciones.

Incluya a continuación la definición de su función `is_leap_year` en el espacio de nombres `leap` del fichero `leap.cpp`. Para esta función puede usar el código de la función `IsLeapYear()` que ya desarrolló para Jutge.

Una vez que tenga completo el código y esté correctamente escrito y documentado (recuerde incluir comentarios Doxygen con etiquetas JSDoc en todas las funciones que desarrolle, así como comentarios de cabecera en todos sus ficheros), proceda ahora a compilar el programa. Para ello, utilice `cmake` con el fichero `CMakeLists.txt` suministrado por Exercism:
```sh
$ cd ~/practicas/practica09-string-array-vector/Exercism-Leap/
$ mkdir build
$ cd build
$ cmake ..
$ make
```
Al ejecutar `make` se ejecutará el primer test y el sistema mostrará:
```
~/practicas/practica09-string-array-vector/Exercism-Leap/build$ make
Scanning dependencies of target leap
[ 25%] Building CXX object CMakeFiles/leap.dir/leap_test.cpp.o
[ 50%] Building CXX object CMakeFiles/leap.dir/leap.cpp.o
[ 75%] Building CXX object CMakeFiles/leap.dir/test/tests-main.cpp.o
[100%] Linking CXX executable leap
[100%] Built target leap
Scanning dependencies of target test_leap
===============================================================================
All tests passed (1 assertion in 1 test case)

[100%] Built target test_leap
```
indicando que su código ha pasado satisfactoriamente el primero de los tests.

Puesto que la función ya ha sido probada en Jutge, podemos tratar de pasar todos los tests disponibles para este problema. Para ello, edite el fichero `leap_test.cpp` y desplace la línea con la directiva `#if defined(EXERCISM_RUN_ALL_TESTS)` para colocarla en la línea inmediatamente anterior a la directiva `#endif`. De este modo se conseguirá que el sistema ejecute todos los tests requeridos por Exercism (6 en este caso) para este problema. Vuelva de nuevo al directorio `build` y ejecute nuevamente `make`.

Una vez que su solución pase todos los tests, puede borrar el directorio `build` y enviar su solución a Exercism. En el fichero `HELP.md` hallará el comando para ello:
```sh
$ rm -rf build
$ exercism submit leap.cpp leap.h
```
Y a continuación podrá ver su solución usando un navegador.

### Material de estudio complementario
Repase de las transparencias de clase (y sus correspondientes programas de ejemplo) todos los contenidos relacionados con los objetos de tipo `std::string`, `std::array` y `std::vector`, así como el paso de parámetros a las funciones.

Estudie los siguientes apartados del [tutorial de referencia](https://www.learncpp.com/) de la asignatura:
* [7.18 — Introduction to random number generation](https://www.learncpp.com/cpp-tutorial/introduction-to-random-number-generation/)
* [4.17 — Introduction to std::string](https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/)
* [4.18 — Introduction to std::string_view](https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring_view/)
* [11.16 — An introduction to std::array](https://www.learncpp.com/cpp-tutorial/an-introduction-to-stdarray/)
* [11.17 — An introduction to std::vector](https://www.learncpp.com/cpp-tutorial/an-introduction-to-stdvector/)
* [11.13 — For-each loops](https://www.learncpp.com/cpp-tutorial/for-each-loops/)

### Ejercicios
* Al realizar los ejercicios, cree dentro de su repositorio de esta práctica un directorio diferente para cada uno de los ejercicios. Asigne a cada uno de esos directorios nombres significativos
* Automatice la compilación del programa correspondiente a cada ejercicio con un fichero `Makefile` independiente para cada programa e inclúyalo en el correspondiente directorio
* Haga que todos los programas tomen su entrada por la línea de comandos y, en caso de que se ejecuten sin pasarles el número adecuado de parámetros, impriman en pantalla un mensaje indicando el modo correcto de ejecutar el programa
* El código de cada uno de los programas deberá organizarse de forma modular, es decir haciendo uso de funciones 
* Cada función deberá realizar una única tarea y hacerla correctamente 
* El identificador de una función debe reflejar claramente lo que la función hace 

1. Solucione todos los problemas que le sea posible en la plataforma Exercism. Ello le ayudará a mejorar sus capacidades de programación.

2. Desarrolle un programa que incluya una función cuyo prototipo sea:
    ```cpp
    std::vector<double> GenerateVector(int size, double lower, double upper);
    ```
    Esta función debe generar y devolver un vector de `size` elementos que se inicializarán con valores generados aleatoriamente en el intervalo `(lower, upper)`. Consulte para ello en [cppreference](https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution) cómo utilizar una distribución uniforme con números reales. Una vez tenga desarrollada esa función, podría invocarla del siguiente modo (por ejemplo):
    ```cpp
    std::vector<double> my_vector{GenerateVector(30, 5.0, 10.0)};
    for (const auto& value: my_vector) {
      std::cout << "Component: " << value << std::endl;
    }
    ```
    La llamada anterior inicializa el vector `my_vector` con 30 componentes de tipo `double`, cuyos valores se generan aleatoriamente dentro el rango `(5.0, 10.0)`. A continuación, el bucle imprime los valores que se almacenan en ese vector.

3. Desarrolle un programa que incluya una función `ReduceSum` que tome como parámetro un vector de números en punto flotante y devuelva como resultado la suma de todos los valores almacenados en el vector.
    
    Utilice la función `GenerateVector()` para generar vectores y probar el funcionamiento de `ReduceSum`.
    ```
    Public test cases
    Input           Output
    1.0 1.0 1.0      3.0
    1 2 3 4 5 6     21.0
    0 0 0 0 1 0 1    2.0
    ```

4. Desarrolle un programa que incluya una función que tome como parámetro un vector y calcule los valores máximo, mínimo y promedio de todos los valores almacenados en el vector.
    
    Puesto que una función solo puede devolver un único valor, tendrá que investigar algún mecanismo para posibilitar que la función devuelva esos tres valores (máximo, mínimo y promedio). Una posible solución sería desarrollar tres funciones diferentes, una para cada uno de los cálculos, pero eso sería ineficiente porque ello requeriría recorrer el vector tres veces, cuando el problema se puede resolver recorriendo el vector una sola vez.
    
    Investigue cómo resolver el problema utilizando el paso de parámetros por referencia para posibilitar que la función *exporte* los tres valores que calcula. Utilice la función `GenerateVector()` para generar vectores y probar el funcionamiento de su función.

5. Una forma sencilla de generar un número entero aleatorio en cualquier rango es recurriendo a la función [`std::rand`](https://en.cppreference.com/w/cpp/numeric/random/rand) de la librería `cstdlib`, que devuelve un número entero pseudo-aleatorio en el rango [0, `RAND_MAX`]. `RAND_MAX` es una constante cuyo valor depende de la versión del compilador que se use, pero se garantiza que es al menos mayor o igual que 32767.
    
    Para ajustar el valor devuelto por `std::rand` al intervalo deseado, se puede utilizar la operación *módulo* (`%`). Por ejemplo, para obtener un valor aleatorio en el intervalo `[a, b)` (`a` incluido, `b` excluido), se podría realizar la operación
    ```
    a + std::rand() % (b - a) 
    ```
    Desarrolle un programa que incluya una función (que no devuelva nada) que tome como parámetro un vector y lo desordene. Para ello, recorra el vector e intercambie cada uno de sus elementos con una posición aleatoria dentro del mismo.
    
    Si observa que su programa siempre muestra la misma permutación del vector, estudie la función [`std::srand`](https://en.cppreference.com/w/cpp/numeric/random/srand) que permite modificar la *semilla* del generador de números aleatorios de C++.
