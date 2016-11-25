project(test-parser01)

file(GLOB src
  "*.cpp"
)

include_directories( .. )

add_executable(${PROJECT_NAME} ${src} ../parser.hpp )

target_link_libraries(
  ${PROJECT_NAME} 
  ${LINK_FLAGS}
)

add_test(${PROJECT_NAME} ${PROJECT_NAME})
