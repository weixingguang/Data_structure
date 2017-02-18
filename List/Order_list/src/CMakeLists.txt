MESSAGE(STATUS "------src------")

ADD_LIBRARY(list_function STATIC Order_list.cpp)
INSTALL(TARGETS list_function DESTINATION ${ODLIST_BINARY_DIR}/lib)
