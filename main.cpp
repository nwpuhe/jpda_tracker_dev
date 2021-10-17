#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>

#include "opencv2/highgui.hpp"

std::map<int, std::vector<std::vector<std::string> > > petsReading(const std::string& _fn) {
    
    std::map<int, std::vector<std::vector<std::string> > > pets;

    std::ifstream file;

    try {
        file.open(_fn.c_str());
    } catch (...) {
        std::cerr << "Cannot open file!!!" << std::endl;
    }



    return pets;
}

int main(int argc, char* argv[]) {

    // std::map<int, std::vector<std::vector<std::string> > > detections = petsReading(); 
    std::cout << "Hello Wolrd!" << std::endl;
    int a = 1;
    double b = 2;

    return 0;
}