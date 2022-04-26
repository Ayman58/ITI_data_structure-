

#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{
    LinkedList myList;

    myList.Add(3);
    myList.Add(5);
    myList.Add(7);
    myList.Add(9);
    myList.Add(11);

//    myList.Remove(3);
//    myList.Remove(15);
//    myList.InsertAfter( 6,  5);
//    myList.InsertBefore( 4,  3);
    myList.Reverse();

//    myList.Search(15);
//    myList.Display();
//    int ind =myList.GetDataByIndex(1);
//    cout<< ind<<"\t";
//    myList.InsertAfter(6, 5);

    return 0;
}
