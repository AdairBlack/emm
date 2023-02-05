#pragma once

#include "Component.hpp"

#include <string>
#include <vector>

namespace MaterialManagerSpace
{

    class Machine
    {
    public:
        Machine(int _id, std::string _description);
        int id;
        std::string description;
        std::vector<MaterialManagerSpace::Component> components;

        void addComponent(uint64_t id);
        void removeComponent(uint64_t id);
    };

}
