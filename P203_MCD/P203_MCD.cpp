// P203_MCD.cpp : by j0emike

#include <iostream>


int mcd(int a, int b) {            
    if (b == 0) {                
        return a;  
    }
    else {
        return mcd(b, a % b);

    }
}

int main() {
    int a, b;

    std::cout << "Dame 2 numeros y calculare su MCD" << std::endl;
    std::cin >> a >> b;

    std::cout << mcd(a, b);

}