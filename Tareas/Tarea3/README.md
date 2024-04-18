# Parte Teórica

**1. ¿Qué es un algoritmo y cuáles son sus características principales?**

    Un algoritmo es un conjunto de instrucciones definidas y ordenadas que se utilizan para realizar una tarea específica o resolver un problema y sus características principales son:
    Su conjunto de instrucciones son finitas, ordenadas y precisas, además de que debe ser predecible y lograr resolver el problema para el que fue diseñado en un tiempo finito y razonable. Los algoritmos deben ser capaces de descomponerse en partes más pequeñas y manejables.

**2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.**

    Un algoritmo eficiente se diferencia de uno no eficiente por la cantidad de recursos que este utiliza, recursos como el tiempo, espacio y la complejidad del mismo, además de la capacidad de ser escalable, es decir, que pueda manejar una mayor cantidad de datos sin aumentar considerablemente el uso de recursos.

**3. ¿Qué es una estructura de datos y por qué son importantes?**

    Una estructura de datos es una forma de organizar y almacenar datos para poder utilizarlos de una forma eficiente. Estos son importantes debido a que ayudan a mantener un orden de los datos, reutilizar código existente y mejorar la eficiencia de un programa.

**4. Describe las diferencias entre una estructura de datos estática y una dinámica.**

    Las estructuars de datos dinámicas se diferencian de las estáticas debido a que las estátícas poseen un tamaño definido, mientras que las dinámicas pueden cambiar su tamaño pues estas utilizan memoria dinámica.

**5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como C++, explique las operaciones que se pueden realizar?**

    La memoria dinámica se asigna durante tiempo de ejecución y esta puede ser reservada con la palabra reservada "new" o con funciones como malloc(), tambien puede ser reasignada con funciones como realloc(). Esta memoria debe ser liberada para evitar una fuga de memoria, en el caso de haber usado la palabra reservada "new", se debe hacer "delete" de la variable asignada dinámicamente, en caso de haber utilizado la funcion malloc(), se utiliza la funcion free() para liberar la memporia.

**6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la memoria estática?**

    La memoria dinámica tiene como ventajas que se puede asignar y libarar constantemente en el programa, permitiendo así un mejor uso de la memoria y flexibilidad de trabajar con datos de tamaño variable. Sin embargo, el uso de la memoria dinámica es más compleja y el uso incorrecto de esta puede ocasionar una fuga o corrupcion de memoria.

**7. Explique qué es un árbol binario y cuáles son sus principales características.**

    Un árbol binario es una estructura de datos que se organiza de forma jerarquica que consite en un punto de partida "arriba" llamado nodo raiz, el cual puede tener maximo otros dos nodos que le suceden a este, los cuales pueden tener máximo otros dos nodos "abajo" de ellos y así sucesivamente. Este arbol puede ser recorrido de diferentes formas para acceder a todos los nodos, como el recorrido en orden, pre-orden o post-orden. La estructura jerarquica de los árboles binarios permite la organizacion y busqueda de datos de una forma más eficiente.

**8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?**

    Una cola (queue) es una estructura de datos que se rige por el principio FIFO, este principio se basa en que el primer elemento en entrar es el primer elemento en salir, es decir, que los elementos se agregan al final de la cola y al eliminar un elemento se elimina el del principio de la cola. Este tipo de estructura de datos se utiliza comúnmente cuando se necesite organizar datos de forma que se cumpla el principio FIFO, como por ejemplo, procesar datos en el orden de llegada. 

**9. ¿Cuál es la diferencia entre una cola queue y una pila (stack)?**

    Las estructuras de datos de cola queue y la pila se diferencian en que la cola sigue el principio FIFO, es decir que al eliminar un elemento se elimina del principio de la cola, mientras que la pila sigue el principio LIFO, es decir que al eliminar un elemento se elimina del final de la pila.

**10. Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.**

    El algoritmo de inserción en una tabla hash consiste en agregar un elemento a la estructura de datos, para esto se debe proporcionar una clave y un valor para dicho dato, primero se debe calcular la posición en la que se insertará dicho dato con una función llamada "hash function", para posteriormente insertarlo.

**11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas hash?**

    La función de dispersión se encarga de calcular la posición en la que se insertara un dato en la tabla hash para almacenar ese dato. Esta función distribuye los datos de manera uniforme y es importante debido a que permite un manejo eficaz de la memoria, mayor rendimiento y se pueden acceder a los datos con mayor rapidez.

**12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?**

    Una tabla hash bien implementada posee una complejidad temporal promedio de O(1), es decir que la busqueda o acceso de un elemento en una tabla hash se realiza en una cantidad constante de tiempo, independientemente de la cantidad de datos.

**13. Explica cómo se realiza la operación de inserción (push) en una pila (stack).**

    La operación de inserción (push) en una pila (stack) se refiere a agregar un nuevo elemento en la estructura de datos, esto se logra cambiando el puntero que apunta hacia el último elemento de la estructura para que ahora este apunte hacia la dirección en la que se va a guardar el nuevo elemento. 

**14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila?**

    Las operaciones de apilar y desapilar en una pila bien implementada poseen una complejidad temporal de O(1), es decir que para apilar o desapilar un elemento en una pila se realiza en una cantidad  constante de tiempo, independientemente de la cantidad de datos. 

**15. Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.**

    Una lista enlazada es una estructura de datos que consiste en una secuencia de nodos, estos nodos contienen el valor del dato que almacenan y la dirección del siguiente nodo. La lista enlazada tiene como ventaja que presentan un caracter dinámico, por lo que el tamaño de la lista enlazada puede aumentar o disminuir durante tiempo de ejecución, además, se caracteriza por su eficiente inserción y eliminación de elementos y por esto un eficiente uso de memoria, sin ebargo, para acceder a un elemento en especifico se debe de recorrer la lista desde el inicio, además de que necesita de almacenar el puntero al siguiente nodo.

**16. ¿Qué es un nodo en una lista enlazada y qué contiene?**

    Un nodo en una lista enlazada es una estructura que contiene el valor de un elemento y un puntero que apunta hacia el siguiente nodo.

**17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?**

    La lista enlazada simple se diferencia de una lista enlazada doblemente enlazada debido a que en la simple, cada nodo contiene un único enlace que apunta hacia el siguiente nodo, mientras que en la lista enlazada doblemente enlazada cada nodo contiene dos enlaces, de los cuales uno apunta hacia el siguiente nodo y el otro apunta hacia el anterior.

**18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?**

    Para eliminar un nodo en una lista enlazada se debe ubicar el nodo anterior a este, el puntero de este nodo anterior ahora debe apuntar al nodo que le sigue al que se desea eliminar, de forma que se "salta" el nodo a eliminar. Finalmente se libera la memoria ocupada por el nodo que se desea eliminar.

**19. Explica cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.**

El algoritmo de recorrido traversal en un árbol binario se puede realizar de tres formas distintas:

`orden`

    Consiste en recorrer el árbol binario pasando primero por todos los nodos de la izquierda, luego el nodo raíz y luego los nodos del lado derecho.

`pre-orden`

    De esta forma se recorre el árbol binario primero por el nodo raíz, luego todos los nodos de la izquierda y finalmente los nodos de la derecha.

`post-orden`

    Se recorre el árbol binario pasando primero por todos los nodos del lado izquierdo, luego todos los del lado derecho y finalmente el nodo raíz.

**20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado?**

    Debido a que en un árbol binario, cada nodo se recorre una única vez sin importar el tipo de recorrido, cada uno de estos posee una complejidad de O(n) en un árbol balanceado. 

**21. Explique la diferencia entre la notación Big O (O) y la notación Omega (Ω) en el análisis de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.**

    La notación Big O describe la complejidad de un algoritmo en el peor de los casos, de forma que el algoritmo no crecerá más que la función que se denota dentro de la Big O, mientras que la notación omega describe el mejor de los casos, es decir, que el algoritmo crecerá más rapido que la funcion que se denota dentro de Omega().
    Por ejemplo, sea el algoritmo de hash table, de forma que en el peor de los casos se tendra que la tabla hash utiliza encadenamiento para la resolucion de colisiones, por lo que se tendría una complejidad temporal de O(n), mientras que en el mejor de los casos se distribuye uniformemente los elementos, por lo que se tendría una complejidad temporal de Ω(1)
