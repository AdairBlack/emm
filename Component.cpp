#include "Component.hpp"

#include "StorageFile.hpp"

#include <iostream>

namespace MachineSpace
{

    Component::Component(std::string _pn, std::string _qn, std::string _desc) : pn(_pn), qn(_qn), desc(_desc)
    {
        std::cout << "Construct a component: pn: " << pn << ", qn: " << qn << ", desc: " << desc << std::endl;
        saveToNVStorate();
        return;
    }

    std::string Component::getStorageString()
    {
        return this->pn + " " + this->qn + " " + this->desc;
    }

    int Component::saveToNVStorate()
    {
        NVStorage::StorageFile::saveToFile(getStorageString());
        return 0;
    }

}
