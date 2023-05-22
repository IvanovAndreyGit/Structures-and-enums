
#include <iostream>

struct address
{
    std::string city;
    std::string street;
    int house_num;
    int aprt_num;
    int postcode;
};

void print_address(address addr)
{
    std::cout << "Город: " << addr.city << "\n";
    std::cout << "Улица: " << addr.street << "\n";
    std::cout << "Номер дома: " << addr.house_num << "\n";
    std::cout << "Номер квартиры: " << addr.aprt_num << "\n";
    std::cout << "Индекс: " << addr.postcode << "\n";
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    address domain_mow;
    address domain_udm;

    domain_mow.city = "Москва";
    domain_mow.street = "Арбат";
    domain_mow.house_num = 12;
    domain_mow.aprt_num = 8;
    domain_mow.postcode = 123456;

    domain_udm.city = "Ижевск";
    domain_udm.street = "Пушкина";
    domain_udm.house_num = 59;
    domain_udm.aprt_num = 143;
    domain_udm.postcode = 953769;

    print_address(domain_mow);
    print_address(domain_udm);

    return 0;
}
