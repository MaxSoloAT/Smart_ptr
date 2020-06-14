#include "test.h"
#include <iostream>

test::test(){
    std::cout<<"Create Test"<<std::endl;
}
test::~test(){
    std::cout<<"Delete Test"<<std::endl;
}
void test::info(){
    std::cout<<"info"<<std::endl;
}
