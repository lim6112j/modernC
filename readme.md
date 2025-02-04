# history
gcc -std=c2x -Wall -o main main.c
# if CMakeLists.txt exists
mkdir src_build && cd src_build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ../src
ln -s compile_commands.json ../src/
cmake --build .
./exeucutable_name_in_cmakelists_txt
