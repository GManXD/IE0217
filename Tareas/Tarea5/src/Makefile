#Nombre del programa de salida
TARGET = tarea5.x

#Compilador de C++
CXX = g++

#Opciones de compilación
CXXFLAGS = -Wall -std=c++11

#Lista de archivos fuente
SOURCES = main.cpp validador.cpp

#Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

#Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)


#Regla para compilar el codigo fuente
.PHONY: build
build: $(TARGET)

#Regla para correr el programa
.PHONY: run
run: $(TARGET)
	./$(TARGET)

#Regla predeterminada, compila y ejecuta
.PHONY: all
all : build run

#Regla para limpiar los archivos generados
.PHONY: clean
clean:
	del $(TARGET) $(OBJECTS)