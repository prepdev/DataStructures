/*
 * List.cpp
 *
 *  Created on: Oct 20, 2013
 *      Author: lahmad
 */

#include "List.hpp"

List::List() {
	m_length = 0;
}

List::~List() {
}

int List::length() const {
	return m_length;
}
