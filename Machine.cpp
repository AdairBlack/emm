#include "Machine.hpp"

#include <iostream>

namespace MaterialManagerSpace
{

    Machine::Machine(int _id, std::string _description) : id(_id), description(_description)
    {
        std::cout << "construct a Machine, id: " << id << ",description: " << description << std::endl;
        return;
    }

    void Machine::addComponent(uint64_t id)
    {

        return;
    }

    void Machine::removeComponent(uint64_t id)
    {
        for (auto iterComp = components.cbegin(); iterComp != components.cend(); iterComp++)
        {
            if (iterComp->id == id)
            {
                components.erase(iterComp);
                break;
            }
        }

        return;
    }

}
