file(GLOB_RECURSE SOURCES labs/*.h labs/*.c labs/*.hpp labs/*.cpp)
add_library(${PROJECT_NAME} INTERFACE ${SOURCES})

target_link_libraries(${PROJECT_NAME} INTERFACE eigen)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_20)
