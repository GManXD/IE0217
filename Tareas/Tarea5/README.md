# Instrucciones de ejecución
Para ejecutar el programa se debe ubicar en el directorio "Tareas\Tarea5\src\". Este tiene su propio makefile con sus reglas, las cuales son las siguientes:

`build`:

    Compila el código fuente y genera un ejecutable llamado "tarea5.x".

`run`:    

    Ejecuta el programa

`all`:

    Compila y corre el programa. Es decir, primero hace el target build y luego el target run.

`clean`:

    Limpia el directorio de archivos compilados y deja únicamente el código fuente.

Para realizar alguna de estas acciones, se debe escribir en la terminal lo siguiente:

```bash
  mingw32-make accion
```

Donde la palabra "accion" se sustituye por la debida acción a realizar, por ejemplo, si deseamos compilar y correr el programa, podemos utilizar la accion all de la siguiente forma:

```bash
  mingw32-make all
```



# Parte Teórica 1/2

**1. ¿Qué es una expresión regular y cuál es su propósito en programación?**

    Una expresión regular se compone de una cadena de caracteres, los cuales, corresponden a un patrón de búsqueda, su proporsito en la programación es validar formatos y extraer información específica.

**2. ¿Qué significan los caracteres especiales . y * en una expresión regular?**

    En una expresión regular, el "." corresponde a cualquier caracter, excepto un salto de linea, mientras que el "*" hace coincidir 0 o más repeticiones del elemento que lo precede.

**3. ¿Cómo se pueden agrupar subexpresiones en una expresión regular?**  

    Para agrupar subexpresiones se utilizan los parentesis (), de forna que lo que encierra los parentesis corresponde a un grupo.

**4. ¿Qué función cumple la barra invertida \ en una expresión regular?**  

    La barra invertida en expresiones regulares corresponden a un escape, esto con el fin de poder utilizar un caracter especial por su forma simple, como por ejemplo, el "." que correspondia a cualquier caracter, si se le agrega una barra de escape \. va a corresponder al caracter ".".

**5. Explique cómo se pueden capturar coincidencias usando paréntesis en una expresión regular.**  

    Al utilizar paréntesis en una expresión regular, se pueden capturar partes específicas del texto que coinciden con esa subexpresión.

**7. ¿Cómo se representa una clase de caracteres en una expresión regular?**  

    Una clase de caracteres se representa como un conjunto, y se debe encerrar entre [], en este se debe coincidir 1 de los elementos en el conjunto para que la expresión se válida.

**8. ¿Cuál es el propósito del modificador $ en una expresión regular?**  

    El propósito del modificador $ es que el elemento que le preceda coincida al final de la cadena.

**9. Describa cómo validar una dirección de correo electrónico usando expresiones regulares en C++**  

    Para validar una dirección de corre electrónico usando expresiones regulares, se debe definir la forma del correo electronico y utilizar una expresión regular para verificar si el correo introducido hace match con la expresión regular.

**10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular compleja, especialmente en contextos donde el tiempo de ejecución es crítico?**

    El uso de expresiones regulares en aplicaciones de software podria tener implicaciones en el rendimiento, sobretodo si el tiempo de ejecución es importante en este, ya que las expresiones regulares son costosas computacionalmente, además de que algunas bibliotecas de expresiones regulares pueden tener un tiempo de compilación alto. Sin embargo, algunas tecnicas como limitar el rango de caracteres, utilizar clases de caracteres o utilizar bibliotecas optimizadas pueden mejorar la optimizacion de una expresión regular.

**11. ¿Qué es un Makefile y cuál es su función en un proyecto de C++?**  

    Un Makefile es una herramienta que nos permite establecer reglas para automatizar el proceso de compilación, enlazado y ejeción u otras tareas.

**12. ¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?**

    Una regla implícita es una regla que Make utiliza para deducir cómo construir un objetivo en función de su extensión o tipo, mientras que una regla explícita es una regla que especifica explícitamente cómo construir un objetivo mediante una receta definida por el usuario.

**13. Explique el propósito de las macros (variables) en un Makefile.**  

    Las variable en un Makefile sirven para almacenar valores, de forma que hace más legible y entendible el Makefile, además que proporciona una mayor facilidad para modificar el mismo. Despues de definirlas, estas se pueden utilizar de la siguiente forma $(variable).

**14. ¿Qué es un objetivo (target) en un Makefile y cómo se define?**  

    Un target indica el resultado que se desea obtener mediante el proceso de compilación y enlazado.

**15. ¿Por qué es útil dividir un proyecto de C++ en múltiples archivos fuente y cómo ayuda el uso de Makefiles en este enfoque?**  

    Dividir un proyecto en varios archivoa fuente ayuda a mantener una mejor organización del código, además, el Makefile ayuda en este enfoque debido a que si ya compiló un archivo, no tendra que volverlo a compilar si no se realizaron cambios en este.

**16. ¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?** 

    Las dependencias entre los archivos fuente en un Makefile se pueden definir mediante reglas que especifican qué archivos necesita para generar un Target.

**17. Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.**  

    Si se desea compilar un proyecto en diferentes sistemas operativos, se puede definir variables para configuraciones específicas de cada sistema operativo y luego utilizar estas variables para la compilación.

**18. ¿Cuál es el propósito de los comandos clean y all en un Makefile?**  

`clean`

    Sirve para eliminar los archivos que no son necesarios para la compilación, es decir, eliminar los archivos que sean generados y no los archivos fuente.

`all`

    Es se utiliza para compilar todos los target especificados en el makefile

**19. Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.**  

    Para pasar argumentos desde la línea de comandos a un Makefile se pueden usar variables especiales de Make o definir variables que se puedan sobrescribir desde la línea de comandos.

**20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente . cpp a un archivo objeto .o.**

    El siguiente código ejemplifica como compilar un archivo fuente a un objeto .o:

```bash
  %.o: %.cpp
    g++ -c $< -o $@
```



# Parte Teorica 2/2: Makefiles 


**1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**

`CC`:

    Esta variable suele especificar cual compilador utilizar

`CFLAGS`:

    Suele contener las opciones de compilación para código en C

`CXXFLAGS`:

    Suele contener las opciones de compilación para código en C++

`LDFLAGS`:

    Esta variable suele contener las opciones del linker 

**2. ¿De qué se compone una regla en un Makefile?**

    Una regla en un makefile se compone de: Un target que indica el resultado que se desea obtener, tambien debe contener las dependencias que indican cuales archivos necesita el target para ser generado. Por último, necesita un conjunto de comandos para generar el target.

**3. Defina qué es un target y cómo se relaciona con sus prerequisitos.**

    Un target representa un archivo o una acción que el programa necesita producir, estos pueden ser ejecutables, acciones, bibliotecas o documentos. Los prerequisitos son los archivos que necesita el programa para que el target pueda ser producido. 

**4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gec?**

`-I`:

    El -I indica un directorio donde el compilador debe buscar los archivos de cabecera.

`-c`:

    El -c se utiliza para compilar el archivo fuente pero no enlazarlo, es decir, se gener un archivo ".o"

`-o`:

    Se utiliza para especificar el nombre del archivo de salida

**5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**

    Las variable en un Makefile sirven para almacenar valores, de forma que hace más legible y entendible el Makefile, además que proporciona una mayor facilidad para modificar el mismo. Despues de definirlas, estas se pueden utilizar de la siguiente forma $(variable).

**6. ¿Qué utilidad tiene un @ en un Makefile?**

    El @ en un makefile sirve para que no se de la impresión por lineas de comando del comando que se está ejecutando, es decir, para que no se muestre en la salida estandar.

**7. ¿Para qué se utiliza .PHONY en un Makefile?**

    El .PHONY se utiliza para indicar que un target no se encuentra relacionado con un archivo real, es decir, que si yo ejecuto un make clean por ejemplo, y existe un archivo llamado clean, igual se ejecutará el make clean sin importar si existe un archivo llamado clean o no.

**Nota: C++ utiliza el snake_case para nombrar constantes, mientras que para el resto se utiliza el CamelCase. Para los atributos de una clase se utiliza un prefijo que comúnmente es la inicial del nombre de la clase seguido de un guión bajo y el nombre del atributo en formato CamelCase**