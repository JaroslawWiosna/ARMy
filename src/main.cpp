#include <iostream>
#include "File/File.h"
#include "Parser/parser.hpp"
#include "Filters/Filters.h"

using namespace std;

int main() {
    std::cout << "START" << std::endl;

    std::cout << "INIT" << std::endl;
    __cxx11::string configFile = "../Resources/parser1.txt";
    c_parser *parser = new c_parser(configFile);
    File *audioFile = new File(parser);
    Equalizer eq(audioFile, parser);
    Delay delay(audioFile, parser);

    std::cout << "INIT DONE" << std::endl;

    int read = audioFile->read();
    if(read){
        std::cout << "Error while opening the file" << std::endl;
        return read;
    }

    eq.perform();
    delay.perform();

    int save = audioFile->save();
    if(save){
        std::cout << "Error while saving the file" << std::endl;
        return read;
    }
    audioFile->save();

    delete(audioFile);
    delete(parser);

    std::cout << "Main end" << std::endl;

    return 0;
}