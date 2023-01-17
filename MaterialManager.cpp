#include "MaterialManager.hpp"

#include <iostream>

namespace MaterialManagerSpace
{
    MaterialManager &MaterialManager::getInstance()
    {
        static MaterialManager instance;
        return instance;
    }
}