#ifndef SEQUENCE_HPP_KJS
#define SEQUENCE_HPP_KJS

#include <map>
#include <memory>
#include <vector>

#include "speaker.hpp"

class sequence {
public:
    typedef speaker::name_t name_t;
    typedef speaker::week_t week_t;
    typedef unsigned int speaker_nr_t;
    typedef std::multimap<week_t, speaker > ranking_t;
    void set_up(const ranking_t&);
    void print(std::ostream&, const week_t, const speaker_nr_t);
private:
    std::vector<name_t> ordered_names;
};

#endif // SEQUENCE_HPP_KJS
