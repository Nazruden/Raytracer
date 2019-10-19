cmake_minimum_required(VERSION 3.2)

project(RayTracer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set (HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set (SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set (HEADERS
    ${HEADER_DIR}/ImageTypes.h
    ${HEADER_DIR}/Color.h
    ${HEADER_DIR}/Bitmap.h
)

set (SOURCES
    ${SOURCE_DIR}/ImageTypes.cpp
    ${SOURCE_DIR}/Bitmap.cpp
    ${SOURCE_DIR}/Color.cpp
    ${SOURCE_DIR}/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_auto_type)
target_include_directories(${PROJECT_NAME} PUBLIC
    "."
    ${HEADER_DIR}
)

add_subdirectory(Tests)