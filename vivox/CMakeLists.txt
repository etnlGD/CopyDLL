CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

add_library(vivoxsdk SHARED template.cpp vivoxsdk.cpp vivoxsdk.def ../shared/HookUtil.h ../shared/HookUtil.cpp)
include_directories(${CMAKE_SOURCE_DIR}/../shared/PolyHook)
include_directories(${CMAKE_SOURCE_DIR}/../shared)
target_link_libraries(vivoxsdk ${CMAKE_SOURCE_DIR}/../shared/PolyHook/capstone/msvc/Release/capstone.lib)
