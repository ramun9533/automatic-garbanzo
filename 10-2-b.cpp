 
#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> pila; // Crear una pila vacía de enteros

  // Agregar elementos a la pila usando push()
  pila.push(1);
  pila.push(2);
  pila.push(3);

  // Mostrar el tamaño de la pila
  cout << "El tamaño de la pila es: " << pila.size() << endl;

  // Acceder al elemento superior de la pila usando top()
  cout << "El elemento superior de la pila es: " << pila.top() << endl;

  // Eliminar el elemento superior de la pila usando pop()
  pila.pop();

  // Mostrar el nuevo elemento superior de la pila usando top()
  cout << "El nuevo elemento superior de la pila es: " << pila.top() << endl;

  // Agregar un nuevo elemento a la pila usando push()
  pila.push(4);

  // Mostrar el tamaño de la pila nuevamente
  cout << "El tamaño de la pila ahora es: " << pila.size() << endl;
  cout << "El elemento superior de la pila es: " << pila.top() << endl;

  return 0;
}
