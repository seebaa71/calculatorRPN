#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>
#include "calculator.h"
#include <memory>

using namespace std;

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc,argv);
    RUN_ALL_TESTS();
    unique_ptr<calculator> ptr1(new calculator);
    bool all = false;
    cout << "Please type operations with '=' at the end: "<<endl;
//
//    calculator *first = new calculator();
//    bool all = false;
//

    while(all != true){
        string tmp;
        cin >> tmp;
        ptr1->setOperation(tmp);
            if( tmp == "="){
                all = true;
            }
    }

    ptr1->readNumbersFromHeap();
    ptr1->result();


    return 0;
}
