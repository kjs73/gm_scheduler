#include "parameter.hpp"

class gm_scheduler {
public:
    typedef unsigned int week_t;
    typedef unsigned int speaker_nr_t;
    typedef std::string name_t;
    gm_scheduler();
private:
    parameter<week_t> nr_weeks_to_schedule;
    parameter<speaker_nr_t> nr_speakers_per_week;
};
