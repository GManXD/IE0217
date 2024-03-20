# Instrucciones para compilar

_Caso archivos "scope1.cpp" y "scope2.cpp":_

El archivo "scope1.cpp" utiliza al archivo "scope2.cpp" y para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Previos\Previo2\": **g++ -o archivo.exe .\scope1.cpp** 

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: **./archivo.exe**

**Nota: el archivo "scope2.cpp" NO SE DEBE COMPILAR**


_Demás archivos:_

Para compilar los demás archivos se sigue la siguiente estructura: **g++ -o archivo.exe  ./(nombre_archivo)**
El nombre del archivo que se desea compilar debe ir en lugar de (nombre_archivo), por ejemplo, para compilar el archivo "variables.cpp" se hace de la siguiente manera: **g++ -o archivo.exe ./variables.cpp**. Y seguidamente se debe ejecutar el ejecutable de la siguiente forma : **.\archivo.exe**