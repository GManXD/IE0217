# Instrucciones para compilar

_Caso archivos "main.cpp" y "persona.cpp":_

El archivo "main.cpp" utiliza al archivo "persona.cpp" que este a la vez tiene un archivo encabezado el cual es "persona.hpp". Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Previos\Previo4\": **g++ -o archivo.exe .\main.cpp ./persona.cpp** . Es decir, se deben compilar ambos archivos para que funcione el programa debido a que main.cpp utiliza a persona.cpp

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: **./archivo.exe**

**Nota: el archivo "persona.hpp" NO SE DEBE COMPILAR**


_Demás archivos:_

Para compilar los demás archivos se sigue la siguiente estructura: **g++ -o archivo.exe  ./(nombre_archivo)**

El nombre del archivo que se desea compilar debe ir en lugar de (nombre_archivo), por ejemplo, para compilar el archivo "herencia.cpp" se hace de la siguiente manera: **g++ -o archivo.exe ./herencia.cpp**

Y seguidamente se debe ejecutar el ejecutable de la siguiente forma : **.\archivo.exe**