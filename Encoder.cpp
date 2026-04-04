#include <iostream>
using namespace std;

std::string encode;
int encodeo;
bool contin = true;
int main() 
{
    while (contin){
      std::cout << "write the letter you want to encode or write exit to stop";
      std::cin >> encode;
      if (encode == "a"){
        encodeo = 29;
      }
      if (encode == "b"){
        encodeo = 28;
      }
      if (encode == "c"){
        encodeo = 27;
      }
      if (encode == "d"){
        encodeo = 26;
      }
      if (encode == "e"){
        encodeo = 25;
      }
      if (encode == "f"){
        encodeo = 24;
      }
      if (encode == "g"){
        encodeo = 23;
      }
      if (encode == "h"){
        encodeo = 22;
      }
      if (encode == "i"){
        encodeo = 21;
      }
      if (encode == "j"){
        encodeo = 20;
      }
      if (encode == "k"){
        encodeo = 19;
      }
      if (encode == "l"){
        encodeo = 18;
      }
      if (encode == "m"){
        encodeo = 17;
      }
      if (encode == "n"){
        encodeo = 16;
      }
      if (encode == "o"){
        encodeo = 15;
      }
      if (encode == "p"){
        encodeo = 14;
      }
      if (encode == "q"){
        encodeo = 13;
      }
      if (encode == "r"){
        encodeo = 12;
      }
      if (encode == "s"){
        encodeo = 11;
      }
      if (encode == "t"){
        encodeo = 10;
      }
      if (encode == "u"){
        encodeo = 9;
      }
      if (encode == "v"){
        encodeo = 8;
      }
      if (encode == "w"){
        encodeo = 7;
      }
      if (encode == "x"){
        encodeo = 6;
      }
      if (encode == "y"){
        encodeo = 5;
      }
      if (encode == "z"){
        encodeo = 4;
      }
      if (encode == "å"){
        encodeo = 3;
      }
      if (encode == "ä"){
        encodeo = 2;
      }
      if (encode == "ö"){
        encodeo = 1;
      }
      if (encode == " "){
        encodeo = 30;
      }
      
      encodeo = encodeo * 67;
      encodeo = encodeo + 367;
      encodeo = encodeo * 67;
      cout << encodeo;
      cout << "\n";
    }
    return 0;
}