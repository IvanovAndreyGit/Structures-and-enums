// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum months {
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
            };

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> n;
        static_cast<enum months>(n);
        if (0 <= n && n < 13)
        {
            switch (n)
            {
            case (months::Jan):
                std::cout << "Январь\n";
                break;
            case (months::Feb):
                std::cout << "Февраль\n";
                break;
            case (months::Mar):
                std::cout << "Март\n";
                break;
            case (months::Apr):
                std::cout << "Апрель\n";
                break;
            case (months::May):
                std::cout << "Май\n";
                break;
            case (months::Jun):
                std::cout << "Июнь\n";
                break;
            case (months::Jul):
                std::cout << "Июль\n";
                break;
            case (months::Aug):
                std::cout << "Август\n";
                break;
            case (months::Sep):
                std::cout << "Сентябрь\n";
                break;
            case (months::Oct):
                std::cout << "Октябрь\n";
                break;
            case (months::Nov):
                std::cout << "Ноябрь\n";
                break;
            case (months::Dec):
                std::cout << "Декабрь\n";
                break;
            case (0):
                std::cout << "До свидания";
                exit;
            }
        }
        else
        {
            std::cout << "Неправильный номер!" << std::endl;
        }
    } while (n);
    
    return 0;

}

