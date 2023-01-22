#include "MaterialManager.hpp"

#include <iostream>

namespace MaterialManagerSpace
{
    MaterialManager &MaterialManager::getInstance()
    {
        static MaterialManager instance;
        return instance;
    }

    void MaterialManager::addComponent(Component component)
    {
        components.push_back(component);
        return;
    }

    void MaterialManager::removeComponent(uint64_t id)
    {

        return;
    }
}