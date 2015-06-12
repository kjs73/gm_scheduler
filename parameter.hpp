#include <string>

template <class T>
class parameter {
public:
    typedef std::string name_t;
    parameter(const name_t& name_)
        : name(name_)
    {
        read_value();
    }
private:
    const name_t name;
    T value;
    void read_value()
    {
        
    }
};