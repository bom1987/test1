#include <iostream>
int func(int x){
   x= x*x;
   // std::cout<<x;
    return x;
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    int n = 2;

    int & z = n;
    int wynik = func(n);
    std::cout<<wynik;
    return 0;


}