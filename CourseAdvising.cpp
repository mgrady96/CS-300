#include "CourseAdvising.h"


Course::Course()
{

    //Initalize
    this->id = "";
    this->title = "";

}


//Setting ID
void Course::setId(std::string new_id)
{

    this->id = new_id;

}


//Get/Return
std::string Course::getId()
{
    return id;

}


//Set
void Course::setTitle(std::string new_title)
{

    this->title = new_title;

}


//Return
std::string Course::getTitle()
{

    return title;

}



//Get and Return Prerequisites
int Course::getNumberPreReqs()
{

    return pre_reqs.size();

}

//Add Prerequisites
void Course::addPreReq(std::string new_req)
{
    this->pre_reqs.push_back(new_req);
}

std::string Course::getPreReq(int index)
{

    std::string ret_value = "";

    if ((index >= 0) && (index < pre_reqs.size()))
    {

        ret_value = pre_reqs.at(index);

    }

    return ret_value;

}


//Print Course ID and Prerequisites
void Course::print()
{

    std::cout << "\n";
    std::cout << this->id << " -- " << this->title << "\n";
    std::cout << "\n";
    std::cout << "pre_requisites:\n";
    if (this->pre_reqs.size() > 0)
    {

        for (int index = 0; index < this->pre_reqs.size(); index++)
        {

            std::cout << "   " << this->pre_reqs.at(index) << "\n";

        }

    }
    else
    {

        std::cout << "   None\n";
    }
    //Needed to separate courses when printing
    std::cout << "\n";
    for (int index = 0; index < 80; index++)
    {
        std::cout << "-";
    }
    std::cout << "\n";

}