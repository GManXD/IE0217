# Instrucciones de ejecución
El programa agarra un archivo "input.txt" ubicada en "Laboratorios/Laboratorio7/data" y busca todas las palabras que contengan "foo" y crea un archivo "output.txt" en el que se remplaza las palabras "foo" por "bar"
Para compilar el programa se debe ejecutar el siguiente comando en la ubicacion donde se encuentra el directorio "Laboratorios\Laboratorio7": 

```bash
  mingw32-make all
```

Es decir, se deben compilar el archivo .cpp para que funcione el programa debido a que main.cpp utiliza a este otro archivo.

Y para ejecutar el programa se ejecuta de la siguiente manera en la misma ubicacion donde se compiló: 
```bash
  ./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"
```

Si desea limpiar los archivos binarios debe ejecutar:

```bash
  mingw32-make all
```