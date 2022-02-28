#include "CourseAdvising.h"

class BSTNode
{

public:

    //Constructors
    BSTNode();
    BSTNode(Course course);

    Course   course;
    BSTNode* left;
    BSTNode* right;

};
