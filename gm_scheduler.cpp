#include <stdexcept>

#include "gm_scheduler.hpp"

gm_scheduler::gm_scheduler()
    : nr_weeks_to_schedule("number of weeks to schedule"),
      nr_speakers_per_week("number of speakers per week")
{
    read_in_speakers();
    speaker_sequence.set_up(ranking);
    speaker_sequence.print(std::cout, nr_weeks_to_schedule(), nr_speakers_per_week());
}

void gm_scheduler::read_in_speakers()
{
    std::cout << "speaker read-in\n";
    while (true) {
        speaker s;
        ranking.insert(std::make_pair(s.weeks(), s));
        std::cout << "add speaker?\n";
        std::string answer = "n";
        std::cin >> answer;
        if (answer == "n") {
            break;
        }
    }
    if (!ranking.size()) {
        throw std::runtime_error("no speakers provided; provide at least one speaker");
    }
}
