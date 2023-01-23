#include "MaterialManager.hpp"

#include <iostream>

namespace MaterialManagerSpace
{
    MaterialManager &MaterialManager::getInstance()
    {
        static MaterialManager instance;
        return instance;
    }

    void MaterialManager::addComponent(std::string pn, std::string qn, std::string desc, uint64_t id)
    {
        components.push_back(Component{pn, qn, desc, id});
        return;
    }

    void MaterialManager::removeComponent(uint64_t id)
    {

        return;
    }
}