#include "BSTNode.h"


//Default Constructor
BSTNode::BSTNode()
{

//Initialize Left and Right
	left = nullptr;
	right = nullptr;

}

BSTNode::BSTNode(Course course) : BSTNode()
{

	this->course = course;

}