#include<iostream>
using namespace std;

template <typename Q>

class Queue{
private:
    Q* array;
    int length;
    int front;
    int rear;
    int count;
public:
    Queue(int size);
    ~Queue();
    void push(Q item);
    Q pop();
    int size();
    bool isEmpty();
    bool isFull();
};