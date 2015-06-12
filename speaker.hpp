#include <iostream>
#include <string>

class speaker {
public:
    typedef std::string name_t;
    typedef unsigned int week_t;
    speaker();
private:
    name_t name;
    week_t weeks_since_last_talk;
};
