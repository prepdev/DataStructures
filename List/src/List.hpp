/*
 * List.hpp
 *
 *  Created on: Oct 20, 2013
 *      Author: lahmad
 */

#ifndef LIST_HPP_
#define LIST_HPP_

class List {
public:
	List();
	virtual ~List();
	int length() const;
	virtual bool isEmpty() const = 0;
	virtual bool search(int item, int& loc) = 0;
	virtual void add(int item) = 0;
	virtual void removeEnd() = 0;
	virtual void printList() const = 0;

protected:
	int m_length;
};

#endif /* LIST_HPP_ */
