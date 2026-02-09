# Apps Layer: Main Executable

add_executable(playbook main.cpp)

# Link with core library
if(TARGET bases)
    target_link_libraries(playbook PRIVATE bases)
endif()
