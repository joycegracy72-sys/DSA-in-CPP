#include<iostream>
class add{
  public:
   int x;
   add(int p){
     x=p;
   }
   add operator+(add const &y){
    int total=x +y.x;
    return add(total);

   }
};
int main()
{
add a(18);
add b(20);

add c=a+b;
std::cout<<"total :"<<c.x<<std::endl;
};