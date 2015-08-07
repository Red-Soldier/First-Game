#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <CONIO.H>

int main(){
    int coin;
    int guess;
    srand(time(NULL));
    std::cout << "Heads or tails?" << std::endl;
    std::cout << "Heads: 1" << std::endl;
    std::cout << "Tails: 2" << std::endl;
    std::cin >> guess;
    coin=rand()%2+1;
    if(coin==1){
        if(guess==1){
            std::cout << "Heads! You win!";
        }else{
            if(guess==2){
                std::cout << "Heads, you lose.";
            }
        }
    }else{
        if(coin==2){
            if(guess==1){
                std::cout << "Tails, you lose.";
            }
            if(guess==2){
                std::cout << "Tails! You win!";
            }
        }else{
            std::cout << "Invalid input.";
        }
    }
getch();
}
