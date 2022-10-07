#include"queue.h"

template<typename Q>
Queue<Q>::Queue(int lgth){
    array=new Q [lgth];
    length=lgth;
    front=0;
    rear=0;
    count=0;
}

template<typename Q>
Queue<Q>::~Queue(){
    delete[] array;
}

template<typename Q>
int Queue<Q>::length(){return count;}

template<typename Q>
void Queue<Q>::push(Q item){
    if(isFull()) cout<<"Queue full\n";
    else{rear++;*(array+rear)=item;count++;}
}

template<typename Q>
Q Queue<Q>::pop(){

}

template<typename Q>
bool Queue<Q>::isEmpty(){
    return (count == 0);
}

template<typename Q>
bool Queue<Q>::isFull(){
    return (count == capacity);
}