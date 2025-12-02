pth=$(pwd)

g++ "$pth/main.cpp" -o "$pth/a.out" -std=c++17

"$pth/a.out"
