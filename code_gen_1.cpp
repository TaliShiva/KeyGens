#include <iostream>
#include <cstdlib>
#include <ctime>

// Simple key-gen for crackme from https://crackmes.one/crackme/5ab77f5a33c5d40ad448c50a

int main() {
std::srand(unsigned(std::time(0)));
int i_cock1 = std::rand() % 100;
char ch_cock2 = (char)((std::rand() * 2) %25 + 60 ); 
int i_cock3 = i_cock1 *20 + 318 ;
char ch_cock4 = (char)(std::rand() % 25 + 60);
int i_cock5 = i_cock3 + 509 + i_cock1*4;
std::cout <<i_cock1 << ch_cock2 << i_cock3 << ch_cock4 << i_cock5 << std::endl;
system("PAUSE");
}