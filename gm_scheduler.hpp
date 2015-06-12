#include "parameter.hpp"
#include "speaker.hpp"

class gm_scheduler {
public:
    typedef speaker::week_t week_t;
    typedef unsigned int speaker_nr_t;
    gm_scheduler();
private:
    parameter<week_t> nr_weeks_to_schedule;
    parameter<speaker_nr_t> nr_speakers_per_week;
};
