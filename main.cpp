#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>
#include "calculator.h"

using namespace std;

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc,argv);
    RUN_ALL_TESTS();

    calculator *first = new calculator();
    bool all = false;

    cout << "Please type operations with '=' at the end: "<<endl;

    while(all != true){
        string tmp;
        cin >> tmp;
        first->setOperation(tmp);
            if( tmp == "="){
                all = true;
            }
    }

    first->readNumbersFromHeap();
    first->result();


    return 0;
}
