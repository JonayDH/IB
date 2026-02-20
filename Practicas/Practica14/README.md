# Práctica 14. Programación Orientada a Objetos (2)

# Factor de ponderación: 10

### Objetivos
Los objetivos de esta práctica son que el alumnado:

- Desarrolle programas sencillos en C++ utilizando programación orientada a objetos, así como todas las características del lenguaje estudiadas anteriormente
- Aprenda a sobrecargar operadores en C++
- Ponga en práctica diferentes formas de relacionar clases en C++

### Rúbrica de evaluación de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica. Se comprobará que el alumnado:

- Conoce los conceptos expuestos en el material de referencia de esta práctica.
- Ha realizado todos los ejercicios propuestos en este enunciado
- Es capaz de escribir programas simples en C++ que resuelvan problemas de complejidad similar a los que se proponen en este documento
- Sea capaz de utilizar VSC para editar y compilar programas de forma remota en su Máquina Virtual
- Conoce la plataforma Exercism y es capaz de descargar y realizar problemas sencillos interaccionando con ella.
- Ha automatizado la compilación de sus programas usando un fichero `Makefile` para cada uno de los programas que desarrolle
- Hace que sus programas se estructuren en torno a diferentes funciones (sean modulares)
- Utiliza en todos sus programas comentarios adecuados en el formato requerido por [Doxygen](https://www.doxygen.nl/index.html)
- Acredita que todas las prácticas realizadas hasta la fecha se encuentran alojadas en repositorios privados de [GitHub](https://github.com/).
- Acredita que es capaz de subir programas a la plataforma [Jutge](https://jutge.org/) para su evaluación
- Ha incluido un comentario prólogo en todos los ficheros (`*.cc`, `*.h`) de sus ejercicios
- Que todos los programas que desarrolla, antes de su ejecución imprimen en pantalla un mensaje indicando la finalidad del programa así como la información que precisará del usuario para su correcta ejecución.
- Hace que todos los programas que se presentan para su evaluación cumplan con los estándares definidos en la [Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html)
- Utiliza siempre identificadores significativos en su programa (para constantes, variables, etc.) y   no utiliza nunca identificadores de una única letra, tal vez con la excepción de las variables que utilice para iterar en un bucle.
- Acredita que es capaz de editar ficheros remotos en su VM usando vi
- Ha realizado todos sus ejercicios en la máquina virtual Ubuntu de la asignatura.
- Demuestra que es capaz de ejecutar comandos Linux en su VM

# Ejercicios

- Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente para cada uno de los ejercicios. Asigne a cada uno de esos directorios nombres significativos.
- Automatice la compilación del programa correspondiente a cada ejercicio con un fichero `Makefile` independiente para cada programa e inclúyalo en el correspondiente directorio. Alternativamente podría también usarse cmake con un fichero `CMakeLists.txt`, si se prefiere.
- Haga que todos los programas tomen su entrada por la línea de comandos y en caso de que se ejecuten sin pasarles el número adecuado de parámetros impriman en pantalla un mensaje indicando el modo correcto de ejecutar el programa.
- El código de cada uno de los programas deberá organizarse de forma modular, es decir haciendo uso de funciones. Cada función deberá realizar una única tarea y hacerlo correctamente. El identificador de una función debe reflejar claramente la finalidad de la función.

1. Escriba un programa en C++ que incluya:
   - Una clase `DNI` cuyo único atributo deberá ser un valor entero de tamaño suficiente para abarcar ocho cifras, que incluya un *getter* para dicho atributo y un método que calcule y devuelva [su letra correspondiente](https://jutge.org/problems/P24216_es) como un carácter individual.
   - Una clase `Persona` cuyos atributos deberán ser su nombre, como una cadena de caracteres, y su DNI, como un *componente* de la clase creada en el punto anterior.
   
   Implemente un operador de flujo de salida para la segunda clase, de forma que pueda mostrarse por pantalla tanto su nombre como su DNI con letra.

2. Escriba un programa en C++ que defina una clase `Equipo`, que tenga como atributos un nombre, dado como cadena de caracteres, y un vector de componentes de tipo `Persona`, de los cuáles se asumirá que el que se encuentra en primera posición es el capitán. La clase debe incluir una función `void HacerCapitan` que reciba como parámetro una `Persona` y realice la siguiente acción:
   - Si dicha `Persona` es uno de los componentes del equipo (y no es ya el capitán), se intercambiará con quien esté en primera posición dentro del vector,
   - Si no es uno de los componentes, la función deberá mostrar un mensaje de error y no realizar ningún cambio.
   
   La función principal del programa deberá definir una serie de personas, incluirlas en un equipo de una en una (revisando que no se incluya al mismo componente dos veces) y luego escoger de entre ellos a su capitán.

3. Escriba un programa en C++ que defina una clase `Torneo`, que tenga como atributo una [cola](https://en.cppreference.com/w/cpp/container/queue.html) de objetos de tipo `Equipo` (que por simplicidad pueden no tener componentes) e incluya una función `void Competir` que realice la siguiente acción:
   - Mientras que el [tamaño](https://en.cppreference.com/w/cpp/container/queue/size.html) de la cola sea mayor o igual que 2, [extraiga](https://en.cppreference.com/w/cpp/container/queue/pop.html) de ella dos equipos, descarte [aleatoriamente](https://en.cppreference.com/w/cpp/numeric/random/rand.html) uno de ellos e [inserte](https://en.cppreference.com/w/cpp/container/queue/push.html) el otro de nuevo. Muestre a cada paso los nombres de los equipos que se enfrentan y cuál de ellos resulta ganador.
   - Al salir del bucle, muestre por pantalla el nombre del vencedor del torneo, que será el único que quede en la cola.

4. Escriba un programa en C++ que declare un [mapa](https://en.cppreference.com/w/cpp/container/map.html) cuyas claves sean valores enteros y sus valores sean objetos de tipo `Persona`, introduzca en él varias personas (que puede leer desde un fichero por comodidad), utilizando su propio número de DNI como clave, y solicite al usuario varios números de DNI. Para cada uno, si éste [existe](https://en.cppreference.com/w/cpp/container/map/contains.html) como clave del mapa, se deberá mostrar por pantalla el nombre de la persona correspondiente; en caso contrario, se mostrará un mensaje advirtiendo al usuario de que esa persona no está registrada.
