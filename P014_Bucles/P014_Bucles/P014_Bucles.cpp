// P014_Bucles.cpp : j0emike
//

#include <iostream>
#include <thread>
#include <chrono>

int main()
{
    using namespace std::chrono_literals;
    for (int i = 1000; i >= 0; i--) {
        std::cout << i << std::endl;
    }
    system("pause");
    system("cls");
    int i = 1000;
    while (i >= 0) {
        std::cout << i << std::endl;
        i--;
    }
    system("pause");
    system("cls");
    i = 1000;
    do {
        std::cout << i << std::endl;
        i--;
    } while (i >= 0);
    system("pause");
    system("cls");
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << " ";
        if (i % 10 == 0) {
            std::cout << std::endl;
        }
    }
    system("pause");
    system("cls");
    for (int i = 1; i <= 100; i++) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(.125s);
    }

}
