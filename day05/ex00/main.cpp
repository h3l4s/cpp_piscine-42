#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat test1("wassim", 1);
        Bureaucrat test2("gildas", 150);
        Bureaucrat test3("adam", 100);
        std::cout << "--------------------" << std::endl;
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        test1.upNote();
        test2.downNote();
        test3.downNote();
        std::cout << "--------------------" << std::endl;
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        test1.downNote();
        std::cout << "--------------------" << std::endl;
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        test1.downNote();
        std::cout << "--------------------" << std::endl;
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        test1.downNote();
        std::cout << "--------------------" << std::endl;
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        std::cout << "--------------------" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}