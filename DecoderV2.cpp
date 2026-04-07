#include <iostream>
using namespace std;
std::string message;
double encode;
bool contin = true;
std::string sk;

void decodeLetter(int encode){
  encode = encode / 67;
  encode = encode -367;
  encode = encode / 67;
  if (encode == 1){
    message += "ö";
  }
  if (encode == 2){
    message += "ä";
  }
  if (encode == 3){
    message += "å";
  }
  if (encode == 4){
    message += "z";
  }
  if (encode == 5){
    message += "y";
  }
  if (encode == 6){
    message += "x";
  }
  if (encode == 7){
    message += "w";
  }
  if (encode == 8){
    message += "v";
  }
  if (encode == 9){
    message += "u";
  }
  if (encode == 10){
    message += "t";
  }
  if (encode == 11){
    message += "s";
  }
  if (encode == 12){
    message += "r";
  }
  if (encode == 13){
    message += "q";
  }
  if (encode == 14){
    message += "p";
  }
  if (encode == 15){
    message += "o";
  }
  if (encode == 16){
    message += "n";
  }
  if (encode == 17){
    message += "m";
  }
  if (encode == 18){
    message += "l";
  }
  if (encode == 19){
    message += "k";
  }
  if (encode == 20){
    message += "j";
  }
  if (encode == 21){
    message += "i";
  }
  if (encode == 22){
    message += "h";
  }
  if (encode == 23){
    message += "g";
  }
  if (encode == 24){
    message += "f";
  }
  if (encode == 25){
    message += "e";
  }
  if (encode == 26){
    message += "d";
  }
  if (encode == 27){
    message += "c";
  }
  if (encode == 28){
    message += "b";
  }
  if (encode == 29){
    message += "a";
  }
  if (encode = 30){
    message += " ";
  }
}

int main() 
{
  while (contin){
    string dele;
    int ph;
    string ebo;
    cin >> dele;
    int lgt = dele.length();
    for (int plc = 0; plc < lgt; plc++){
      if (dele[plc] == '.'){
        ph = stoi(ebo);
        decodeLetter(ph);
        ebo = "";
      }
      else{
        //cout << "hi";
        ebo.push_back(dele[plc]);
      }
    } 
    std::cout << "decode more y/n";
    std::cin >> sk;
    if (sk == "n"){
      cout << "\n";
      std::cout << message;
      contin = false;
    }
  }
    return 0;
}