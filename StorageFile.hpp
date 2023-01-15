#pragma once

#include "Component.hpp"

namespace NVStorage
{
    class StorageFile
    {
    public:
        static int saveComponentToFile(MachineSpace::Component &component);
    };
}