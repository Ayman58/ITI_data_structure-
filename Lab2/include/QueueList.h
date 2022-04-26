#ifndef QUEUELIST_H
#define QUEUELIST_H


class QueueList
{

    LinkedList ls ;
    int front,rar;

public:
    QueueList()
    {
        front=rar=-1;
    }

    int EnueList (int data)
    {
        if (isEmpty())
            front++;
        rar++;
        ls.Add(data);
        return 1;

    }
    int DequeList ( )
    {
        if (isEmpty())
            return 0;
        if(front== rar)
        {
            front=rar=-1;
        }
        Node *head=ls.head ;
        int data ;
        data = (ls.head->Data);
        ls.head=ls.head->Next;
        head->Next->Prev= NULL;

        delete head;
        return data;
    }

private:
    int isEmpty()
    {
        return front ==-1;
    }
};
#endif // QUEUELIST_H
