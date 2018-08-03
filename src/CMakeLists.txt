set(Headers Est.hpp main.hpp Module.hpp Option.hpp Post.hpp Pre.hpp)
set(CppFiles data.cpp Est.cpp main.cpp Module.cpp Option.cpp Post.cpp Pre.cpp print.cpp)
add_executable(mapDIA ${Headers} ${CppFiles})
target_link_libraries(mapDIA PUBLIC ${NLOPT_LIBRARIES})

if(NOT WIN32)
	install(TARGETS mapDIA DESTINATION bin)
endif()