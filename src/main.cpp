

// Include own -Headerfiles
#include "Textsearch.h"

#include <iostream>
#include <string>
#include <fstream>
#include <memory>


int main(int argc, char *argv[])
{

    std::string searchString ;

    searchString = argv[1];

    std::ofstream textFile(".hello_zusammenfile", std::ios::app);
    if(!textFile)

    {
        std::cout << "Fileerror please correct this Halil ";
        return 1;

    }
    int count = 3;
    double price = 1.40;
    std::string descript = "Apple , Bio";

    for(int i=0; i <= 0 ; i++)
    {

        textFile << count << " " << price
                 << " " << descript << std::endl;


        textFile << "12 0.85 Banana "<< std::endl;
    }

    textFile.close();

    std::shared_ptr<Textsearch> initial;

    initial = std::make_shared<Textsearch>();

    initial->testfunction("Hello How are you");

    // initial->displayfile(".hello_zusammenfile");

    std::vector<std::string> zField = initial->displayfile(".hello_zusammenfile");

    int lineCount = 1;

    for(std::string &z:zField){
        //std::cout << lineCount << " " << z << std::endl;
        lineCount++;
    }


    initial->findtext(zField, searchString);
}
