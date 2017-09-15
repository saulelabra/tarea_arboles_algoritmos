#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"
#include "ArbolDosTres.h"
#include "RBT.h"

using namespace std;

int main()
{
//-------------------------------------------------------------------Probando árbol AVL-------------------------------------------------------------------------------

  cout << "Probando el árbol AVL" << endl << endl;

  BinarySearchTree<int> arbolavl;

  //se insertan elementos en el árbol

  arbolavl.insert(45);
  arbolavl.insert(100);
  arbolavl.insert(3);
  arbolavl.insert(32);
  
  cout << "insertó elementos" << endl;

  //se borran elementos del árbol

  arbolavl.remove(100);
  arbolavl.remove(45);
  
  cout << "eliminó elementos" << endl;

  //se buscan elementos
  
  cout << "busca: " << arbolavl.search(100) << endl;
  
  //imprime ascendentemente
  
  arbolavl.printInOrder();
  cout << "Imprimió en orden ascendente" << endl;
  
  //imprime descendentemente
  
  arbolavl.printPostOrder();
  cout << "Imprimió en orden descendente" << endl;
  

//------------------------------------------------------------------------------Probando Árbol 2-3----------------------------------------------------------------------

  cout << "Probando arbol 2-3" << endl;
  ArbolDosTres<int> arbol23;
  
  //se insertan elementos en el árbol

  arbol23.insertar23(45);
  arbol23.insertar23(100);
  arbol23.insertar23(3);
  arbol23.insertar23(32);
  
  cout << "insertó elementos" << endl;

  //se borran elementos del árbol

  cout << arbol23.borrar(100) << endl;
  cout << arbol23.borrar(45) << endl;
  
  cout << "eliminó elementos" << endl;

  //se buscan elementos
  
  cout << "busca: " << arbol23.buscar(100) << endl;
  
  //imprime ascendentemente
  
  arbol23.printAsc();
  cout << "Imprimió en orden ascendente" << endl;
  
  //imprime descendentemente
  
  arbol23.printDesc();
  cout << "Imprimió en orden descendente" << endl;
  

  return 0;
}
