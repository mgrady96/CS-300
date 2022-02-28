#include <iostream>
#include <string>
#include <vector>

class Course
{

public:

    //Default constructor
    Course();

    void        setId(std::string new_id);
    std::string getId();
    void        setTitle(std::string new_title);
    std::string getTitle();
    int         getNumberPreReqs();
    void        addPreReq(std::string new_req);
    std::string getPreReq(int index);
    void        print();

    friend bool operator==(const Course& lh, const Course& rh);
    friend bool operator!=(const Course& lh, const Course& rh);
    friend bool operator<(const Course& lh, const Course& rh);
    friend bool operator<=(const Course& lh, const Course& rh);
    friend bool operator>(const Course& lh, const Course& rh);
    friend bool operator>=(const Course& lh, const Course& rh);

private:

    std::string id;
    std::string title;
    std::vector<std::string> pre_reqs;

};


