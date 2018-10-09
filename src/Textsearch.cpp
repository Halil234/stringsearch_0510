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

    int offset = 0;
    char *adr ;

    char dest[100000] = {0};


    for(std::string &z:zField){
        //std::cout << "TWO " << z << std::endl;
        //std::cout << "size of the line " << z.size() << std::endl;

        //std::cout << "Copy of the vektor in to memory !!!!!" << std::endl;

        adr = &dest[0] + offset ;

        std::memcpy(adr,z.c_str(),strlen(z.c_str())+1);

        offset += strlen(z.c_str())+1;

        //std::cout << "with is the OFFSET variable " << offset  << std::endl;

        //std::cout << "with is the dest variable "  << std::endl;

        for (char c : dest) {
          //  std::cout << c ;
        }

        //std::cout << "end of the dest variable !!!!!  "  << std::endl;

        //std::cout << "DEST   variable !!!!!  " <<  dest << std::endl;

        //printf("%s\n", dest);




    }

    for (char c : dest) {
    //    std::cout << c ;
    }

    // printf("%s\n", dest);

    std::string word ;

    struct field {

        std::string word;
        int ext;

        field(std::string& nametwo, int i):
            word(nametwo),
            ext (i) {}





    };

    std::vector<field> wordField;

    void print_person(struct field who) {
        printf("%s,  delimiter  %d", who->word, who->ext);
       
    }



    for (int i = 0 ; i <= 100000 ; i++)
    {


        if (dest[i] == ' ')
        {

            //std::cout << "_" ;

            std::cout << word << std::endl;

            wordField.push_back(field(word,1));

            word = "";


        }
        else {
            //std::cout << dest[i] ;

            word += dest[i];
        }

        for(int i = 0 ; i < wordField.size() ; i++ ){

            print_person(wordField[i]);

        }

    }







    //std::cout << "the String " << suchString << " are found " << stringFound << " times ." << std::endl;
    return ;
}
