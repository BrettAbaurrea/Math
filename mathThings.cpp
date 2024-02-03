/*
*   Random math things I need
*/

#include <iostream>
#include <stdlib.h> //rand

int main()
{
    //coin flip
    srand(time(NULL));
    int tossTracker = 0;
    int flipAmt = 0;
    int numHeads = 0;
    int numTails = 0;

    std::cout << "How many flips? ";
    std::cin >> flipAmt;
    std::cout << "Tossing.....\t\n";
    do{
        int flip = (rand()%2);
        std::cout << flip;
        tossTracker++;
        if (flip == 0){
            numHeads++;
        }
        else if (flip == 1){
            numTails++;
        }
        else
            return 0;
    }while (tossTracker <= flipAmt);

    std::cout << "\nHeads: " << numHeads << "\n";
    std::cout << "Tails: " << numTails << "\n";



    return 0;
}
