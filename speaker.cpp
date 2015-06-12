#include <limits>

#include "speaker.hpp"

speaker::speaker()
    : name_("speaker"),
      weeks_since_last_talk(std::numeric_limits<week_t>::max())
{
    
}
