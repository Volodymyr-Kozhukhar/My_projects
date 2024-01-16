cmake_minimum_required(VERSION 3.5)

project(D LANGUAGES C)

add_executable(D main.c)

include(GNUInstallDirs)
install(TARGETS D
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
