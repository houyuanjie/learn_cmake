Learn CMake

0. Setup (Debian/Ubuntu)
  sudo apt update && sudo apt upgrade
  sudo apt install build-essential make cmake gdb ninja-build ccache

1. Configuare
  cmake -S . -B build -G Ninja

2. Build
  cmake --build build

3. Run
  ./build/exe/main

----------------------------------------

To quick clean compile:
  make clean && make configure && make
