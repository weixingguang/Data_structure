ADD_EXECUTABLE(main main.cpp)

LINK_DIRECTORIES(${STACK_BINARY_DIR}/lib)
TARGET_LINK_LIBRARIES(main stack)
