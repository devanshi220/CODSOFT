#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    char playagain;
    std::srand(std::time(0));
    int goal=std::rand()%100+1;
    int guess=0;
    int tries=0;
    std::cout<<"Guess a number between 1-100"<<std::endl;
    while(guess!=goal){
        std::cout<<"Enter number\n";
        std::cin>>guess;
        tries++;
        if(guess<goal){
            std::cout<<"TOO LOW.try again\n";

        }
        else if(guess>goal){
          std::cout<<"TOO HIGH.try again.\n";
        }
        else{
            std::cout<<"Congrats.You guessed correct number in\t"<<tries<<"tries\n";
        }
    }

    return 0;
}