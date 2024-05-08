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

 

**9. . Explique qué ocurre cuando una excepción no es capturada.**



**10.  Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.**



**11.  Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.**



**12.  Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.**



**13. Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?**


**Nota: C++ utiliza el snake_case para nombrar constantes, mientras que para el resto se utiliza el CamelCase. Para los atributos de una clase se utiliza un prefijo que comúnmente es la inicial del nombre de la clase seguido de un guión bajo y el nombre del atributo en formato CamelCase**