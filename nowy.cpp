#include <string>
#include <iostream>
#include <bitset>

// char* intToStr(int data) {
//     std::string strData = std::to_string(data);

//     char* temp = new char[strData.length() + 1];
//     strcpy(temp, strData.c_str());

//    return temp;
// };

void printBits( unsigned int n )
{
    const int Bits = 8 * sizeof n;
    char tmp[ Bits + 1 ];
   
    for( int i = 0; i < Bits; ++i )
    {
        tmp[ Bits - i - 1 ] = '0' + n % 2;
        n /= 2;
    }
   
    tmp[ Bits ] = 0;
    std::cout << tmp << std::endl;
}

void printBitsByMask(unsigned int myInt)
{
  const int nrOfBits = 8 * sizeof myInt;
  unsigned int mask = 1;
  char tab[ nrOfBits + 1 ];

  for( int i=0; i < nrOfBits; i++)
  {
    if ((myInt & mask) != 0)
      tab[nrOfBits-i-1] = '1';
    else
      tab[nrOfBits-i-1] = '0';
    mask = mask << 1;
  }

  tab[ nrOfBits ] = 0;    // end of char tab
  
  std::cout << tab << std::endl;
}


int main(){

// std::cout << intToStr(1) << std::endl;

unsigned int myInt = 255;    // 4 bytes

const int nrOfBits = 8 * sizeof myInt;
std::cout << "Sizeof: " << nrOfBits << std::endl;   // 4 bytes

std::string s = std::bitset< 64 >( myInt ).to_string(); // string conversion

std::cout << "Size: " << s.size() << std::endl;
std::cout << s << std::endl;

std::cout << std::bitset< 64 >( myInt ) << std::endl; // direct output

// std::bitset< 64 > input;
// std::cin >> input;
// unsigned long ul = input.to_ulong();

std::cout << "A teraz printBits:\n";
printBits(myInt);

std::cout << "A teraz pribnt by mask:\n";
printBitsByMask(myInt);

std::cout << "Koniec\n";

}