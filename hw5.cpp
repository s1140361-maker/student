#include <iostream>

int main()
{
    std::cout<<"請輸入年齡";
    int age;
    std::cin>>age;
    if (age >=18) {
      std::cout<<"你可以觀看";
    }
    if(age <18){
         std::cout<<"狗屎";
      }
    return 0;
}