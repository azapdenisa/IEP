
# Hello - Tutorial for C++ projects with CMake

The purpose of the Hello solution is to provide a sample regarding how to build C++ projects with the use of the CMake build system.

## Hello, version 0.3 features

* Print the application name, version and copyright information
* Print "Hello world!"
* Print the current date-time
* Print "Goodbye world!"

## Hello, version 0.3 source files

* src/main.cpp
* src/hello.cpp
* inc/hello/hello.hpp
* cfg/hello/hello_config.hpp.in

## Hello, version 0.3 architecture

* An executable:
  * Name: hello (or hello.exe on Windows)
  * Sources: main.cpp, hello.cpp, hello.hpp, hello_config.hpp

* Hints: 
  * All the includes are using the *hello* prefix (ex: #include <hello/hello.hpp> -> to be considered by specifying the include search path in CMake

## Programming language

* C++14

## The CMake solution

* Configure a solution building an executable:
  * Solution name: **hello**
  * Project name: **hello**
  * Executable name: **hello**
  * Source files:
    * src/main.cpp
    * src/hello.cpp
    * inc/hello/hello.hpp
    * [build_folder]/generated/inc/hello/hello_config.hpp

* Specify the minimal CMake version (example 3.0)

* Generate the *hello_config.hpp* header file into the [build_folder]/generated/inc/hello folder by using the input template *cfg/hello/hello_config.hpp.in* as below:
  * Specify the application name by setting the **APP_TITLE** variable ("Hello")
  * Specify the application version by setting the **APP_VERSION** variable (0.3)
  * Specify the output texts by setting the variables (add extra \" quotes for the passing the variables as strings):
    * STR_HELLO ("Hello world!")
    * STR_TIMEIS ("Current date-time is: ")
    * STR_GOODBYE ("Goodbye world!")
  * Overwrite the copyright information by setting the preprocessor value **COPYRIGHT_INFO** to:
   "Copyright © 03-changed"

* Specify the search path for header files

* Specify the requested C++ standard

# Building the solution

* Build folder: **build**

* CMake generators (use one of them):
  * Unix makefiles
  * Ninja
  * Kate with Unix makefiles
  * Kate with Ninja
  * Codeblocks with Unix makefiles
  * Codeblocks with Ninja
  * Microsoft Visual Studio 2015 (or later)

* Build configurations:
  * Debug/Release

## Running the executable

* build/hello

## CMake commands and variables to use

* add_executable
* cmake_cxx_flags, cmake_cxx_standard, cmake_cxx_standard_required, cmake_cxx_extensions, cmake_compiler_is_gnucxx
* cmake_minimum_required
* cmake_version
* greater
* if/else/endif
* include_directories
* on/off
* project
* project_name
* set
* ---
* add_definitions
* configure_file
* project_binary_dir
* project_source_dir
