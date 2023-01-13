#include "MachineManager.hpp"
#include "MachineManager.hpp"

#include <iostream>
#include <vector>

#define PROJECT_NAME "emm"

int main(int argc, char **argv) {
    printf("This is project %s.\n", PROJECT_NAME);
    if(0)
    {
        argc = argc;
        argv = argv;
    }

    std::vector<MachineSpace::MachineManager> machineManagers;
    
    for(int i = 0; i < 10; i++)
    {
        machineManagers.push_back(MachineSpace::MachineManager(i));
    }

    for(auto i : machineManagers)
    {
        std::cout << "Machine id:" << i.id << "." << std::endl;
    }

    return 0;
}
