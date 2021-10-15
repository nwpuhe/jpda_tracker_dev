project(JPDA_tracker)

cmake_minimum_required( VERSION 3.10 )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


find_package(Eigen3 REQUIRED)
find_package(OpenCV REQUIRED)


include_directories(${CMAKE_SOURCE_DIR/src})

# link_directories()

file(GLOB SRC
    ${CMAKE_SOURCE_DIR}/*.cpp
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

add_executable(JPDA_tracker ${SRC})

target_link_libraries(JPDA_tracker PUBLIC ${OpenCV_LIBS})