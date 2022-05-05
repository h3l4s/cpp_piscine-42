#include "Form.hpp"

int main()
{
    try{
        Bureaucrat test1("wassim", 1);
        Bureaucrat test2("gildas", 150);
        Bureaucrat test3("adam", 100);
        Form    facture1("eau", 100, 25);
        Form    facture2("tel", 20, 10);
        std::cout << "--------------------" << std::endl;
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        test1.downNote();
        test2.upNote();
        test3.upNote();
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        std::cout << facture1 << std::endl;
        std::cout << facture2 << std::endl;
        //test2.signForm(facture1);
        test3.signForm(facture1);
        test1.signForm(facture1);
        //test2.signForm(facture2);
        //test3.signForm(facture2);
        test1.signForm(facture2);

        Form    crash("not good", 100, 0);
        std::cout << facture1 << std::endl;
        std::cout << facture2 << std::endl;
        std::cout << "--------------------" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "--------------------" << std::endl;
        std::cout << e.what() << std::endl;
    }
    return 0;
}