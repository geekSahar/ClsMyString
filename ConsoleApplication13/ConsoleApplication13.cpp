// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsMyString.h"

int main()
{
    std::cout << "\n*************Undo/Redo*************\n\n";
    clsMyString S;
    cout << "\nS= " << S.getValue() << endl;
    S.setValue("A");
    cout << "\nS= " << S.getValue() << endl;
    S.setValue("B");
    cout << "\nS= " << S.getValue() << endl;
    S.setValue("C");
    cout << "\nS= " << S.getValue() << endl;
    cout << "\n\n**Undo**";
    S.Undo();
    cout << "\nS after undo S= " << S.getValue() << endl;
    S.Undo();
    cout << "\nS after undo S= " << S.getValue() << endl;
    S.Undo();
    cout << "\nS after undo S= " << S.getValue() << endl;
    
    cout << "\n\n**Redo**";
    S.Redo();
    cout << "\nS after redo S= " << S.getValue() << endl;
    S.Redo();
    cout << "\nS after redo S= " << S.getValue() << endl;
    S.Redo();
    cout << "\nS after  redo S= " << S.getValue() << endl;

  
  
}

