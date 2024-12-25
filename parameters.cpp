#include <iostream>
using namespace std;

class car{
  public:
  int speed(int maxspeed);
};

int car::speed(int maxspeed){
  return maxspeed;
}

int main(){
  car ICT;
  cout<<"The maximum speed of ICT is: "<<ICT.speed(180);
  
  return 0;
}