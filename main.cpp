#include "test.h"
#include <memory>
#include <iostream>
int main()
{
    //new space for unique_ptr
    {
        std::unique_ptr<test> unique_Test = std::make_unique<test>();
        unique_Test->info();
    }
    std::cout<<std::endl;
    //new space for shared_ptr
    {
       std::cout<<"first scope"<<std::endl;
       std::shared_ptr<test> F_shared_Test;
        {
            std::shared_ptr<test> S_shared_Test = std::make_shared<test>();
            F_shared_Test = S_shared_Test;

        }
        std::cout<<"second scope"<<std::endl;
    }

    std::cout<<std::endl;
    //new space for weak_ptr
    {
       std::cout<<"first scope"<<std::endl;
       std::weak_ptr<test> F_shared_Test;
        {
            std::shared_ptr<test> S_shared_Test = std::make_shared<test>();
            F_shared_Test = S_shared_Test;

        }
        std::cout<<"second scope"<<std::endl;
    }

    std::system("pause");
    return 0;
}
