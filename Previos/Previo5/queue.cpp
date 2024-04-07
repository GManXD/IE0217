// Implementacion del queue

#include <iostream>
#define SIZE 5

using namespace std;

class Queue{
    private:  // Acceso privado
        int items[SIZE], front, rear;
    
    public:
        Queue() {  // Constructor
            front = -1;
            rear = -1;
        }
        bool isFull(){
            // Verifica si está lleno
            if (front == 0 && rear == SIZE -1){
                return true;
            }
            return false;
        }

        bool isEmpty(){
            // Verifica si está vacio
            if (front == -1)
                return true;
            else
                return false;
        }

        void enQueue(int element){
            // Añade un elemento
            if (isFull()){
                cout << "Queue is full";
            }
            else{
                if (front == -1) front = 0;
                rear++;
                items[rear] = element;
                cout << endl
                     << "Inserted " << element << endl;
            }
        }

        int deQueue(){
            // Elimina el primer elemento
            int element;
            if (isEmpty()){  // Caso que esté vacio
                cout << "Queue is empty" << endl;
                return -1;

            }
            else{
                element = items[front];
                if (front >= rear){  // Caso que sea el último elemento
                    front = -1;
                    rear = -1;
                }
                else{
                    front++;
                }
                cout << endl
                    << "Deleted -> " << element << endl;
                return (element);
            }
        }
        void display(){
            // Muestra el queue
            int i; 
            if (isEmpty()){  // Caso vacio
                cout << endl
                    << "Empty Queue" << endl;
            }
            else{
                cout << endl
                    << "Front index-> " << front;
                cout << endl
                    << "Items -> ";
                for (i = front; i <= rear; i++)
                    cout << items[i] << " ";
                cout << endl
                    << "Rear Index-> " << rear << endl;
            }
        }
};

int main(){
    Queue q;
    // deQueue no sirve si queue está vacio
    q.deQueue();
    // Añadir 5 elementos
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    // No se puede añadir el sexto elemento porque queue esta lleno
    q.enQueue(6);
    // Mostrar
    q.display();
    // Remover el primer elemento
    q.deQueue();
    // Ahora solo hay 4 elementos
    q.display();

    return 0;
}