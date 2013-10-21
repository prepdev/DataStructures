/*
 * Node.hpp
 *
 *  Created on: Oct 20, 2013
 *      Author: lahmad
 */

#ifndef NODE_HPP_
#define NODE_HPP_

template <class Object>
class Node {
public:
	Node();
	virtual ~Node();
private:
	Object data;
	Node * next;
};

#endif /* NODE_HPP_ */
