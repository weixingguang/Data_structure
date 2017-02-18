MESSAGE(STATUS "-----exampls------")

LINK_DIRECTORIES(${ODLIST_BINARY_DIR}/lib)
ADD_EXECUTABLE(test test.cpp)
TARGET_LINK_LIBRARIES(test list_function)
