/*
 * Node.cpp
 *
 *  Created on: Oct 20, 2013
 *      Author: lahmad
 */

#include "Node.hpp"
#include <iostream>

template <class Object>
Node<Object>::Node() {
	next = NULL;
	data = NULL;
}

template <class Object>
Node<Object>::~Node() {
	// TODO Auto-generated destructor stub
}

