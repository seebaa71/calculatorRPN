//
// Created by Sebastian Kamraj on 21/02/2021.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class calculator{
private:
    int results=0;
    vector<string> tab;
    vector<int> tab2;
    vector<string> operations;

public:

    void setOperation(string tmp);
    void setNumber(int a);
    void setOperationToTest(string b);
    void printLastOperation();
    void readNumbersFromHeap();
    bool is_number(const std::string &s);
    void add(int &a,int &b);
    void substract (int &a,int &b);
    void division(int &a, int &b);
    void multiplication(int &a, int &b);
    int result();
};
#endif //CALCULATOR_CALCULATOR_H
