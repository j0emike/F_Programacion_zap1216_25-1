// P017_Matrices.cpp : by j0emike
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


int main()
{
    srand(static_cast<unsigned>(time(0)));

    int edades[3][2] = { {1,2},{9,8},{14,21} };
    int filas = (sizeof(edades) / sizeof(edades[0]));
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    int matriz[3][3] = {};
    int matriz2[5][5] = {};
    int matriz3[10][10] = {};
    int opcion = 0;
    //TO DO: En el llenado me falta decir que se imprimio en cada posicion


    do
    {
        system("cls");
        std::cout << "Que matriz deseas ver?" << std::endl;
        std::cout << "1. 3x3     2.5x5" << std::endl;
        std::cout << "3. 10x10   4.3x2" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            //3x3
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matriz[i][j] = (rand() % 10) + 1;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    std::cout << std::setw(4) << matriz[i][j] << " ";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
            break;
        case 2:
            //5x5
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    matriz2[i][j] = (rand() % 10) + 1;
                }
            }
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    std::cout << std::setw(4) << matriz2[i][j] << " ";
                }
                std::cout << std::endl;
            }
            break;
        case 3:
            //10x10
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    matriz3[i][j] = (rand() % 10) + 1;
                }
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    std::cout << std::setw(4) << matriz3[i][j] << " ";
                }
                std::cout << std::endl;
            }
            break;
        case 4:
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 2; j++) {
                    std::cout << std::setw(8) << std::fixed << std::setprecision(2) << matriz[i][j] << " ";
                }
                std::cout << std::endl;
            }
            break;
        default:
            break;
        }
        system("pause");
    } while (opcion != 0);
    
}