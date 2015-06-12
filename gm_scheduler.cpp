#include <iostream>

#include "gm_scheduler.hpp"

gm_scheduler::gm_scheduler()
    : nr_weeks_to_schedule("number of weeks to schedule"),
      nr_speakers_per_week("number of speakers per week")
{
    std::cout << "GROUP MEETING SCHEDULER\n";
}
