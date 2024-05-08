# Instrucciones de ejecución
El archivo "main.cpp" utiliza al archivo ".cpp", que este a la vez tiene un archivo encabezado el cual es ".hpp". Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Tareas\Tarea3\src\": 

```bash
  g++ -o archivo.exe .\main.cpp
```

Es decir, se deben compilar ambos archivos para que funcione el programa debido a que main.cpp utiliza a matriz.cpp

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: 
```bash
  ./archivo.exe
```

**Nota: el archivo "matriz.hpp" NO SE DEBE COMPILAR**

# Parte Teórica

**1. Definición de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple.**

    Los templates nos permiten utilizar una funcion o clase con distintos tipos de datos sin tener que realizar una funcion o clase distinta para cada tipo de dato, de forma que se puede reciclar código.

Por ejemplo:

    template <typename T>
    T suma(T a, T b) 
        return a + b;
Esta plantilla de función permite sumar 2 datos del mismo tipo sin importar el tipo de dato.

**2. Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?**

    La sobrecarga de funciones con plantillas consiste en crear 1 o más funciones, ya sea de plantilla o no, con el mismo nombre que el de plantilla, de forma que estos reciben un conjunto de parámetros distinto. Estas funciones pueden contener instrucciones distintas.
    Esto con el objetivo de "especializar" una función para cuando se le ingrese un conjunto de datos en específico.


**3. Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C++.**

    Para utilizar una plantilla en la definición de clases, se debe colocar el indicador de plantilla (template <typename T>) una linea de código antes de definir la clase. Dentro de esta clase ahora se puede utilizar el tipo de dato T de la plantilla para metodos o atributos.

**4. Manejo de Excepciones: Describa los bloques try, catch y throw y cómo se utilizan para el manejo de excepciones en C++.**

    En el manejo de excepciones, se utiliza el bloque try{} para ejecutar código que podría generar alguna excepción, la cual puede ser capturada en el bloque catch{} para así manejarla. Se pueden tener múltiples bloques catch{} para distintos tipos de excepciones.
    El bloque throw{} sirve para lanzar una excepción manualmente, la cúal puede ser manejada en algún bloque catch{}.

**5. Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles.**

`std::out_of_range`

    Esta excepción es útil por ejemplo cuando se intenta acceder a un elemento que se encuentra fuera del rango válido de algún vector.

`std::bad_alloc`
    
    Se utiliza para indicar un error en la asignación de memoria dinámica, es útil por ejemplo cuando se intenta asignar más memoria de la disponible.

`std::invalid_argument`

    Es útil para manejar situaciones en las que se ingresa un argumento invalido.

**6. Política de Manejo de Excepciones: ¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software?**

    Una política de manejo de excepciones es un cojunto de reglas que dictan de qué maneja se debe realizar el manejo de excepciones, estas son importantes a considerar al diseñar un software debido a que evita comportamientos inesperados y mejora la experiencia del usuario al utilizar un software, además, evita que el programa se bloquee.

**7.  Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.**

    La palabra clave noexcept se utiliza colocandola despues de definir una función y sirve para especificar que una función no lanza excepciones.

**8. Explique la diferencia entre las excepciones std::logic error y std::runtime error.**

    La excepción de logic error se debe especificamente por un error en la lógica del programa y se da antes o durante la compilación, mientras que runtime error se da cuando ocurre algún error durante la ejecución del programa.

**9. Explique qué ocurre cuando una excepción no es capturada.**

    Cuando una excepción no es capturada, se llama a la función std::terminate() que finaliza el programa de manera abrupta. También puede tener otros efectos como el bloqueo del programa o la interrupción de un servicio.

**10.  Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.**

`std::vector`

    Es un contenedor que almacena elementos en un arreglo continuo y sería apropiado usarlo cuando se necesite un rapido acceso y no sea necesario eliminar o insertar elementos que se encuentren en la parte media del contenedor, este es de acceso aleatorio.

`std::list`

    Es un contenedor que almacena elementos en una lista doblemente enlazada, es apropiado usar este contenedor cuando se necesite insertar y eliminar facilmente cualquier elemento en cualquier posición.

`std::stack`

    Este almacena sus elementos siguiendo el principio de Last-in First-out, de modo que es apropiado utilizarlo cuando se ocupe insertar un elemento en la parte superior del contenedor o obtener o eliminar un elemento de la parte superior, es decir, eliminar el ultimo elemento agregado.

`std::map`

    Este contenedor almacena sus elementos con una clave y un valor, de forma que es útil cuando se necesite acceder a un elemento en específico utilizando una clave única. Además, este contenedor no es de tamaño variable, por lo que se necesita especificar su tamaño cuando se crea, sin embargo, se le pueden insertar y eliminar elementos.

`std::set`

    Este contenedor mantiene un tamaño fijo y almacena sus elementos de forma ordenada mediante algún tipo de comparador, es apropiado utilizarlo cuando se necesite almacenar una cantidad fija de datos en un orden en específico.

**11.  Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.**

    Los iteradores son objetos que nos permiten un facil acceso a los elementos en contenedores, estos representan una posición de un elemento y actuan como punteros hacia dicho elemento. Los iteradores se pueden utilizar de la siguiente forma:  
    El iterador se declara por alguna funcion que retorne un iterador apuntando hacia algun elemento, luego la condición lógica que indica cuando parar de iterar, y por último aumentar el iterador. En este caso se utilizó un contenedor tipo vector pero puede ser de otro tipo :

```bash
  for(iterador = vector.begin(); iterador != vector.end(); ++iterador) {
    // Codigo
  }
```


**12.  Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.**

`Algoritmos de busqueda. find(): Este algoritmo busca la primera ocurrencia de un elemento en un rango y devuelve un iterador que apunta a este, si no se encontró entonces retorna end(). Por ejemplo:`

```bash
    std::vector<int> vec = {5, 2, 8, 1, 6};
    auto iterador = std::find(vec.begin(), vec.end(), 8);  // Busca el elemento "8" en el rango del vector
```

`Algoritmos de ordenamiento. sort(): Este algoritmo ordena los elementos de algun contenedor en forma ascendente. Por ejemplo:`

```bash
    std::vector<int> vec = {9, 5, 7, 2, 4, 1, 8, 3, 6};
    std::sort(vec.begin(), vec.end());  // Ordena de menor a mayor el vector
```

`Algoritmos de manipulación de rangos. copy(): Este algoritmo copia los elementos de un contenedor en un rango hacia otro. Por ejemplo:`

```bash
    std::vector<int> vec = {9, 5, 7, 2, 4, 1, 8, 3, 6};
    std::vector<int> vecOrdenado(vec.size());
    std::copy(vec.begin(), vec.end(), vecOrdenado.begin());  // Copia los elementos en el rango del vector vec hacia el rango del vecOrdenado
```

**13. Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?**

    Se puede personalizar un algoritmo utilizando la STL de forma que adapto dicho algoritmo para abarcar una funcionalidad diferente, por ejemplo para ordenar un contenededor con un criterio que no cubre el estandar de la STL, de forma que se puede crear otro algoritmo proporcionando una función de comparación distinta.

**Nota: C++ utiliza el snake_case para nombrar constantes, mientras que para el resto se utiliza el CamelCase. Para los atributos de una clase se utiliza un prefijo que comúnmente es la inicial del nombre de la clase seguido de un guión bajo y el nombre del atributo en formato CamelCase**