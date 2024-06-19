# Parte teórica

**1. ¿Qué es una base de datos relacional y cuáles son sus características fundamentales?**

    Una base de datos relacional es un tipo de base de datos que organiza los datos en tablas que pueden ser manipuladas utilizando el lenguaje SQL (Structured Query Language). Las características fundamentales de una base de datos relacional son:

``Los datos se aseguran mediante restricciones como claves primarias, claves foráneas, y restricciones únicas, permitiendo así una mejor integridad de datos.``

``Las tablas pueden relacionarse entre sí mediante claves foráneas, permitiendo consultas complejas y operaciones en datos relacionados.``

``Posee un soporte para transacciones, que son un conjunto de operaciones que se ejecutan como una unidad.``

``Permite el uso de SQL para consultar y manipular los datos.``

**2. ¿Cuál es la diferencia entre una clave primaria y una clave candidata en una base de datos relacional?**

    La clave primaria ss un campo que identifica de manera única cada registro en una tabla. Una tabla puede tener solo una clave primaria, mientras que una clave candidata corresponde a aquellos campos que tienen el potencial de ser clave primaria, ya que también identifican de manera única los registros. Una tabla puede tener múltiples claves candidatas, pero solo una de ellas puede ser designada como clave primaria

**3. ¿Qué son las claves foráneas y cómo se utilizan para mantener la integridad referencial en una base de datos?**

    Son campos en una tabla que se refieren a la clave primaria de otra tabla. Se utilizan para establecer y reforzar la integridad referencial, que asegura que las relaciones entre tablas permanecen consistentes, la integridad referencial asegura que cualquier valor de una clave foránea en una tabla debe coincidir con un valor de la clave primaria en la tabla referenciada.

**4. ¿Qué es una transacción en el contexto de bases de datos y cuáles son las propiedades ACID que debe cumplir?**

    Una transacción es una secuencia de operaciones realizadas como una unidad única de trabajo, que se debe completar en su totalidad para mantener la coherencia de la base de datos.Las propiedades ACID que debe cumplir son:

``Atomicidad``: La transacción se ejecuta completamente o no se ejecuta en absoluto.  
``Consistencia``: La transacción lleva la base de datos de un estado válido a otro estado válido.  
``Aislamiento``: Las transacciones concurrentes no deben interferir entre sí.  
``Durabilidad``: Una vez que una transacción se ha confirmado, sus cambios son permanentes.  
  
**5. ¿Qué son las vistas (views) en SQL y cuáles son los beneficios y limitaciones de su uso?**

    Una vista en SQL es una consulta guardadas que puede ser tratada como una tabla virtual. Los beneficios y limitaciones incluyen:

``Beneficios``:  

    Simplifican consultas complejas.  
    Mejoran la seguridad al limitar el acceso a datos sensibles.
    Presentación de datos personalizados para diferentes usuarios.  

``Limitaciones``:  

    Pueden afectar el rendimiento si son demasiado complejas.  
    No siempre se pueden actualizar directamente.  


**6. ¿Qué es la normalización en bases de datos y cuáles son las diferentes formas normales (normal forms)?**

    La normalización es el proceso de organizar los datos en una base de datos para reducir la redundancia y mejorar la integridad de los datos. Las diferentes formas normales son:


``Primera Forma Normal (1NF)``: Eliminar duplicación de grupos de columnas.  
``Segunda Forma Normal (2NF)``: Eliminar dependencia parcial de claves.  
``Tercera Forma Normal (3NF)``: Eliminar dependencias transitivas.  
``Forma Normal de Boyce-Codd (BCNF)``: Una versión más estricta de 3NF.  
``Cuarta Forma Normal (4NF)``: Eliminar dependencias multivaluadas.  
``Quinta Forma Normal (5NF)``: Eliminar redundancias en las relaciones.  

**7. ¿Cómo funcionan los índices en SQL y cuál es su impacto en el rendimiento de las consultas?**

    Los índices en SQL son estructuras de datos que mejoran la velocidad de las operaciones de consulta en una tabla a costa de un mayor uso de almacenamiento y tiempos de escritura. Los índices funcionan como tablas de búsqueda que los motores de base de datos utilizan para localizar rápidamente los datos. Sin embargo, puede afectar negativamente las operaciones de INSERT, UPDATE y DELETE debido a la necesidad de mantener los índices.

**8. ¿Qué es SQL Injection y cuáles son las mejores prácticas para prevenir este tipo de ataque?**

    SQL Injection es un tipo de ataque en el cual un atacante puede ejecutar código SQL arbitrario en una base de datos, comprometiendo su seguridad. Las mejores prácticas para prevenirlo incluyen:

    1. Usar sentencias preparadas: Con parámetros en lugar de concatenar cadenas.  
    2. Validar y sanitizar entradas del usuario.  
    3. Usar procedimientos almacenados.  
    4. Configurar los permisos de la base de datos adecuadamente.  
    5. Monitorear y registrar actividades sospechosas.  


**9. ¿Qué son los procedimientos almacenados (stored procedures) en SQL y cómo pueden mejorar la eficiencia y seguridad de las operaciones de base de datos?**

    Los procedimientos almacenados son conjuntos de sentencias SQL precompiladas y almacenadas en la base de datos. Pueden mejorar la eficiencia y seguridad al reducir el tráfico entre la aplicación y la base de datos y reutilizar código y al limitar el acceso directo a las tablas, encapsulando la lógica de negocio.

**10. ¿Cómo se implementan las relaciones uno a uno, uno a muchos y muchos a muchos en una base de datos relacional y qué consideraciones se deben tener en cuenta en cada caso?**

``Uno a Uno (1:1): ``

    Se implementa usando una clave primaria compartida o una clave foránea única en ambas tablas.  
    Como consideración se deberia usar restricciones UNIQUE en la clave foránea.

``Uno a muchos (1:n): ``

    Se implementa usando una clave foránea en la tabla "muchos" que referencia la clave primaria de la tabla "uno".  
    Como consideración, asegurarse de que la clave foránea en la tabla "muchos" corresponda a un registro válido en la tabla "uno"

``muchos a muchos (m:n): ``

    Se implementa mediante una tabla intermedia (tabla de unión) que contiene claves foráneas que referencian las claves primarias de las dos tablas relacionadas.
    Como consideración, asegurarse de que la tabla intermedia tenga claves foráneas y, opcionalmente, una clave primaria compuesta de las dos claves foráneas. Y considerar el impacto en el rendimiento y la complejidad de las operaciones de inserción y eliminación masivas.