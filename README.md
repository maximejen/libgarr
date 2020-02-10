# libgarr
A generic array library for c development

# Install
You will need to add this library in your C / C++ repository inside the folder you desire (ex : `${PROJECT_ROOT}/lib`).

	mkdir build
	cd build
	cmake ..
  
In your project `CMakeLists.txt` file, add this to link the library to your project makefile :
	
	add_subdirectory(lib/libgarr)
	target_link_libraries(${PROJECT_NAME} libgarr)
  
