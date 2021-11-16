#include <bits/stdc++.h>
using namespace std;

class MyPriorityQueue
{
public:
    int *arr;
    int size;
    int capacity;

    MyPriorityQueue(int capacity = 10004)
    {
        this->capacity = capacity;
        this->size = 0;
        arr = new int[capacity + 1];
    }

    bool isEmpty()
    {
        return size < 1;
    }

    int top()
    {
        if (size < 1)
        {
            cout << "Underflow";
            return INT_MIN;
        }
        return arr[1];
    }

    void heapify(int i)
    {
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = i;
        if (left <= size && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right <= size && arr[right] > arr[largest])
        {
            largest = right;
        }
        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            heapify(largest);
        }
    }

    void push(int x)
    {
        size++;
        if (size > capacity)
        {
            size--;
            cout << "Overflow" << endl;
            return;
        }
        arr[size] = x;
        int index = size;
        int parent = index / 2;
        while (arr[parent] < arr[index] && index > 1)
        {
            swap(arr[parent], arr[index]);
            index = parent;
            parent = index / 2;
        }
    }

    int pop()
    {
        if (size < 1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        int x = arr[1];
        arr[1] = arr[size];
        size--;
        heapify(1);
        return x;
    }
};

int main()
{
    MyPriorityQueue pq;
    pq.push(10);
    pq.push(13);
    pq.push(7);
    pq.push(1);
    pq.push(15);
    pq.push(11);
    pq.push(20);
    pq.pop();
    pq.push(3);
    while (!pq.isEmpty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    pq.pop();
}