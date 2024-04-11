# Instrucciones de ejecución
El archivo "principal.cpp" utiliza el archivo "libro.cpp" que este a su vez tiene un archivo encabezado con la extension ".hpp", es decir "libro.hpp". Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Laboratorios\Laboratorio3": 

```bash
  g++ -o archivo.exe .\principal.cpp .\libro.cpp
```

Es decir, se deben compilar el archivo .cpp para que funcione el programa debido a que principal.cpp utiliza a este otros archivo.

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: 
```bash
  ./archivo.exe
```

**Nota: los archivos con extensión ".hpp" NO SE DEBEN COMPILAR**
