MESSAGE(STATUS "---------------Linklist-------------")

PROJECT(LINKLIST)
INCLUDE_DIRECTORIES(${LINKLIST_SOURCE_DIR}/include)
ADD_SUBDIRECTORY(${LINKLIST_SOURCE_DIR}/src)
ADD_SUBDIRECTORY(${LINKLIST_SOURCE_DIR}/test ${LINKLIST_BINARY_DIR}/lib)
