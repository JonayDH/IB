# Práctica 11. Ficheros. Visual Studio Code.

# Factor de ponderación: 9

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Sea capaz de resolver problemas sencillos en C++ usando todos los conocimientos adquiridos hasta ahora, y en particular utilizando funciones y ficheros de texto
* Diseñe, desarrolle y utilice funciones en sus programas haciendo que sus programas sean modulares
* Configure y practique el uso de Visual Studio Code (VSC) para editar ficheros de forma remota en su VM

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica.
Se comprobará que el alumnado:
* Conoce los conceptos expuestos en el material de referencia de esta práctica.
* Ha realizado todos los ejercicios propuestos en este enunciado
* Es capaz de escribir programas simples en C++ que resuelvan problemas de complejidad similar a los que se proponen en este documento
* Sea capaz de utilizar VSC para editar y compilar programas de forma remota en su Máquina Virtual
* Conoce la plataforma Exercism y es capaz de descargar y realizar problemas sencillos interaccionando con ella.
* Ha automatizado la compilación de sus programas usando un fichero `Makefile` para cada uno de los programas que desarrolle
* Hace que sus programas se estructuren en torno a diferentes funciones (sean modulares)
* Utiliza en todos sus programas comentarios adecuados en el formato requerido por [Doxygen](https://www.doxygen.nl/index.html)
* Acredita que todas las prácticas realizadas hasta la fecha se encuentran alojadas en repositorios privados de [GitHub](https://github.com/).
* Acredita que es capaz de subir programas a la plataforma [Jutge](https://jutge.org/) para su evaluación
* Ha incluido un comentario prólogo en todos los ficheros (`*.cc`, `*.h`) de sus ejercicios
* Que todos los programas que desarrolla, antes de su ejecución imprimen en pantalla un mensaje indicando la finalidad del programa así como la información que precisará del usuario para su correcta ejecución.
* Hace que todos los programas que se presentan para su evaluación cumplan con los estándares definidos en la [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html)
* Utiliza siempre identificadores significativos en su programa (para constantes, variables, etc.) y no utiliza nunca identificadores de una única letra, tal vez con la excepción de las variables que utilice para iterar en un bucle.
* Acredita que es capaz de editar ficheros remotos en su VM usando vi
* Ha realizado todos sus ejercicios en la máquina virtual Ubuntu de la asignatura.
* Demuestra que es capaz de ejecutar comandos Linux en su VM

### Visual Studio Code
Un [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment) (*Integrated development environment*, entorno integrado de desarrollo) es un programa que proporciona diversos servicios a un/a programador/a para facilitarle la tarea del desarrollo de programas. Los servicios más comunes que proporciona un IDE son un editor de código fuente (hasta ahora se ha usado vi), un compilador (se seguirá usando g++), herramientas de construcción automáticas (hasta ahora se ha utilizado `make`) y un depurador.

La mayoría de los IDE tienen auto-completado inteligente de código (*IntelliSense*). Los IDE presentan un único programa en el que se lleva a cabo todo el desarrollo. Generalmente, este programa (IDE) suele ofrecer muchas funcionalidades para la creación, modificación, compilación, implementación y depuración de programas. Algunos IDE están orientados específicamente a un determinado lenguaje de programación, mientras que otros se pueden utilizar con diferentes lenguajes.

[Visual Studio Code](https://en.wikipedia.org/wiki/Visual_Studio_Code) (VSC) es un IDE desarrollado por Microsoft para Windows, Linux, macOS y Web. Incluye soporte para la depuración, control integrado de Git, resaltado de sintaxis, finalización inteligente de código, fragmentos y [refactorización](https://es.wikipedia.org/wiki/Refactorizaci%C3%B3n) (modificación del código fuente sin cambiar su comportamiento). El IDE es personalizable, por lo que sus usuarios pueden cambiar el tema del editor, los atajos de teclado y las preferencias. Es gratuito y de código abierto y es [uno de los IDEs más utilizados](https://www.geeksforgeeks.org/10-best-ide-for-web-developers-in-2022/) en la actualidad. En *Informática Básica* se adoptará VSC como IDE y se utilizará en la evaluación de las prácticas restantes de la asignatura.

Para instalar VSC en su instalación Linux particular (**no en su máquina virtual del IaaS**, sino en la instalación Linux desde la que suele trabajar) siga [estas instrucciones](https://code.visualstudio.com/docs/setup/linux) descargando el paquete `.deb`. Una vez haya descargado el paquete, instálelo en su máquina ejecutando:
```
sudo apt install code_xxx_amd64.deb
```
sustituyendo el nombre del fichero `.deb` por el del que Ud. haya descargado. Una vez haya instalado el paquete, compruebe que puede iniciar VSC en su máquina ejecutando en una terminal:
```
code .
```
En el comando anterior el punto indica que desea Ud. editar ficheros en el directorio actual (`.`). Cuando desee salir del programa, utilice el comando del menú *File*$\rightarrow$*Exit*. Siga a continuación las instrucciones de la página [Remote Development using SSH](https://code.visualstudio.com/docs/remote/ssh) para configurar la edición remota usando VSC:

- Realice sólo el paso 3 del apartado *Installation*, puesto que ya tiene Ud. instalado un cliente de SSH (el comando `ssh`, tanto en la máquina virtual como en su máquina de trabajo) y Visual Studio Code (usando el fichero `.deb` que descargó previamente). Instale el paquete correspondiente a la extensión *Remote Development extension pack*. Si sigue el enlace [Remote Development extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack) le llevará a una página en la que le indica el comando que ha de teclear en VSC (`Ctrl+P`) para instalar la extensión.

- Opcionalmente, realice el paso 3 del apartado *SSH host setup* para establecer una clave de autenticación y no tener que introducir su contraseña cada vez que se conecte. Acceda a la página [Tips and Tricks](https://code.visualstudio.com/docs/remote/troubleshooting#_improving-security-on-multi-user-servers) y siga las instrucciones correspondientes a *Quick start: Using SSH keys*. Ejecute para ello (sustituyendo la dirección IP por la de su VM):
    ```
    $ ssh-keygen -t rsa -b 4096
    $ export USER_AT_HOST=usuario@10.6.131.106
    $ export PUBKEYPATH="$HOME/.ssh/id_rsa.pub"
    $ ssh-copy-id -i "$PUBKEYPATH" "$USER_AT_HOST"
    ```

- Por último, siga los pasos del apartado *Connect to a remote host* para realizar la conexión a su máquina virtual. [Este vídeo](https://youtu.be/pAUfwae-eWg) ilustra cómo configurar la edición remota de ficheros alojados en máquinas IaaS-ULL usando VSC. Cuando haya terminado de trabajar, puede cerrar la conexión a través de *File*$\rightarrow$*Close Remote Connection.*

Para terminar, siga las instrucciones de la página [C/C++ for Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp) para instalar la extensión para C/C++ en VSC. Puede comprobar que ya se dispone del compilador `g++` de GNU, que es el que se ha venido utilizando en *Informática Básica*. Conéctese a través de VSC con su máquina virtual y siga el tutorial *Create a Hello World App* que aparece en la página anterior, creando el subdirectorio `helloworld` en el directorio de la práctica. Recuerde que, siguiendo la guía de estilo de Google, el fichero de código debería terminar en `.cc`, no `.cpp`.

Visual Studio Code está instalado en los ordenadores de las Salas del Centro de Cálculo de la ESIT. Con antelación a la sesión de evaluación de esta práctica, el alumnado debería realizar en uno de esos ordenadores la conexión hacia su máquina virtual de la asignatura, para comprobar que todo funcione correctamente antes de la sesión de evaluación.

### Material de estudio complementario
Estudie del [tutorial de referencia](https://www.learncpp.com/) en la asignatura los siguientes apartados:
* [28.1 Input and output (I/O) streams](https://www.learncpp.com/cpp-tutorial/input-and-output-io-streams/)
* [28.2 Input with istream](https://www.learncpp.com/cpp-tutorial/input-with-istream/)
* [28.3 Output with ostream and ios](https://www.learncpp.com/cpp-tutorial/output-with-ostream-and-ios/)
* [28.6 Basic file I/O](https://www.learncpp.com/cpp-tutorial/basic-file-io/)

### Ejercicios
* Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente para cada uno de los ejercicios. Asigne a cada uno de esos directorios nombres significativos.
* Automatice la compilación del programa correspondiente a cada ejercicio con un fichero `Makefile` independiente para cada programa e inclúyalo en el correspondiente directorio. Alternativamente podría también usarse `cmake` con un fichero `CMakeLists`, si se prefiere.
* Haga que todos los programas tomen su entrada por la línea de comandos y en caso de que se ejecuten sin pasarles el número adecuado de parámetros impriman en pantalla un mensaje indicando el modo correcto de ejecutar el programa.
* El código de cada uno de los programas deberá organizarse de forma modular, es decir haciendo uso de funciones
* Cada función deberá realizar una única tarea y hacerlo correctamente
* El identificador de una función debe reflejar claramente la finalidad de la función

Para realizar pruebas con los siguientes ejercicios, puede utilizar el documento *Quijote.txt* enlazado en el apartado de la práctica 3 del Aula Virtual de *Informática Básica.*

1. Escriba un programa que imprima en pantalla la palabra con mayor número de vocales y la palabra con el mayor número de consonantes (independientemente de si se trata de mayúsculas o minúsculas) que se encuentren en un fichero de texto que se le pase como parámetro por línea de comandos. En caso de empate (haya varias palabras con igual número de vocales/consonantes) el programa imprimirá la palabra que aparezca antes en el fichero de texto.

2. Escriba un programa que *rote* las vocales en minúscula que encuentre en el fichero que se le pase como parámetro por línea de comandos, entendiendo por *rotar* el cambio de
    - `'a'` por `'e'`
    - `'e'` por `'i'`
    - `'i'` por `'o'`
    - `'o'` por `'u'`
    - `'u'` por `'a'`
    
    De este modo, un fichero de entrada que contuviera este texto:
    > In an age when acronyms were popular, the Manchester Mark I was sometimes referred to as MADM (Manchester Automatic Digital Machine) or MUC (Manchester University Computer).
    
    produciría como salida este otro:
    > In en egi whin ecrunyms wiri pupaler, thi Menchistir Merk I wes sumitomis rifirrid tu es MADM (Menchistir Aatumetoc Dogotel Mechoni) ur MUC (Menchistir Unovirsoty Cumpatir).

3. Escriba un programa que lea un fichero de texto que se le pase como parámetro y produzca como salida ficheros con nombre `A.txt`, `B.txt`, ..., `Z.txt`. Cada uno de esos ficheros ha de contener, en líneas separadas, todas las palabras del fichero pasado como parámetro que comiencen por la correspondiente letra, mayúscula o minúscula.

4. Se conoce como [*cifrado César*](https://es.wikipedia.org/wiki/Cifrado_C%C3%A9sar) a un método muy simple de encriptación, consistente en sustituir cada carácter $n$ de un mensaje por el carácter $n+k$, siendo $k$ un valor entero. El siguiente sería un texto encriptado siguiendo este método y utilizando $k = 1:$
    ```
    Texto original:  Navidad, Navidad, dulce navidad
    Texto encriptado:  Obwjebe-!Obwjebe-!evmdf!obwjebe
    ```
    Se puede optar por hacer fijo el valor de $k$ o bien solicitarlo al usuario. Evidentemente, el desencriptado del fichero consistiría en realizar la operación inversa. En este caso, el valor de $k$ a utilizar debería solicitarse al usuario, para garantizar que éste está autorizado a leer el fichero.
    
    Desarrolle en C++ un programa cuya finalidad sea encriptar y desencriptar ficheros de texto. Deberá recibir por línea de comandos el nombre del fichero a procesar, el nombre del fichero de salida y el valor de $k.$ Por comodidad, puede permitir que el valor recibido de $k$ sea negativo, de forma que la encriptación y la desencriptación se realizarían mediante la misma operación, sólo cambiando el signo.
    ```
    $ ./cesar fichero_original.txt fichero_codificado.txt 3
    $ ./cesar fichero_codificado.txt fichero_decodificado.txt -3
    $ diff fichero_original.txt fichero_decodificado.txt
    ```
    En caso de detectar cualquier inconsistencia en los parámetros, el programa debe abortar su ejecución. Se mostrará asimismo un mensaje de error si el programa no consigue abrir el fichero de entrada.
