#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>

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
    std::cerr << "Hello Wolrd!" << std::endl;   

    return 0;
}