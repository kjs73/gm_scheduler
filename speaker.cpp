#include <limits>

#include "speaker.hpp"

speaker::speaker()
    : name_("speaker"),
      weeks_since_last_talk(std::numeric_limits<week_t>::max())
{
    std::cout << "provide speaker name\n";
    std::cin >> name_;
    std::cout << "provide number of weeks since last talk\n";
    std::cin >> weeks_since_last_talk;
}
