#ifndef QUSHIFTARR_H
#define QUSHIFTARR_H


class QuShiftArr
{
     int *arr;
    int size;
    int front,rar;

public:
    QuShiftArr()
    {
      arr = new int [size];
      this->size = size;
      front=rar=0;
    }
    int EnqueArr (int data)
    {
        if (IsFull())
            return 0;

        if (isEmpty())
            front++;

       arr[rar]=data;
       rar++;
       return 1;

    }
    int DequeArr ( int & data)
    {
        if (isEmpty())
            return 0;
//        if(front== rar)
//        {
//            front=rar=-1;
//        }
           data=arr[front];
            Shift();
            rar--;
       return 1 ;
    }

private:
    void Shift ()
    {
        int last = arr[size - 1];
        for (int i = size - 1; i > 0; i--)
        arr[i] = arr[i + 1];
        arr[0] = last;
    }

    int IsFull()
    {
        return front ==-1;
    }

    int isEmpty()
    {
        return front ==-1;
    }
};

#endif // QUSHIFTARR_H
