#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include <iostream>
#include <string>
using namespace std;

//The Prototype
template<typename T>
class AbstractList{
    protected:
        unsigned int numElements;
        Node<T> *head;
    public:
        AbstractList();
        ~AbstractList();
        virtual void append(T x) = 0;
        virtual T remove() = 0;
        bool isEmpty();
};

//List Prototype
template<typename T>
class List: public AbstractList<T>{
    public:
        void append(T x);
        void append_tail(T x);
        void insert(T x, int pos);
        T remove();
        T remove_at(int pos);
        T operator [](int pos);
        void sort();
        friend ostream& operator<<(ostream& out, List<T>& list){
		    if (list.numElements==0){
			    out << "The list is empty";
		    }
            else{
                Node<T> *temp;
                T result;
                temp = list.head;
                for (int i = 0; i < list.numElements; i++){
                    result = list.head->getValue();
                    out << result << " ";
                    list.head = list.head->getNext();
                }
                list.head = temp;
                out << endl;    
            }

		    return out;
	    }
};

//The implementation
template<typename T>
bool AbstractList<T>::isEmpty(){
    if(this->numElements == 0){
        return true;
    }
    else{
        return false;
    }
}

template<typename T>
void List<T>::append(T x){
    Node<T> *n = new Node<T>(x, this->head);
    this->numElements++;
    this->head = n;
}

template<typename T>
T List<T>::remove(){
    if(this->numElements==0){
        return 0;
    }
    T x = this->head->getValue();
    this->numElements--;
    Node<T> *old = this->head;
    this->head = old->getNext();
    delete old;
    return x;
}

template<typename T>
void List<T>::append_tail(T x){
    if(this->numElements==0)
    append(x);
    else{
        Node<T> *n = new Node<T>(x, NULL);
        Node<T> *temp = this->head;
        for(int i=0; i<this->numElements-1;i++){
            this->head = this->head->getNext();
        }
        this->head->setNext(n);
        this->head = temp;
        this->numElements++;
    }
}

template<typename T>
T List<T>::remove_at(int pos){
    if(pos < 0 || pos > this->numElements - 1){
        return 0;
    }

    if(pos == 0){
        remove();
    }

    if(pos < this->numElements && pos > 1){
        Node<T> *tempb = this->head, *tempa = this->head, *deletL = this->head;
        T result;
        
        for(int i = 0; i < pos - 1; i++){
            tempb = tempb->getNext();
        }
        
        for(int i = 0; i < pos; i++){
            deletL = deletL->getNext();
        }
        
        for(int i=0; i<pos+1; i++){
            tempa = tempa->getNext();
        }
        
        result = deletL->getValue();
        delete deletL;
        tempb->setNext(tempa);
        this->numElements--;
        
        return result;
    }
}

template<typename T>
void List<T>::insert(T x, int pos){
    Node<T> *tempb = this->head, *tempa = this->head;
    for(int i = 0; i < pos - 1; i++){
        tempb = tempb->getNext();
    }
    
    for(int i = 0; i < pos; i++){
        tempa = tempa->getNext();
    }

    Node<T> *in = new Node<T>(x, tempa);
    tempb->setNext(in);
    this->numElements++;
}

template<typename T>
AbstractList<T>::AbstractList(){
	this->numElements = 0;
	this->head = NULL;
}

template<typename T>
AbstractList<T>::~AbstractList(){
    while(this->numElements != 0){
        Node<T> *temp = this->head;
        this->head = this->head->getNext();
        delete temp;
        this->numElements--;
    }
}

template<typename T>
T List<T>::operator [](int n){
    Node<T> *temp;
    T result;

    if(n < 0 || n > this->numElements - 1){
        cout << "Error, there is no such an element in the link" << endl;
        return 0;
    }

    temp = this->head;
    for(int i = 0; i < n; i++){
        this->head = this->head->getNext();
    }

    result = this->head->getValue();
    this->head = temp;
    
    return result;
}


template<typename T>
void List<T>::sort(){
    Node<T> *tempf = this->head, *tempc = this->head;
    T Eles[this->numElements];
    
    for(int i = 0; i < this->numElements; i++){
        if(i > 0){
            tempf = tempf->getNext();
        }
        
        Eles[i] = tempf->getValue();
    }

    for(int i = 0; i < this->numElements; i++){
        for(int j = i + 1; j < this->numElements; j = j + 1){
            if(Eles[i] > Eles[j]){
                T temp = Eles[i];
                Eles[i] = Eles[j];
                Eles[j] = temp;
            }
        }
    }

    int loopcount = this->numElements;
    for(int i = loopcount - 1; i >= 0; i--){
        append(Eles[i]);
        remove_at(loopcount);
    }
}

#endif