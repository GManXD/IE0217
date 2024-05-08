# Instrucciones de ejecución
Para utilizar el programa regex.cpp se debe compilar y ejecutar en la ubicacion donde se encuentra el directorio "Previos\Previo9\"
Y ejecutar lo siguiente en terminal:
```bash
  g++ -o archivo.exe  ./regex.cpp
```

Y seguidamente se debe ejecutar el ejecutable de la siguiente forma : 

```bash
  ./archivo.exe
```

Si se desea utilizar los demás programas:  se debe ubicar en el siguiente directorio "Previos\Previo9\biblioteca" en el caso de que desee utilizar el programa de biblioteca, por otro lado, si desea utilizar el programa gestion_estudiante, se debe ubicar en el siguiente directorio: "Previos\Previo9\gestion_estudiante". De forma que para ambos casos, para compilar el programa debe ejecutar lo siguiente en terminal en la ubicacion ya mencionada:
```bash
  mingw32-make all
```
Y seguidamente se debe ejecutar el ejecutable de la siguiente forma :

En el caso de biblioteca:
```bash
  ./gestion_biblioteca.exe
```

En el caso de gestion_estudiante:
```bash
  ./gestion_estudiante.exe
```

Por ultimo, para limpiar los archivos ejecutables .exe, se debe ejecutar lo siguiente en terminal:
```bash
  mingw32-make clean
```
