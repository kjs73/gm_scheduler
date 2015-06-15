#include "collector.hpp"
#include "sequence.hpp"

void sequence::set_up(const ranking_t& ranking)
{
    ordered_names.reserve(ranking.size());
    for (ranking_t::const_reverse_iterator i = ranking.rbegin(); i != ranking.rend(); ++i) {
        ordered_names.push_back(i->second.name());
    }
    ordered_names.shrink_to_fit();
}

void sequence::print(std::ostream& ost, const week_t nr_weeks_to_schedule, const speaker_nr_t nr_speakers_per_week)
{
    collector c(ordered_names, nr_speakers_per_week);
    for (week_t week = 0; week < nr_weeks_to_schedule; ++week) {
        ost << week << "\t" << c.get_weeks_speakers_advance() << "\n";
    }
}
