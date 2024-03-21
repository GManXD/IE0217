# Instrucciones para compilar

_Caso archivos "sum.cpp" y "encabezados.cpp":_

El archivo "encabezados.cpp" utiliza al archivo "sum.cpp" que este a la vez tiene un archivo encabezado el cual es "sum.hpp". Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Previos\Previo3\": **g++ -o archivo.exe .\encabezados.cpp ./sum.cpp** . Es decir, se debem compilar ambos archivos para que funcione el programa debido a que encabezados.cpp utiliza a sum.cpp

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: **./archivo.exe**

**Nota: el archivo "sum.hpp" NO SE DEBE COMPILAR**


_Demás archivos:_

Para compilar los demás archivos se sigue la siguiente estructura: **g++ -o archivo.exe  ./(nombre_archivo)**

El nombre del archivo que se desea compilar debe ir en lugar de (nombre_archivo), por ejemplo, para compilar el archivo "seasons.cpp" se hace de la siguiente manera: **g++ -o archivo.exe ./seasons.cpp**

Y seguidamente se debe ejecutar el ejecutable de la siguiente forma : **.\archivo.exe**