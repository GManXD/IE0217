# Parte Teórica

**1. ¿Qué es la programación orientada a objetos y cuáles son sus principales principios?**
    
    La programación orientada a objetos es un paradigma de la programación que se basa en crear y manipular objetos e interactuar con estos madiante los siguientes principales principios:

`Encapsulamiento`

    Permite ocultar los detalles internos de un objeto y mostrar únicamente lo necesario para interactuar con este, para así mantener la privacidad, seguridad e integridad de los datos.

`Herencia`

    Se refiere a la reutilización de codigo al heredar las características de otra clase, de forma que se puede establecer una jerarquía entre estos.

`Polimorfismo`

    Permite que un objeto pueda realizar distintas acciones dependiendo del contexto en el que se utilice.

`Abstraccion`

    Los objetos se representan como un modelo simplificado de la realidad en el que se crean atributos u objetos para modelar su comportamiento, esto permite identificar las características escenciales de un problema.

**2. Explique el concepto de ocultamiento de datos y cómo se logra en C++.**

    El encapsulamiento de datos es posible gracias al encapsulamiento, este se logra utilizando especificadores de acceso en una clase.

**3. ¿Cuál es la diferencia entre una clase y un objeto en C++?**

    Una clase detalla cuales van a ser las carácteristicas y propiedades de un objeto y sirve como una plantilla para crear objetos, mientras que un objeto es una instanciación de una claase.

**4. ¿Qué es el polimorfismo y cómo se logra en C++?**

    Se refiere a la capacidad de una función o metodo de comportarse de manera distinta en diferentes clases y esto se logra realizando sobreecargas de funciones o metodos que sobreescriban las instrucciones que presentan para que realicen una accion distinta. Tambíen se pueden utilizar funciones virtuales para cumplir este proposito.

**5. ¿Qué significa el término encapsulamiento en el contexto de la OOP?**

    Permite ocultar los detalles internos de un objeto y mostrar únicamente lo necesario para interactuar con este, para así mantener la privacidad, seguridad e integridad de los datos.

**6. ¿Cuál es el propósito del constructor y el destructor en una clase de C++?**

    El constructor es un metodo especial que se ejecuta al instanciar un objeto, este permite que el objeto se encuentre en un estado valido para su uso y también puede proporcionar información adicional del objeto mediante el uso de parámetros. El destructor es otro metodo especial que se ejecuta cuando el uso del objeto ya no es requerido, el proposito del destructor es terminar o cerrar los procesos que utilizaba el objeto.

**7. ¿Investigue cómo se define una clase abstracta en C++ y cuál es su función?**

    Una clase abstracta presenta minimo una función virtual pura, esto obliga a las clases derivadas a definir está función dentro de ellas. Esto sirve para especificar que una función deba ser implementada obligatoriamente en las clases derivadas según las necesidades de cada clase. 

**8. ¿Investigue qué es un constructor de copia y para qué se utiliza en C++?**

    El constructor de copia es un constructor diferente al constructor tradicional que se implementa para realizar una copia de otro objeto y sus atributos o controlar de qué forma queremos copiar estos. Si no se especifica un constructor de copia, el compilador generará uno por defecto 

**9. ¿Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian?**

    El polimorfismo estático se refiere a sobrecargar una función de una clase para que realice tareas distintas dependiendo del conjunto de parametros que se le brinden, mientras que el polimorfismo estático se da cuando se utiliza una función virtual en una clase para que sus derivadas tengan sobreescribirla si desean utilizar el metodo. Se diferencian en que el polimorfismo estático se da mediante la sobrecarga de funciones, mientras que el dinámico se da en clases derivadas por medio de funciones virtuales.

**10. ¿Qué son las clases anidadas y cuál es su utilidad en C++?**

    Las clases anidads son clases que se definen dentro de otra clase, de forma que se pueden controlar mejor los datos que se desean ocultar, ya que ambas clases pueden acceder a cualquier miembro o clase de la otra.

**11. En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden utilizar los punteros para trabajar con objetos y clases? Explique también por qué los punteros a objetos son útiles en la programación orientada a objetos.**

    Para utilizar punteros para trabajar con clases y objetos se puede crear objetos de forma dinámica o utilizar un puntero que apunte hacia un objeto. Esto es útil ya que con los punteros podemos a acceder a los atributos de una clase o a sus metodos sin tener que utilizar el objeto o una copia del mismo, evitando la copia innecesaria de datos. 

**12. ¿Qué es una función prototipo?**

    Una función prototipo es una declaración de una función, en la que se especifica su conjunto de parametros y el tipo de valor que retorna, sin implementar las instrucciones que esta conlleva. Se utiliza para informar al compilador sobre la existencia de dicha función. 

**13. ¿Explique los diferentes tipos de miembros que existen en la OOP?**

`Atributos`

    Son variables que almacenan información acerca del objeto en en una clase

`Metodos`

    Son funciones que se encuentran dentro de una clase y representan el comportamiento del objeto

`Constructores`

    El constructor es un metodo especial que se ejecuta al instanciar un objeto, este permite que el objeto se encuentre en un estado valido para su uso y también puede proporcionar información adicional del objeto mediante el uso de parámetros

`Destructores`

    El destructor es otro metodo especial que se ejecuta cuando el uso del objeto ya no es requerido, el proposito del destructor es terminar o cerrar los procesos que utilizaba el objeto.

`Funciones amigas`

    Son funciones externas a una clase pero que poseen acceso a los miembros de la clase a la cual son amigas. Deben ser declaradas como funciones amigas dentro de la misma clase.

`Clases anidadas`

    Las clases anidads son clases que se definen dentro de otra clase, de forma que se pueden controlar mejor los datos que se desean ocultar, ya que ambas clases pueden acceder a cualquier miembro o clase de la otra.

**14. ¿Qué es un memory leak?**

    Un memory leak ocurre cuando se asigna memoria dinámica, pero esta no se libera cuando ya no se necesita, causando así una fuga de memoria que afecta el rendimiento y la estabilidad del programa.

**15. ¿Qué es y cuál es la importancia de la Herencia multinivel, múltiple y jerárquica de C+?**

 `Herencia multinivel`

    Se da cuando una clase deriva de otra clase que a su vez deriva de otra clase base, de forma que la última clase adquiere los miembros de las clases que le preceden en la cadena multinivel. Esto permite la reutilización de código y facilita el polimorfismo para las clases.

`Herencia múltiple`

    Se refiere a cuando una clase deriva de multiples clases base, adquiriendo así los miembros de todas las clases de las que deriva. Esto permite reutilizar código y combinar las funcionalidades de varias clases.

`Herencia jerárquica`

    La herencia jerárquica se da cuando varias clases derivan de una misma clase base formando una jerarquía de clases donde las clases derivadas heredan de las clases superiores. Esto permite mantener una organización de clases en las que se combinan funcionalidades de distintas clases, reutilizando código y evitando redundancias.

**16. ¿Qué es la composición y cómo se implementa en C++?**

    La composición se refiere a cuando dentro de una clase se utiliza otra clase, de forma que ambas clases se definen por separado pero una de ellas contiene dentro de su estructura un objeto de la otra clase.

**17. ¿Qué es la sobreescritura de funciones en C++ y cuando es bueno usarla?**

    La sobreescritura de funciones ocurre cuando en una clase derivada, definimos un metodo con el mismo nombre que se usó en la clase base. De forma que al llamar a esta función se utilizará el metodo que se definió en la clase del objeto y no el de la clase base.
    Es bueno usar la sobreescritura de funciones cuando se necesite de proporcionar un comportamiento específico para una clase derivada, de forma que es necesario modificar algún metodo de la clase base.

**18. ¿Qué es un método y un atributo y cuál es la diferencia entre ellos?**

    Los metodos se refiere al conjunto de funciones que se definen dentro de una clase y estas pueden ser usadas por un objeto de la clase, mientra que los atributos son las propiedades y características que definen a un objeto, estos pueden ser asignados al momento de crear la clase o posterior.

**19. ¿Qué es el constructor y el destructor en una clase?**

    El constructor es un metodo especial que se ejecuta al instanciar un objeto, este permite que el objeto se encuentre en un estado valido para su uso y también puede proporcionar información adicional del objeto mediante el uso de parámetros. El destructor es otro metodo especial que se ejecuta cuando el uso del objeto ya no es requerido, el proposito del destructor es terminar o cerrar los procesos que utilizaba el objeto.

**20. ¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?**

    La sobrecarga de operadores permite definir el comportamiento de un operador al interactuar con objetos de una clase en específico. 
    Para implementar la sobrecarga de operadores se realiza de la siguiente manera:

```bash
  // Se define una clase
  class Glucosa {
    Glucosa(// Definir el constructor)

    Glucosa operator+ (const Glucosa &g){
        resultado = "Maltosa";
        return resultado;
    }
  }

  int main(){
    Glucosa g1, g2;
    resultado = g1 + g2;
    std::cout << resultado << endl;     // Se deberia obserar "Maltosa"

    return 0;
  }

```

**Nota: C++ utiliza el snake_case para nombrar constantes, para el resto se utiliza el CamelCase, para los atributos de una clase se utiliza un prefijo que comúnmente es la inicial del nombre de la clase seguido de un guión bajo y el nombre del atributo en formato CamelCase**