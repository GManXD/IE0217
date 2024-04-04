# Instrucciones de ejecución
El archivo "main.cpp" utiliza los archivos "Empleado.cpp", "EmpleadoAsalariado.cpp" y "EmpleadoPorHoras.cpp" que ests a la vez tienen un archivo encabezado con la extension ".hpp". Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Laboratorios\Laboratorio2": 

```bash
  g++ -o archivo.exe .\main.cpp .\Empleado.cpp .\EmpleadoAsalariado.cpp .\EmpleadoPorHoras.cpp
```

Es decir, se deben compilar los archivos .cpp para que funcione el programa debido a que main.cpp utiliza a estos otros archivos.

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: 
```bash
  ./archivo.exe
```

**Nota: los archivos con extensión ".hpp" NO SE DEBEN COMPILAR**
