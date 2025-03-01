#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("/usr/lib/x86_64-linux-gnu/libopencv_core.so");  // Linux path
    if (file.good()) {
        std::cout << "OpenCV is installed!" << std::endl;
    } else {
        std::cout << "OpenCV is NOT installed." << std::endl;
    }
    return 0;
}

