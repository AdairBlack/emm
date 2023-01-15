#include "Component.hpp"

#include <string>

namespace MachineSpace
{

    Component::Component(std::string &_pn, std::string &_qn, std::string &_desc) : pn(std::move(_pn)), qn(std::move(_qn)), desc(std::move(_desc))
    {
        saveToNVStorate();
        return;
    }

    std::string Component::getStorageString()
    {
        return this->pn + " " + this->qn + " " + this->desc;
    }

    int Component::saveToNVStorate()
    {
        return 0;
    }

}
