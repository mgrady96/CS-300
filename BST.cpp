#include <iostream>
#include "BST.h"


BST::BST()
{
    this->root = nullptr;
}

void BST::insert(BSTNode** current, Course new_course)
{

    if (*current == nullptr)
    {

        *current = new BSTNode(new_course);

    }

    else if (new_course.getId() <= (*current)->course.getId())
    {

        this->insert(&(*current)->left, new_course);

    }
    else
    {

        this->insert(&(*current)->right, new_course);

    }

}



void BST::insert(Course new_course)
{

    insert(&root, new_course);

}


void BST::populate(std::string filename)
{

    std::ifstream in_file;
    in_file.open(filename);

    if (in_file.is_open())
    {

        //Read file
        std::string line;
        while (std::getline(in_file, line))
        {


            std::stringstream tokenizer = std::stringstream(line);
            std::vector<std::string> token;
            while (tokenizer.good())
            {

                std::string word;
                std::getline(tokenizer, word, ',');
                token.push_back(word);

            }

            if (token.size() >= 2)
            {

                Course new_course = Course();
                new_course.setId(token.at(0));
                new_course.setTitle(token.at(1));
                for (int index = 2; index < token.size(); index++)
                {

                    new_course.addPreReq(token.at(index));

                }

                this->insert(new_course);

            }

        }

    }

}


void BST::printCourse(std::string course_id)
{

    BSTNode* current = root;

    while (current != nullptr)
    {

        if (current->course.getId() == course_id)
        {

            current->course.print();

            return;

        }

        else if (course_id <= current->course.getId())
        {

            current = current->left;

        }
        else
        {

            current = current->right;

        }

    }

    std::cout << "Course Not Found\n";

}


void BST::printAll()
{

    this->printAll(this->root);

}


void BST::printAll(BSTNode* current)
{

    if (current != nullptr)
    {
        this->printAll(current->left);
        current->course.print();
        this->printAll(current->right);

    }

}