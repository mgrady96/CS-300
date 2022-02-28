#include <fstream>
#include <sstream>
#include "CourseAdvising.h"
#include "BSTNode.h"

class BST
{

public:

    BST();

    //Insert
    void insert(BSTNode** current, Course new_course);
    void insert(Course new_course);

    //Read CSV
    void populate(std::string filename);

    //Print Course
    void printCourse(std::string course_id);

    //Print All Courses
    void printAll();
    void printAll(BSTNode* current);


private:

    BSTNode* root;

};

