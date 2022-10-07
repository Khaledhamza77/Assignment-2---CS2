#include"queue.h"

template<typename Q>
Queue<Q>::Queue(int lgth){
    array=new Q [lgth];length=lgth;
    front=0;rear=-1;count=0;}
template<typename Q>
Queue<Q>::~Queue(){delete[] array;}
template<typename Q>
int Queue<Q>::size(){return count;}
template<typename Q>
void Queue<Q>::push(Q item){
    if(isFull()) cout<<"Queue full\n";
    else{rear++;*(array+rear)=item;count++;}}
template<typename Q>
Q Queue<Q>::pop(){
    if(isEmpty())cout<<"Queue is empty!\n";
    else{return *(array+front);front++;count--;}}
template<typename Q>
bool Queue<Q>::isEmpty(){return (count == 0);}
template<typename Q>
bool Queue<Q>::isFull(){return (count == capacity);}