#ifndef SPEAKER_HPP_KJS
#define SPEAKER_HPP_KJS

#include <iostream>
#include <string>

class speaker {
public:
    typedef std::string name_t;
    typedef unsigned int week_t;
    speaker();
    name_t name() const { return name_; }
private:
    name_t name_;
    week_t weeks_since_last_talk;
};

#endif // SPEAKER_HPP_KJS
