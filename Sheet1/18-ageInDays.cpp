#include <iostream>
int main() {
        int count;
        std::cin >> count;
        double year = count / 365;
        int month = (count % 365) / 30;
        int day =  ((count % 365) % 30);
        std::cout << year << " years\n" << month << " months\n"
        << day << " days"; 
      return 0;
}