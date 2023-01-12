#include "Machine.hpp"

namespace Machine{

void Machine::addComponent(std::string &componentName)
{
    components.push_back(std::move(componentName));

    return;
}

void Machine::removeComponent(std::string &componentName)
{
    

}

}


