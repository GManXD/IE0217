// Programa que imprime las especificaciones de 2 libros
#include <iostream>
#include <cstring>
using namespace std;

struct  Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Books Book1;  // Creando el libro1
    struct Books Book2;  // Creando el libro2
    //Libro 1
    strcpy(Book1.title, "Learn C++ Programming");  //Titulo
    strcpy(Book1.author, "Chand Miyan");            // Autor
    strcpy(Book1.subject, "C++ Programming");       // Materia
    Book1.book_id = 6495407;                        // ID
    //Libro 2
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    //Imprimir las información de cada libro
    // Libro1
    cout << "Book1 title: " << Book1.title << endl;
    cout << "Book1 author: " << Book1.author << endl;
    cout << "Book1 subject: " << Book1.subject << endl;
    cout << "Book1 id: " << Book1.book_id << endl;
    // Libro2
    cout << "Book2 title: " << Book2.title << endl;
    cout << "Book2 author: " << Book2.author << endl;
    cout << "Book2 subject: " << Book2.subject << endl;
    cout << "Book2 id: " << Book2.book_id << endl;

    return 0;
}