# Instrucciones de ejecución
El archivo "main.cpp" utiliza al archivo "ahorcado.cpp", que este a la vez tiene un archivo encabezado el cual es "ahorcado.hpp". Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Tareas\Tarea1\src\": 

```bash
  g++ -o archivo.exe .\main.cpp .\ahorcado.cpp
```

Es decir, se deben compilar ambos archivos para que funcione el programa debido a que main.cpp utiliza a ahorcado.cpp

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: 
```bash
  ./archivo.exe
```

**Nota: el archivo "ahorcado.hpp" NO SE DEBE COMPILAR**

# Parte Teórica

**1. ¿Cuál es la principal diferencia entre C y C++?**

    La principal diferencia entre C y C++ es la capacidad de C++ para la programación orientada a objetos mientras que C es un lenguaje estructurado.

**2. Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.**

`git init`

    Al utilizar este comando en un directorio, Git inicia un repositorio en la ubicación actual y ahora este puede ser versionado.

`git add`

    Con git add se pueden seleccionar los cambios que se desean pasar de un estado "unstaged" a un estado de "staged"
    para que luego estos sean agregados en un nuevo commit.

`git commit`

    Se utiliza para agregar un nuevo commit con los cambios que se encuentren en estado "staged" en ese momento.

`git push`

    Con este comando los commits que han sido creados de manera local se envían al servidor remoto y son implementados.

`git pull`

    Este comando se utiliza para actualizar el repositorio actual con respecto al servidor remoto.

`git clone`

    Al utilizar este comando se crea un directorio con una copia local del repositorio remoto y todo su historial de commits.

`git branch`

    Este comando puede mostrarnos la rama actual y todas las existentes, crear nuevas ramas, renombrar una rama o eliminarla.

`git merge`

    Se utiliza para fusionar los cambios de una rama con la rama actual (de manera local), siempre que no existan conflictos entre estas.

**3. ¿Qué es Git y cuál es su propósito en el desarrollo de software?**

    Git es un sistema de control de versiones y su propósito es facilitar a los desarrolladores la colaboración en el proyecto y llevar un historial de cambios a los cuales se puede volver a un momento dado.


**4. ¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?**

    Un conflicto de fusión en Git ocurre cuando Git no puede fusionar las ramas debido a que ambas ramas modifican la misma línea de código o cuando una rama modifica un archivo, pero la otra lo elimina. Estos conflictos se pueden resolver examinando los cambios deseados y editando el archivo en la rama en la cual se va a fusionar, al finalizar los cambios se añaden con 'git commit' y finalmente 'git merge --continue'' para resolver el conflicto y finalizar la fusión.

**5. ¿Qué es un archivo .gitignore y para qué se utiliza?**

    Un archivo .gitignore es un archivo de configuración, el cual indica cuales archivos o directorios serán ignorados al momento de agregar cambios a un repositorio. Comúnmente se utiliza para ignorar archivos temporales o binarios que no sean de importancia para el repositorio.

**6. ¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?**

    Los pull request son una solicitud de revisión por parte de otros desarrolladores antes de fusionar ramas, esto permita a otros desarrolladores solicitar cambios para finalmente realizar la fusion. Se puede solicitar un pull request después de sincronizar el repositorio local y el remoto. Cuando el pull request ha sido revisada y aprobada, se puede fusionar ambas ramas con el "Merge".

**7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?**
**Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.**

    Los lenguajes interpretados utilizan un intérprete para traducir el código línea por línea, debido a esto, las líneas de código serán ejecutadas línea por línea aun cuando exista un error, en este caso se para la ejecución en ese punto.
    Por otro lado, los lenguajes compilados utilizan un compilador que traduce todas las líneas de código y crea un archivo ejecutable que la maquina pueda leer, por lo que, en el caso de contener un error, no se ejecutará ninguna línea.

    Los lenguajes compilados poseen mayor rapidez y eficiencia en comparación con los lenguajes interpretados, esto se debe a que el archivo ejecutable puede ser directamente ejecutado por la máquina. Debido a esto, es más optimo utilizar un lenguaje compilado cuando se necesite desarrollar aplicaciones con alto rendimiento, como por ejemplo un videojuego.

    Sin embargo, Los lenguajes interpretados son más fáciles de mantener debido a que su sintaxis es más clara y legible, y estos suelen proporcionar herramientas de depuración que facilitan la correción de errores en el código, además de que estos son más portátiles para ejecutarlos en otras plataformas, por lo que en situaciones donde se priorizan estos aspectos es más óptimo utilizar un lenguaje interpretado, como por ejemplo en el desarrollo de aplicaciones web, ya que en este se prioriza la mantención y portabilidad del código antes que el rendimiento.


**8. Explique qué es un linker en el contexto de un lenguaje de programación compilado.**
**¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**

    El linker une todos los archivos objeto en un archivo ejecutable para que la maquina los ejecute. Estos archivos objeto son creados por el compilador en el proceso de compilación. El linker es esencial en el proceso de compilación pues este conecta las referencias para que un programa sea ejecutado sin errores y además realiza optimizaciones para mejorar su rendimiento.

**9. Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.**

    Después de clonar el repositorio con 'git clone' y realizar cambios, se deben agregar los cambios con 'git add' y crear un nuevo commit con 'git commit'. Posteriormente se deben fusionar los cambios con el remoto con 'git push', y en caso de ser necesario se puede solicitar un pull request para recibir aprobación por parte de los colaboradores del repositorio.

**10. Defina qué significa inicializar y declarar una variable.**

    Declarar una variable se refiere a definir su tipo y el nombre de la variable sin asignarle un valor.
    Inicializar una variable consiste en asignarle un valor inicial a una variable, sin importar si ha sido declara en la misma línea o en otra, es decir, se puede declarar una variable sin inicializarla en la misma línea de código.

**11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

    La sobrecarga de funciones en C++ consiste en crear 2 o más funciones con el mismo nombre, pero cada una recibe un conjunto de parámetros distinto. Estas funciones pueden contener instrucciones diferentes que dependen del conjunto de parámetros que reciban. La sobrecarga de funciones permite que las funciones sean más flexibles con respecto a los datos que se le proporcionan, y realizar tareas acorde a estos. Además, facilita la reutilización de código, la legibilidad y la organización.

**12. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

    Los punteros son un tipo de variable que guardan la dirección de memoria de otra variable. Un ejemplo de la vida real sería:
    Una persona ha esparcido un chisme de ti en la escuela, pero tú no sabes quién es. Sin embargo, un amigo tuyo sabe quién contó el chisme, así que le preguntas a tu amigo y el señala la persona que esparció el chisme. En este caso, la variable a la cual apunta el puntero sería la persona que espació el chisme, mientras que tu amigo sería el puntero que conoce y señala quién es el que esparció el chisme.

    Las variables puntero se declaran especificando el tipo de variable a la cual "apuntan" seguido del símbolo de "*". Posteriormente se le asigna el valor de la dirección de memoria de la variable a la cual apunta utilizando el símbolo "&" antes del nombre de la variable a la cual apunta. Por ejemplo:

```bash
  int variable;                  // Se declara la variable a la cual apuntará el puntero
  int* variable_puntero;         // Declaración del puntero
  variable_puntero = &variable;  // Asignar valor al puntero
```

**13. ¿Qué es un branch (rama) en Git y cómo se utiliza?**

    Un branch es una línea de desarrollo paralela en la cual se pueden realizar cambios o modificaciones sin afectar a la linea principal.
    Para utilizar las ramas primeramente se debe crear una rama con 'git branch nombre_de_la_rama', realizar cambios o commits y posteriormente unir las ramas utilizando 'git merge nombre_de_la_rama_donde_se_va_a_fusionar'.

**14. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**

    El bucle while primero revisa la condición lógica, si esta es verdadera ejecuta las instrucciones correspondientes hasta que la condición sea falsa. En cambio, el bucle do-while ejecuta una primera vez la instrucción y luego se sigue ejecutando si la condición lógica es verdadera.

**15. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp**
**en C++. Describa el propósito específico de cada tipo de archivo**

    Los archivos .hpp son encabezados en los cuales se realizan las declaraciones de variables, funciones y estructuras. En los archivos .cpp se realizan las implementaciones de las funciones, variables y clases que se declararon en los archivos .hpp y que posteriormente se utilizaran en el main.cpp. Dividir el código en estos archivos es útil para mantener un orden del código y que se encuentre mejor organizado.

**16. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.**

    Las variables que se crean en C++ se pueden almacenar en "Data" o en los espacios de memoria dinámia como lo son el "Heap" y el "Stack" dependiendo de si son variables locales, estáticas, globales o dinámias. Las variables globales y estaticas se almacenan en "Data" y las variables locales se almacenan en el "Stack", mientras que las variables dinámias se almacenan en el "heap".
    Las variables locales y globales se diferencian en que las locales existen únicamente dentro de una función y no pueden ser utilizadas fuera de estas, además se almacenan en el "Stack", mientras que las variables globales se almacenan en "Data" y pueden ser utilizadas en cualquier parte del código.

**17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

    Al pasar parámetros por valor, se está enviando una copia del parámetro para que este pueda ser utilizado sin modificar el original, a diferencia del paso de valores por referencia que se envia una referencia del parámetro y todas las modificaciones a este afectan al original.
    Al pasar parámetros por puntero se está pasando la dirección de memoria del parámetro pero a través de un puntero, al modificar este se modificará el original.

**18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**

    Al utilizar un puntero para apuntar a un arreglo en C++, el valor al cual apunta inicialmente el puntero es al primer elemento del arreglo, si se desea acceder al siguiente elemento del arreglo se le debe sumar 1 al puntero, de forma que, si se quiere acceder a todos los datos de ese arreglo mediante el puntero, se deberá sumar 1 cada vez que queramos acceder al siguiente elemento del arreglo. Por ejemplo, se puede utilizar un for que recorra todos los elementos de la lista utilizando un puntero, de forma que en cada iteración se le sume 1 al puntero:

```bash
  ...
  for (int i = 0; i < cantidad_elementos; ++i){
    cout << *(puntero + i) << endl;
  }
  ...
```

**19. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

    Los punteros dobles en C++ son punteros que apuntan hacia otro puntero y este último apunta a la dirección de memoria de otra variable. Los punteros dobles se utilizan cuando se necesita manejar punteros de manera dinámica, trabajar con estructuras de datos complejas o modificar punteros. Por ejemplo, si se necesita crear una matriz de tamaño dinámico se pueden utilizar punteros dobles para crear un arreglo que apunte a otro arreglo, o si se necesita manejar cadenas de caracteres de longitud dinámica se pueden utilizar punteros dobles que apunten a un arreglo de punteros a caracteres.

**20. ¿Para qué se utiliza la directiva #ifndef?**

    La directiva #ifndef se utiliza para que un archivo encabezado se incluya una única vez en el programa, es decir, después de la primera vez que se incluya ya no lo volverá a hacer, esto con el fin de optimizar el tiempo de compilación y evitar errores.    

**21. ¿Qué es el puntero this en C++?**

    En C++, el puntero "this" se utiliza en las clases para referirse al objeto actual, es decir, contiene la dirección de memoria del objeto. Generalmente se utilizan para acceder a los miembros de una clase cuando el nombre de un parámetro de un método es igual al de miembro de la clase el cual se desea modificar.

**22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?**

    En C++ los arreglos son una estructura de datos estática cuyos elementos se almacenan en ubicaciones contiguas de memoria, mientras que las listas son dinámicas y los elementos se almacenan en nodos que se enlazan mediante punteros, además, en estas se pueden utilizar operadores de inserción y eliminación, pero en los arreglos no.

**23. ¿Investigue qué es un memory leak?**

    Un memory leak ocurre cuando se asigna memoria dinámica, pero esta no se libera cuando ya no se necesita, causando así una fuga de memoria que afecta el rendimiento y la estabilidad del programa.

**Nota: C++ utiliza CamelCase**