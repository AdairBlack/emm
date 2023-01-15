#include "StorageFile.hpp"

#include <string>
#include <iostream>
#include <fstream>

namespace NVStorage
{
    int StorageFile::saveComponentToFile(MachineSpace::Component &component)
    {
        std::ofstream fout;
        std::string line;
        line = component.getStorageString();
        fout.open("StorageFiles/components", std::ios::app);

        fout << line << std::endl;

        fout.close();

        return 0;
    }
}
