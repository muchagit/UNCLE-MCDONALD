#include<iostream>
#include<string>

int main()
{
    int a = 0;
    int b = 0;
    int length = 0;
    int area = 0;
    std::string command = "";
    std::cout<<"Do you want to run a program? Insert RUN."<<std::endl;
    std::cin>>command;
    
    while(command != "RUN")
    {
        std::cout<<"Wrong command, please insert a proper one :)"<<std::endl;
        std::cin>>command;
    }
    
    std::cout<<"What is the length of the fence?"<<std::endl;
    std::cin>>length;
    
    while((std::cin.fail())||(length<3))
    {   
        std::cout<<"Length must be a positive number greater than 2, please insert a correct length :)"<<std::endl;
        std::cin.clear();
        std::cin.ignore();
        std::cin>>length;
    }
    
    if(length % 4 == 3)
    {
        length+=1;
        a = length/4;
        length-=1;
        b = length - 2*a;
    }
    else
    {
        a = length/4;
        b = length - 2*a;
    }
    
    std::cout<<"a = "<<a<<", "<<"b = "<<b<<std::endl;
    area = a*b;
    std::cout<<"Optimal area is equal to = "<<area<<std::endl;
    return 0;
}
