#include<iostream>
#include<vector>
using namespace std;

const int size = 100;

template <class Q>
class Queue{
private:
    vector<Q> array;
    int length;
    int front;
    int rear;
    int count;
public:
    Queue(){length=size;array.resize(length);front=0;rear=-1;count=0;}
    Queue(int lgth){
    array.resize(lgth);length=lgth;front=0;rear=-1;count=0;}
    void push(Q item){
    if(isFull()) cout<<"Queue full\n";
    else{rear++;array[rear]=item;count++;}}
    Q peek(int index){
        if(isEmpty())cout<<"Queue is empty!\n";
        else return array[index];
    }
    Q pop(){
    if(isEmpty())cout<<"Queue is empty!\n";
    else{return array[front];front++;count--;}}
    int size(){return count;}
    bool isEmpty(){return (count == 0);}
    bool isFull(){return (count == length);}
};