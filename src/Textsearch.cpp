//
// Created by PSU-DevAcademy on 05.10.18.
//
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

// My own classes
#include "Textsearch.h"

std::vector<std::string> zField;

Textsearch::Textsearch(){

    // This is the construktor these should be empty first ... i hope :)


}

Textsearch::~Textsearch(){}

void Textsearch::testfunction(std::string hello ){

    //std::cout << "This is only a testfunction that should work for me " <<  hello << std::endl;

}


std::vector<std::string> Textsearch::displayfile(std::string filename){

    std::cout << "This is the filename " << filename << std::endl;

    std::ifstream textFile(filename);

    if(!textFile)
    {
        std::cout << "Fileerror please correct this Halil ";

    }

    std::string lineString ;
    int lineCount = 0;

    //zField.resize(1);
    while(textFile){
        getline(textFile,lineString);
        lineCount++;
        //std::cout << "Zeilennummer " << zeilenZahl << ": " << zeilenString << std::endl;
        zField.push_back( lineString);
    }

    lineCount = 0;
    for(std::string &z:zField){
        //std::cout << zeilenZahl << " " << z << std::endl;
        lineCount++;
    }

    return zField;

}

void Textsearch::findtext(const std::vector<std::string> zField, std::string suchString){

    int lineCount = 0;
    int stringFound = 0;
    std::string::size_type pos;
    //int
    for(const std::string &z:zField){
        //std::cout << zeilenZahl << " " << z << std::endl;
        lineCount++;
        pos = z.find(suchString);
        if(pos == std::string::npos) {
            //std::cout << "not found !!! " << std::endl;
        }
        else
        {
            std::cout << z << std::endl;
            stringFound++;
        }

    }

    //std::cout << "the String " << suchString << " are found " << stringFound << " times ." << std::endl;
    return ;
}

void Textsearch::analysetext(std::vector<std::string> zField) {


    for(std::string &z:zField){
        std::cout << "TWO " << z << std::endl;
        std::cout << "size of the line " << z.size() << std::endl;


    }

    //std::cout << "the String " << suchString << " are found " << stringFound << " times ." << std::endl;
    return ;
}
