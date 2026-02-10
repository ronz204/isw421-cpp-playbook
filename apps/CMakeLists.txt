# Apps Layer: Main Executable

add_executable(playbook main.cpp)

# Link the bases library usando el alias moderno
# El alias Bases::bases propaga automáticamente los includes
target_link_libraries(playbook PRIVATE Bases::bases)
