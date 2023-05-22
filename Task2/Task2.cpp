#include <iostream>

struct account
{
    int id;
    std::string name;
    float balance;
};

void account_update(int &id, float &new_balance)
{
    account p;
    p.balance = new_balance;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    account person;
    std::cout << "Введите номер счета: ";
    std::cin >> person.id;
    std::cout << "Введите имя владельца: ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> person.balance;
    
    account_update(person.id, person.balance);
    
    std::cout << "Ваш счёт: " << person.name << ", " << person.id << ", " << person.balance << std::endl;

    return 0;
    
}
