#include "collector.hpp"

collector::collector(const std::vector<name_t>& ordered_names_, const speaker_nr_t nr_speakers_per_week_)
    : ordered_names(ordered_names_),
      it(ordered_names.begin()),
      nr_speakers_per_week(nr_speakers_per_week_)
{}

speaker::name_t collector::get_weeks_speakers_advance()
{
    name_t result;
    for (speaker_nr_t s = 0; s < nr_speakers_per_week; ++s) {
        result += *it++ + "\t";
        if (it == ordered_names.end()) {
            it = ordered_names.begin();
        }
    }
    return result;
}
