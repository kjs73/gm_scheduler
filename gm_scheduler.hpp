#include <string>

class gm_scheduler {
public:
    typedef unsigned int week_t;
    typedef std::string name_t;
private:
    week_t nr_weeks_to_schedule;
public:
    gm_scheduler();
};
