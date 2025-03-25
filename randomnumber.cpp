#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0)); //using the random number generator
    int randomnumber = rand() % 100 + 1;
    int userGuess;

    cout<<"Welcome to the number Gussing Game!"<<endl;
    cout<<"I have chosen a number between 1 to 100. Try to guess it!"<<endl;

    //using loop until the user guess the correct number
    while(true) {
        cout<<"Enter your guess number:";
        cin>>userGuess;
         
        //Checking the number is perfect or not.
        if(userGuess > randomnumber)
        {
            cout<<"To high! Try again."<<endl;
        } 
        else if(userGuess < randomnumber)
        {
            cout<<"Too low! Try again."<<endl;
        }
        else
        {
            cout<<"Congratulations! You guessed the correct number: "<<randomnumber<<endl;
            break;
        }
    }
    return 0;
}