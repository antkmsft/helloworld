cmake_minimum_required(VERSION 3.22)

project (helloworld LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

find_package(azure-messaging-eventhubs-checkpointstore-blob-cpp REQUIRED)

add_executable(helloworld main.cpp)

target_link_libraries(helloworld PRIVATE Azure::azure-messaging-eventhubs-checkpointstore-blob)
