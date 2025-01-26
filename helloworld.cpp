#include <iostream>
#include <ctime>

int main (){
       
        srand(time(0));
        int randNum = (rand() % 10) + 1;
        int number;

        std::cout<<"***********GUESS THE NUMBER***************"<<'\n';

        std::cout<< "Guess the number from 1-10: "<< '\n';
        std::cin >> number;

        if(!(number==)){
                std::cout<<"Yo've guessed the correct number";
        }
        else if(number==string){

        }
}