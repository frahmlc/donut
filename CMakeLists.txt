cmake_minimum_required(VERSION 3.0)

add_library(donut src/donut.cpp)
add_library(position src/position.cpp)
add_library(circularscanner src/circularscanner.cpp)

enable_testing()

find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

file(GLOB TEST_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} test/*.cpp)

foreach(testSrc ${TEST_SRCS})
	get_filename_component(testName ${testSrc} NAME_WE)
	add_executable(${testName} ${testSrc})
	target_link_libraries(${testName} ${Boost_LIBRARIES} donut position circularscanner)
	set_target_properties(${testName} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/testBin)
	add_test(NAME ${testName} WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/testBin COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/testBin/${testName} )
endforeach(testSrc)

add_executable(donutscan src/main.cpp)
target_link_libraries(donutscan donut position circularscanner)
