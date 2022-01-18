#pragma once

#include <Lex.hpp>
#include <llir.hpp>
#include <irbuilder.hpp>

using namespace LLIR;

class Parser {
public:
    explicit Parser(std::string input, std::string name);
    void parse();
    void print();
protected:
    Type *getType(Token token);
    bool buildFunction(Token linkToken);
    bool buildBody();
private:
    Scanner *scanner;
    Module *mod;
    IRBuilder *builder;
};