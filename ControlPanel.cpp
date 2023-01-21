#include "ControlPanel.hpp"

namespace ControlPanelSpace
{
    ControlPanel &ControlPanel::getInstance()
    {
        static ControlPanel instance;
        return instance;
    }
} // namespace ControlPanelSpace