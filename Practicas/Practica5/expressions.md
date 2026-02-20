# Práctica 05. Expresiones y tipos de datos. Git y GitHub. Estilo.

# Factor de ponderación: 5

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Practique el desarrollo de programas simples en C++ que involucren expresiones con diferentes tipos de datos
* Estudie y conozca los fundamentos de trabajo con las herramientas Git y GitHub
* Estudie y ponga en práctica las indicaciones que se proponen en la [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica:
* Se comprobará que el alumnado es capaz de escribir y evaluar expresiones que involucren diferentes tipos de datos
* Ha de demostrar que conoce el proceso de compilación de programas usando el compilador de C++ de GNU
* Ha de acreditar que es capaz de subir programas a la plataforma [Jutge](https://jutge.org/) para su evaluación
* Se comprobará que todos los ficheros (`*.cc`, `*.h`) de sus prácticas incluyen un comentario de cabecera
* Se comprobará que todos los programas de sus prácticas se ajusten a la [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 
* Ha de acreditar que es capaz de editar ficheros remotos en su VM usando vi
* Ha de demostrar que es capaz de ejecutar comandos Linux en su VM

### Introducción a Git y GitHub
[GitHub](https://github.com/) es un servicio en la nube con una interfaz web que ayuda a los desarrolladores a almacenar y administrar el código fuente de sus programas, así como a llevar un registro y control de cualquier cambio que se realice sobre ese código. [Git](https://git-scm.com/) es un sistema distribuido de control de versiones, en el que todo el código y su historial de cambios se encuentran disponibles en el ordenador del desarrollador. En la web se puede encontrar multitud de información sobre el uso de GitHub y Git; [este tutorial](https://www.diegocmartin.com/tutorial-git/) y [esta guía](https://rogerdudler.github.io/git-guide/) pueden ser un buen punto de comienzo para estudiar ambas herramientas. 

A la hora de estudiar estas herramientas, ha de tener en cuenta que el uso que en esta asignatura se va a realizar de las mismas es básico: inicialmente cada estudiante va a utilizar Git/GitHub exclusivamente para almacenar el código fuente de cada una de las prácticas y ejercicios de programación que desarrolle. No se pretende que compartan código a través de Git ni que colaboren en el desarrollo de código usando estas herramientas. También ha de tener en cuenta que un entorno de desarrollo colaborativo de programas es el escenario más habitual y en el que estas herramientas muestran su relevancia.

Para crear un repositorio de código hay básicamente dos opciones: clonar (copiar) un repositorio (que ha de ser público) del que se conozca su dirección o bien crear uno partiendo de cero. Mostraremos a continuación la primera de estas opciones, que será la más habitual en las prácticas de *Informática Básica:* en cada una de las siguientes prácticas, el profesorado le entregará el enlace a un repositorio público que Ud. tendrá que clonar haciendo una copia privada del mismo para su trabajo.

Antes de comenzar a trabajar ahora con Git, asegúrese de haber añadido la clave *ssh* de su máquina virtual Linux a su cuenta GitHub, tal como se explicó en la primera práctica de la asignatura. Si aún no lo ha hecho, recuerde que puede utilizar [estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/adding-a-new-ssh-key-to-your-github-account), en las que el enlace [*Generating a new SSH key and adding it to the ssh-agent*](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent) le indicará cómo generar una clave *ssh* en su máquina virtual (también puede hacer lo mismo con otros sistemas Linux con los que trabaje habitualmente, como su instalación de VirtualBox o WSL). También la sección "Trabajando con Git en Remoto" del [tutorial de Diego Martín](https://www.diegocmartin.com/tutorial-git/) puede serle de ayuda para configurar la clave *ssh.*

[Estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/creating-cloning-and-archiving-repositories/cloning-a-repository) explican cómo clonar un repositorio una vez obtenida su dirección en GitHub. Para clonar el repositorio de esta práctica en su máquina virtual Ubuntu de la asignatura, acceda al directorio en el que esté organizando sus prácticas y ejecute:
```
$ git clone git@github.com:IB-2025-2026/P05-expressions.git <dir>
```
sustituyendo `<dir>` por el nombre que quiera dar al directorio en el que se realizará la copia (puede dejarlo en blanco para usar el mismo nombre del repositorio). El primer parámetro después de `clone` es la dirección del repositorio, que ha de ser público para poder copiarlo. Una vez ejecutado el comando, acceda al directorio que acaba de crear y examine el contenido del mismo.

GitHub utiliza profusamente ficheros de texto con formato Markdown, que suelen tener la extensión `.md` El fichero `README.md` es un fichero de texto (compruébelo con el comando `file`) en formato Markdown. Markdown es un lenguaje de marcas que permite aplicar formato (negrita, itálicas, imágenes, listas, etc.) a un fichero de texto. Este texto que está Ud. leyendo (`expressions.md`) también está escrito en formato Markdown y es uno de los que ha descargado. Pruebe a abrirlo con vim o `less` para ver qué aspecto tiene.

El formato Markdown fue ideado para elaborar textos cuyo destino iba a ser la web, con más rapidez y sencillez que si se empleara HTML. No es necesario que lo aprenda para esta asignatura, pero si tiene interés en ello, [esta referencia](https://www.genbeta.com/guia-de-inicio/que-es-markdown-para-que-sirve-y-como-usarlo) puede servirle de introducción. [Este tutorial](https://guides.github.com/features/mastering-markdown/) y el editor web [StackEdit](https://stackedit.io/) también pueden resultarle útiles si desea conocer el lenguaje en mayor profundidad.

En este punto ya estaría todo listo para que acceda al directorio de trabajo (que creó al clonar el repositorio) y desarrolle en él todos los ejercicios de esta práctica. Dentro de ese directorio cree subdirectorios para cada uno de los ejercicios de la práctica. Ahora todo el trabajo ha de realizarlo de la forma habitual, editando sus programas dentro de ese
directorio y realizando todas las pruebas que considere oportunas.

En prácticas y asignaturas futuras a menudo trabajará Ud. con repositorios privados en los que puede mantener una copia de todo su trabajo. Cuando éste sea el caso, después de cada sesión de trabajo debe recordar "subir" sus cambios a la nube de GitHub - tenga en cuenta que para esta práctica no podrá hacerlo, ya que el repositorio que ha clonado no le pertenece aunque sea público. Para actualizar el repositorio remoto, la secuencia habitual de comandos `git` a ejecutar suele ser la siguiente:
```
$ git pull
$ git add .
$ git commit -m "Texto alusivo a los cambios realizados"
$ git push
```
* El primero de los comandos anteriores, `git pull` es siempre conveniente porque de ese modo se asegura que se descarga localmente la última versión del código que esté alojado en la nube de GitHub.
* `git add .` actualiza el índice de git con el contenido del directorio actual (observe que el punto es parte del comando).
* `git commit` registra en el repositorio los cambios que se hayan realizado. A esos cambios les asocia el mensaje de texto que aparece en el comando. 
* `git push` Actualiza (sube los cambios a la nube) el repositorio en la nube.

Esta secuencia de comandos git deberá Ud. usarla con relativa frecuencia (al finalizar cada ejercicio, al menos) para guardar una copia de su trabajo en su repositorio privado. Explicaciones más detalladas de este *workflow* (flujo de trabajo) las puede hallar en el primer [tutorial](https://www.diegocmartin.com/tutorial-git/) que se propone en este documento.

Tenga en cuenta que `git add .` incluye todos los ficheros del directorio y sus subdirectorios, incluso aquellos innecesarios que no deberían incluirse en la nube, tales como ficheros ejecutables o de código binario. Aunque por el momento la opción más intuitiva es borrarlos manualmente antes de cada actualización, más adelante estudiaremos una forma sencilla de indicar a Git qué ficheros debe ignorar siempre.

Otra alternativa para crear un repositorio es crearlo directamente mediante la interfaz web de GitHub. Si quiere probar esta otra posibilidad, acceda a su cuenta GitHub y siga [estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/getting-started-with-github/create-a-repo) para crear un repositorio en su cuenta de GitHub. Elija un nombre adecuado para su repositorio (en lugar de `hello-world`) y haga que sea privado. En este repositorio, al ser de su propiedad, sí podrá Ud. utilizar los comandos `git` antes explicados.

### La Guía de Estilo de Google para C++

La [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) es un documento de referencia para todos los programas que se desarrollen en la asignatura, de modo que debe Ud. profundizar en su estudio. Ante cualquier duda sobre cualquier aspecto relacionado con el estilo (apariencia) del código, se atenderá lo que se indique en esta guía.

Estudie la sección de nominación ([Naming](https://google.github.io/styleguide/cppguide.html#Naming)) y dentro de ella estudie las reglas de nombrado de ficheros, tipos, variables y constantes. En el futuro deberá estudiar las reglas de nombrado de otras entidades que aún no se han estudiado en la asignatura.

En la sección de formato del código [Formatting](https://google.github.io/styleguide/cppguide.html#Formatting) estudie los apartados [Spaces vs Tabs](https://google.github.io/styleguide/cppguide.html#Spaces_vs._Tabs), [Conditionals](https://google.github.io/styleguide/cppguide.html#Conditionals), [Loops and Switch Statements](https://google.github.io/styleguide/cppguide.html#Loops_and_Switch_Statements), [Boolean Expressions](https://google.github.io/styleguide/cppguide.html#Boolean_Expressions), [Horizontal Whitespace](https://google.github.io/styleguide/cppguide.html#Horizontal_Whitespace) y [Vertical Whitespace](https://google.github.io/styleguide/cppguide.html#Vertical_Whitespace).

En la sección dedicada a los [Comentarios](https://google.github.io/styleguide/cppguide.html#Comments) estudie los apartados [Comment Style](https://google.github.io/styleguide/cppguide.html#Comment_Style), [File Comments](https://google.github.io/styleguide/cppguide.html#File_Comments), [Variable Comments](https://google.github.io/styleguide/cppguide.html#Variable_Comments) e [Implementation Comments](https://google.github.io/styleguide/cppguide.html#Implementation_Comments).

Ponga en práctica esas reglas en todos los programas que desarrolle. De forma paulatina se irá estudiando con mayor profundidad esa guía. Se enumeran a continuación algunas cuestiones relativas al formato (aspecto) del código que en la mayoría de los casos se reflejan en diferentes puntos de la guía:

* Todos los identificadores (de diferentes entidades: variables, funciones, clases, etc.) que utilice en su código han de ser significativos. Es una mala práctica el uso de identificadores de un solo carácter salvo para casos muy concretos.
* Asimismo deberán ser significativos los nombres que elija para sus ficheros y directorios, de modo que por ejemplo es preferible el nombre de fichero `P48107-integer-division-and-reminder.cc` que el nombre `P48107.cc`
* Todos los ficheros de código de un proyecto han de contener un bloque de comentarios prólogo donde se indique al menos: autor, información de contacto, fecha, asignatura, finalidad del código, etc.
* Un operador binario es aquél que opera dos operandos para producir como resultado un nuevo valor. Algunos ejemplos de operadores binarios en C++ son `+` (suma), `*` (producto), `/` (división), `%` (módulo), `=` (asignación), ... A ambos lados de un operador binario ha de haber siempre un espacio. (Véase [Horizontal Whitespace](https://google.github.io/styleguide/cppguide.html#Horizontal_Whitespace)). Así siempre se escribirá
```cpp
energy = mass * kLightSpeed * kLightSpeed;
```
  En lugar de:
```cpp
energy=mass*kLightSpeed*kLightSpeed;
```
* Deje siempre un espacio antes del carácter de llave abierta (`{` *curly brace*), así como después de un inicio de comentario (`//`):
```cpp
int main() {  // Open braces should always have a space before them
```
* Siempre después de una coma (`,`) ha de escribirse un espacio (` `).
* Se debe indentar (sangrar) el código usando espacios y no tabuladores. La [indentación](https://en.wikipedia.org/wiki/Indentation_(typesetting)) ("sangrado" en español) es el espacio en blanco que se deja al principio de cada línea para indicar el comienzo de un nuevo párrafo o nivel de estructuración del código. Cada nivel de indentación ha de hacerse con 2 espacios (lo cual se puede configurar en el fichero `.vimrc` para el editor vim).
* No comente lo obvio. No se trata de comentar por comentar, sino de aclarar al lector allí donde sea necesario la finalidad del código que se escribe. Por ejemplo, el siguiente comentario es absolutamente superfluo puesto que no aporta información alguna a lo que ya se indica en la sentencia.
```cpp
mi_variable = 2 * intensidad;    // El valor de intensidad se multiplica por 2
``` 

### El tutorial *Learn C++*

El tutorial  [Learn C++](https://www.learncpp.com/) es el tutorial de referencia para aprender C++ en *Informática Básica*. Se trata de un tutorial que utiliza C++ moderno y es muy completo, conteniendo material de estudio, referencias, ejercicios, consejos sobre buenas prácticas, etc. Un inconveniente de este tutorial es que no sigue las recomendaciones de la [Guía de Estilo de Google para C++](https://google.github.io/styleguide/cppguide.html#File_Names), pero es algo que se puede gestionar adecuadamente siendo conscientes de ello. Particularmente, en este tutorial la disposición de las llaves `{`, `}` (*curly braces*) que se usan en C++ para delimitar bloques de código no coincide con [la que se recomienda](https://google.github.io/styleguide/cppguide.html#Conditionals) en la Guía de Estilo.

El tutorial cubre sobradamente todo el material que se precisa estudiar en la asignatura, de modo que se recomienda al alumnado estudiar todo este material usando como guía las clases de teoría de la asignatura.

En particular, en esta práctica se les pide que estudien los capítulos 1 [C++ Basics](https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/) y 4 [Fundamental Data Types](https://www.learncpp.com/cpp-tutorial/introduction-to-fundamental-data-types/) del tutorial. Esos capítulos abordan temas que ya se han revisado en las clases de teoría. Se les propone que los estudien y respondan [las preguntas](https://www.learncpp.com/cpp-tutorial/chapter-1-summary-and-quiz/) que figuran al final de los capítulos.

### Expresiones

Preste especial atención al estudio de las [expresiones](https://www.learncpp.com/cpp-tutorial/introduction-to-expressions/) en C++. Una expresión es una combinación de literales, variables y operadores que calculan un único valor. Así por ejemplo:
```cpp
energy = mass * kLightSpeed * kLightSpeed;
```
es una expresión que calcula el valor de la energía a partir de los valores de la masa y la velocidad de la luz. Si desea ampliar el estudio de las expresiones, puede recurrir también a los temas de [Expresiones](http://www.minidosis.org/#/temas/Cpp.Expresiones) y [Expresiones booleanas](http://www.minidosis.org/#/temas/Cpp.ExpresionesBooleanas) del tutorial MiniDosis.

### Ejercicios

1. Estudie el apartado [Conocer el código ASCII](http://www.minidosis.org/#/temas/Cpp.Expresiones) (vídeo y ejemplos) del tutorial MiniDosis. Tenga en cuenta que en MiniDosis se utiliza *la forma antigua* de realizar conversiones de tipos.
```cpp
int variable1;
double variable2 = 4.5;
variable1 = int(variable2);
```
  En el código anterior en la sentencia `my_variable1 = int(my_variable2)` la segunda variable es *convertida* a entero para asignar su valor a `variable1`. Tal como se explica en [Introduction to type conversion and static_cast](https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/), la forma más adecuada en C++ de realizar una conversión de tipos es usar el operador `static_cast`, de modo que el código anterior sería equivalente a:
```cpp
int variable1;
double variable2 = 4.5;
variable1 = static_cast<int>(variable2);
```

  Estudie el programa de ejemplo [static_cast.cc](https://github.com/IB-2024-2025/IB-class-code-examples/blob/master/IntroductionToC++/static_cast.cc) de los utilizados junto a las transparencias de la asignatura.

  Utilice lo aprendido para desarrollar un programa `minuscula.cc` que lea desde el teclado una letra mayúscula y muestre por pantalla su correspondiente letra minúscula.

2. Escriba un programa `boolean_operators.cc` que imprima en pantalla la *tabla de verdad* de los operadores lógicos (*and*, *or*, *not*) de C++. El programa deberá utilizar un par de variables booleanas y mostrar el resultado de operar ambas variables con todos sus posibles valores y con cada uno de los operadores lógicos.

|   A   |   B   | A and B | A or B | not A |
| ----- | ----- | ------- | ------ | ----- |
| true  | true  | true    | true   | false |
| true  | false | false   | true   | false |
| false | true  | false   | true   | true  |
| false | false | false   | false  | true  |

3. Escriba un programa `arithmetic_operators.cc` que declare e inicialice variables de tipos aritméticos (enteros y reales) e imprima en pantalla el resultado de operar esas variables con todos los operadores que pueda utilizar con ellas. Utilice operadores aritméticos y de comparación. El programa imprimirá en pantalla líneas como la siguiente para cada uno de los operadores considerados.
```cpp
7 % 3 = 1
```

4. [C++ Tutor](http://pythontutor.com/cpp.html#mode=edit) es una herramienta que, a través de una interfaz web, permite "visualizar" la ejecución de programas escritos en C++ (también tiene soporte para otros lenguajes). Experimente con la herramienta y ejecute con ella los programas que haya estudiado en clase, así como todos los programas correspondientes a los ejercicios anteriores. Pruebe a usar la herramienta con el fichero [`references_and_pointers.cc`](https://github.com/IB-2025-2026/P05-expressions/blob/main/references_and_pointers.cc), incluido en el repositorio que ha descargado.

5. Escriba un programa que solucione el problema [P48107](https://jutge.org/problems/P48107) y evalúe su solución utilizando Jutge. Preste especial atención a las condiciones que impone el enunciado y recuerde que Jutge solo evalúa la corrección de su programa desde un punto de vista del funcionamiento. Su código ha de cumplir adicionalmente con los requisitos de formato y estilo.
