#ifndef PARAMETER_HPP_KJS
#define PARAMETER_HPP_KJS

#include <iostream>
#include <string>

template <class T>
class parameter {
public:
    typedef std::string name_t;
    parameter(const name_t& name__)
        : name_(name__)
    {
        read_value();
    }
    name_t name() const { return name_; }
    T value() const { return value_; }
    T operator()() const { return value(); }
private:
    const name_t name_;
    T value_;
    void read_value(std::ostream& ost=std::cout, std::istream& ist=std::cin)
    {
        ost << "provide parameter " << name() << "\n";
        ist >> value_;
    }
};

#endif // PARAMETER_HPP_KJS
