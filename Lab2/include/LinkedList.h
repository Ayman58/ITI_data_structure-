#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
//    Node *head, *tail;
public:
    Node *head, *tail;
    LinkedList()
    {
        head = tail = NULL;
    }

    void Add(int data)
    {
        Node *node = new Node(data);

        if(head == NULL)
        {
            head = tail = node;
        }
        else
        {
            tail->Next = node;
            node->Prev = tail;
            tail = node;
        }
    }

    void SortAdd(int data )
    {
        Node *node = new Node(data);
        Node * current = tail ;
        while ( current->Prev != NULL)
        {
            if (current->Data < node->Data)
            {
                if (current != tail)
                {
                    node->Next=current->Next;
                    node->Prev=current->prev;

                    current->next->Prev=node;
                    current->Next=node;
                }
                tail=node;
            }
        }
    }
    void Display()
    {
        Node *current = head;

        while(current != NULL)
        {
            cout << current->Data << "\t";
            current = current->Next;
        }
    }

    int Remove(int data)
    {
        Node *node = GetNodeByData(data);

        if(node == NULL)
            return 0;

        if(node == head)
        {
            if(node == tail)
                head = tail = NULL;
            else
            {
                head = head->Next;
                head->Prev = NULL;
            }
        }
        else if(node == tail)
        {
            tail = tail->Prev;
            tail->Next = NULL;
        }
        else
        {
            node->Prev->Next = node->Next;
            node->Next->Prev = node->Prev;
        }

        delete node;
        return 1;
    }

    int Search(int data)
    {
        Node *node = GetNodeByData(data);

        return node != NULL;
    }

    void InsertAfter(int data, int afterData)
    {
        Node *node = new Node(data);
        Node *prevNode = GetNodeByData(afterData);

        if(prevNode->Next != NULL)
        {
            node->Prev=prevNode;
            node->Next=prevNode->Next ;

            prevNode->Next->Prev= node;
            prevNode->Next = node;
        }
        else
        {
            node->Prev=prevNode;
            node->Next=NULL ;

            prevNode->Next = node;

            tail=node;
        }
    }


    void InsertBefore(int data, int beforeData)
    {
        Node *node = new Node(data);
        Node *NextNode = GetNodeByData(beforeData);

        if(NextNode != head)
        {
            node->Next= NextNode ;
            node->Prev= NextNode->Prev;

            NextNode->Prev->Next= node;
            NextNode->Prev = node;
        }
        else
        {
            node->Prev=NULL;
            node->Next=NextNode ;

            NextNode->Prev = node;

            head=node;
        }
    }


    int GetDataByIndex(int index)
    {
        Node *current = head;
        int size =0;
        while(current != NULL)
        {
            if (index == size)
                return current->Data;
            else
                size++;

            current = current->Next;
        }
        return -1;
//    while(current != NULL)
//    {
//        current = current->Next;
//        size+=1;
//    }
//    for (int i=0; i<size ; i++)
//    {
//        if (index == i)
//            return current2->Data;
//        current2 = current2->Next;
//    }
//    return -1;
//}
    }

    LinkedList* Reverse()
    {
        LinkedList myList1;
        Node *current = tail;
        while (current != NULL)
        {
            myList1.Add(current->Data);
            current=current->Prev;
        }

        myList1.Display();
    }
    void InPlaceRevrse();

protected:

private:

    Node* GetNodeByData(int data)
    {
        Node *current = head;

        while(current != NULL)
        {
            if(data == current->Data)
                return current;

            current = current->Next;
        }

        return NULL;
    }
};

#endif // LINKEDLIST_H
