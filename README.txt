Learn CMake

0. Setup (Debian/Ubuntu)
  sudo apt update && sudo apt upgrade
  sudo apt install build-essential make cmake

1. Configuare
  cmake -S . -B build

2. Build
  cmake --build build

3. Run
  ./build/exe/main
