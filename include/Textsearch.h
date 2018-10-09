//
// Created by PSU-DevAcademy on 05.10.18.
//

#include <iostream>
#include <string>
#include <vector>

#ifndef HELLO123_TEXTSEARCH_H
#define HELLO123_TEXTSEARCH_H


class Textsearch
{
public:
    Textsearch();
    ~Textsearch();
    void testfunction(std::string);
    std::vector<std::string> displayfile(std::string);
    void findtext(std::vector<std::string>, std::string);
    void analysetext(std::vector<std::string>);
};


#endif //HELLO123_TEXTSEARCH_H
