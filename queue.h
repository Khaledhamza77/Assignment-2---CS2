#include<iostream>
using namespace std;

const int size = 100;

template <class Q>
class Queue{
private:
    Q* array;
    int length;
    int front;
    int rear;
    int count;
public:
    Queue(){length=size;array=new Q[length];front=0;rear=-1;count=0;}
    Queue(int lgth){
    array=new Q [lgth];length=lgth;front=0;rear=-1;count=0;}
    ~Queue(){delete[] array;}
    void push(Q item){
    if(isFull()) cout<<"Queue full\n";
    else{rear++;*(array+rear)=item;count++;}}
    Q pop(){
    if(isEmpty())cout<<"Queue is empty!\n";
    else{return *(array+front);front++;count--;}}
    int size(){return count;}
    bool isEmpty(){return (count == 0);}
    bool isFull(){return (count == length);}
};