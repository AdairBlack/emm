project('emm', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3','cpp_std=c++20'])

exe = executable('emm', 
                 'main.cpp',
                 'MachineManager.hpp',
                 'MachineManager.cpp',
                 'Machine.cpp',
                 'Machine.hpp',
                 install : true)

test('basic', exe)
