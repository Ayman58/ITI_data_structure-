#include <iostream>

#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList myList;
//    myList.Add(5);
//    myList.Add(3);
//    myList.Add(2);
//    myList.Add(6);
//    myList.Add(4);
//    myList.Add(1);
//    myList.BubbleSort(myList);
//    myList.Display();


//    myList.Display();
//    LinkedList myList;
//
    myList.Add(1);
    myList.Add(2);
    myList.Add(3);
    myList.Add(4);
    myList.Add(5);
    cout<<myList.BinarySearch(5,myList);
//    myList.Remove(3);
//    myList.Remove(15);
//
//

    return 0;
}
