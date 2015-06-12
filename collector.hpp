#ifndef COLLECTOR_HPP_KJS
#define COLLECTOR_HPP_KJS

#include "sequence.hpp"
#include "speaker.hpp"

class collector {
public:
    typedef speaker::name_t name_t;
    typedef sequence::speaker_nr_t speaker_nr_t;
    collector(const std::vector<name_t>&, const speaker_nr_t);
    name_t get_weeks_speakers_advance();
private:
    const std::vector<name_t>& ordered_names;
    std::vector<name_t>::const_iterator it;
    const speaker_nr_t nr_speakers_per_week;
};

#endif // COLLECTOR_HPP_KJS
