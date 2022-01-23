cmake_minimum_required(VERSION 3.16)
project(QtOpenSSL VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_AUTOMOC ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

if(${QT_VERSION_MAJOR} EQUAL 6)
set(CMAKE_CXX_STANDARD 17)
message(STATUS "Detected Qt6, using C++17 standard.")
else()
set(CMAKE_CXX_STANDARD 11)
message(STATUS "Detected Qt5, using C++11 standard.")
endif()

find_package(OpenSSL REQUIRED)

include_directories(include)
aux_source_directory(src SOURCE_FILES)
add_library(QtOpenSSL ${SOURCE_FILES})
target_link_libraries(QtOpenSSL PUBLIC Qt::Core)
target_link_libraries(QtOpenSSL PRIVATE OpenSSL::Crypto OpenSSL::SSL)

# subdirs(test)
