#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
    Node *head, *tail;
public:
    LinkedList()
    {
        head = tail = NULL;
    }

    int BinarySearch(int data, LinkedList myList)
    {
        int index=1;
        Node *current;
        current = head ;
        while(current!=tail)
        {
            index++;
            current=current->Next;
        }
        int minIndex=0, maxIndex=index, midIndex;

        while(minIndex <= maxIndex)
        {
            midIndex = (minIndex + maxIndex) / 2;
            int currentData=GetDataByIndex(midIndex);
            if(data ==currentData )
                return midIndex;

            if(data > currentData)
            {
                minIndex = midIndex + 1;
            }
            else
            {
                maxIndex = midIndex - 1;
            }
        }

        return -1;
    }

    void Swap(int &first, int &second)
    {
        int temp = first;
        first = second;
        second = temp;
    }

    void BubbleSort(LinkedList myList)
    {
        int index=1;
        for (int i=0; i<index; i++)
        {
            Node *current;
            current = head ;
            while (current!=tail)
            {
                if(current->Data >current->Next->Data)
                {
                    Swap (current->Data,current->Next->Data);
                }
                current =current->Next;
                index+=1;
            }
        }

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
    }


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
