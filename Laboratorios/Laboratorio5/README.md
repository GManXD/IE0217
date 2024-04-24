# Instrucciones de ejecución
El archivo "main.cpp" utiliza el archivo "biblioteca.cpp" que este a su vez tiene un archivo encabezado con la extension ".hpp", es decir "libro.hpp". Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Laboratorios\Laboratorio5": 

```bash
  g++ -o archivo.exe .\main.cpp .\biblioteca.cpp
```

Es decir, se deben compilar el archivo .cpp para que funcione el programa debido a que main.cpp utiliza a este otro archivo.

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: 
```bash
  ./archivo.exe
```

**Nota: los archivos con extensión ".hpp" NO SE DEBEN COMPILAR**
