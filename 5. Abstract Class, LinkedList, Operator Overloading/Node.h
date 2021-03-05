#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
	private:
		T value;
		Node * next;
	public:

		Node(T v, Node * n);
		T getValue() const;
		Node * getNext() const;
		void setNext(Node * p);
};


template<typename T>
Node<T>::Node(T v, Node * n) {
	value = v;
	next = n;
}


template<typename T>
T Node<T>::getValue() const {
	return value;
}


template<typename T>
Node<T>* Node<T>::getNext() const {
	return next;
}

template<typename T>
void Node<T>::setNext(Node * n) {
	this->next = n;
}

#endif
