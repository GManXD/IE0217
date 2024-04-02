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

    Git es un sistema de control de versiones y su proposito es facilitar a los desarrolladores la colaboración en el proyecto y llevar un historial de cambios a los cuales se puede volver a un momento dado.


**4. ¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?**

    Un conflicto de fusión en Git ocurre cuando Git no puede fusionar las ramas debido a que ambas ramas modifican la misma linea de codigo o cuando una rama modifica un archivo pero la otra lo elimina. Estos conflictos se pueden resolver examinando los cambios deseados y editando el archivo en la rama en la cual se va a fusionar, al finalizar los cambios se añaden con 'git commit' y finalmente 'git merge --continue'' para resolver el conflicto y finalizar la fusión.

**5. ¿Qué es un archivo .gitignore y para qué se utiliza?**

    Un archivo .gitignore es un archivo de configuración, el cual indica cuales archivos o directorios serán ignorados al momento de agregar cambios a un repositorio. Comúnmente se utiliza para ignorar archivos temporales o binarios que no sean de importancia para el repositorio.

**6. ¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?**

    Los pull request son una solicitud de revisión por parte de otros desarrolladores antes de fusionar ramas , esto permita a otros desarrolladores solicitar cambios para finalmente realizar la fusion. Se puede solicitar un pull request despues de sincronizar el repositorio local y el remoto. Cuando el pull request ha sido revisada y aprobada, se puede fusionar ambas ramas con el "Merge".

**7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?**
**Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.**

    Los lenguajes interpretados utilizan un interprete para traducir el codigo linea por linea, debido a esto, las lineas de código serán ejecutadas linea por linea aún cuando exista un error, en este caso se para la ejecución en ese punto.
    Por otro lado, los lenguajes compilados utilizan un compilador que traduce todas las lineas de codigo y crea un archivo ejecutable que la maquina pueda leer, por lo que, en el caso de contener un error, no se ejecutará ninguna linea.
    Los lenguajes compilados poseen mayor rapidez y eficiencia en comparacion con los lenguajes interpretados, esto se debe a que el archivo ejecutable puede ser directamente ejecutado por la maquina. Debido a esto, es más optimo utilizar un lenguaje compilado cuando se necesite desarrollar aplicaciones con alto rendimiento, como por ejemplo un videojuego.
    Sin embargo, Los lenguajes interpretados son más faciles de mantener debido a que su sintaxis es más clara y legible, y estos suelen proporcionar herramientas de depuración que facilitan la correción de errores en el codigo, además de que estos son más portatiles para ejecutarlos en otras plataformas, por lo que en situaciones donde se priorizan estos aspectos es más óptimo utilizar un lenguaje interpretado, como por ejemplo en el desarrollo de aplicaciones web, ya que en este se prioriza la mantención y portabilidad del codigo antes que el rendimiento.


**8. Explique qué es un linker en el contexto de un lenguaje de programación compilado.**
**¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**

**9. Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.**

**10. Defina qué significa inicializar y declarar una variable.**

**11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

**12. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

**13. ¿Qué es un branch (rama) en Git y cómo se utiliza?**

**14. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**

**15. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp**
**en C++. Describa el propósito específico de cada tipo de archivo**

**16. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.**

**17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

**18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**

**19. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

**20. ¿Para qué se utiliza la directiva #ifndef?**

**21. ¿Qué es el puntero this en C++?**

**22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?**

**23. ¿Investigue qué es un memory leak?**

