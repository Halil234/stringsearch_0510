

// Include own -Headerfiles
#include "Textsearch.h"

#include <iostream>
#include <string>
#include <fstream>
#include <memory>


int main(int argc, char *argv[])
{

    std::string searchString ;

    std::string fileName;

    searchString = argv[1];

    fileName = argv[2];



    std::shared_ptr<Textsearch> initial;

    initial = std::make_shared<Textsearch>();

    initial->testfunction("Hello How are you");

    // initial->displayfile(".hello_zusammenfile");

    std::vector<std::string> zField = initial->displayfile(fileName);

    int lineCount = 1;

    for(std::string &z:zField){
        //std::cout << lineCount << " " << z << std::endl;
        lineCount++;
    }


    initial->findtext(zField, searchString);
}
