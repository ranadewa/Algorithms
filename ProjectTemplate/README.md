Getting started with Google Test (GTest) on Ubuntu

Start by installing the gtest development package:

sudo apt-get install libgtest-dev

Note that this package only install source files. You have to compile the code yourself to create the necessary library files. These source files should be located at /usr/src/gtest. Browse to this folder and use cmake to compile the library:

sudo apt-get install cmake # install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
 
copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
sudo cp *.a /usr/lib

Compile and run the tests:

cmake CMakeLists.txt
make
./runTests

https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/