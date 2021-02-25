//
// Created by Sebastian Kamraj on 21/02/2021.
//
#include "calculator.h"

    void calculator::add(int &a, int &b){
        results = a+b;
        tab2.insert(tab2.begin(),results);
    }
    void calculator::substract(int &a, int &b) {
        results  = a - b;
        tab2.insert(tab2.begin(),results);

    }
    void calculator::division(int &a, int &b)
    {
        results = a/b;
        tab2.insert(tab2.begin(),results);


    }
    void calculator::multiplication(int &a, int &b){
        results = a*b;
        tab2.insert(tab2.begin(),results);

    }

    void calculator::setOperation(string tmp){
        tab.push_back(tmp);

    }
    void calculator::printLastOperation() {
    for( auto &x : tab) {
       cout << x << "is";
       cout<<""<<endl;
    }

    }

    bool calculator::is_number(const std::string &s) {
        return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
    }

    void calculator::readNumbersFromHeap() {
    for(auto &x : tab){
        if(is_number(x)){
            tab2.push_back(std::stoi(x));
        }
        else{
            operations.push_back(x);
        }
    }
}
    int calculator::result(){
    for(auto it3=operations.begin(); it3 != operations.end()+1; it3++){
        auto it=tab2.begin();
        it3 = operations.begin();
        if(it != tab2.end()+1){
            if(*it3 == "+"){
                add(*it,*(++it));
                operations.erase(it3);
            }
            if(*it3 == "-"){
                substract(*it,*(++it));
                operations.erase(it3);
            }
            if(*it3 == "*" ){
                multiplication(*it,*(++it));
                operations.erase(it3);
            }
            if(*it3 == "/"){
                division(*it,*(++it));
                operations.erase(it3);
            }
            if(*it3 == "="){
                cout << "The result is: "<<results<<endl;
                return results;
            }
            for(int i=0;i<2;i++){
                tab2.erase(it);
            }
        }
    }
    return 0;
}
    void calculator::setNumber(int a){
        tab2.push_back(a);
    }
    void calculator::setOperationToTest(string b){
    operations.push_back(b);
    }


