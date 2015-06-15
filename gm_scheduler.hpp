#ifndef GM_SCHEDULER_HPP_KJS
#define GM_SCHEDULER_HPP_KJS

#include "parameter.hpp"
#include "sequence.hpp"

class gm_scheduler {
public:
    typedef speaker::week_t week_t;
    typedef sequence::speaker_nr_t speaker_nr_t;
    typedef sequence::ranking_t ranking_t;
    gm_scheduler();
private:
    void read_in_speakers();
    parameter<week_t> nr_weeks_to_schedule;
    parameter<speaker_nr_t> nr_speakers_per_week;
    ranking_t ranking;
    sequence speaker_sequence;
};

#endif // GM_SCHEDULER_HPP_KJS
