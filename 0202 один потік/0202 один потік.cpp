
#include <iostream>
#include <thread>

void displayNumbers() 
{
    for (int i = 0; i <= 9; i++)
    {
        std::cout << i << std::endl;
    }
    for ( char i = L'a'; i <= L'f'; i++)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    system("chcp 1251>null");
    std::thread t(displayNumbers);
    t.join();
    std::cout<<"Головний потік закінчив виконання"<< std::endl;

}
