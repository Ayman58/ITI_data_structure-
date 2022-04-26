#include <iostream>

#include"circularArr.h"

using namespace std;

int main()
{
//   Stack stk;
//   stk.Push(3);
//   stk.Push(5);
// int num;
//cout<< stk.pop();

//QueueList q;
//q.EnueList(1);
//q.EnueList(4);
//q.EnueList(6);
//q.EnueList(8);
//cout<< q.DequeList();

//QuShiftArr Arr;
//Arr.EnqueArr(2);
//Arr.EnqueArr(6);
//Arr.EnqueArr(8);
//int d;
// Arr.DequeArr(d);
//cout<<d;

    circularArr q(5);

    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);

    //q.displayQueue();

    return 0;
}
