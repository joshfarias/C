/*******************************************************************
#
# Program Name: GuessNumber.c
#
# Description: Generates a random number between 0-100 and
# prompts user to guess the generated number giving feedback that
# is relative the the user's guess.
#
# Language: C
#
# Date: 3/13/2023 
#
# Author: Joshua Farias
#
******************************************************************/

//header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int guess, num, tries = 0; //declare int variables for the user's guess, the random number, and the number of tries
  srand(time(NULL)); //seed the random number generator with the current time
  num = rand() % 100 + 1; //generate a random number between 1 and 100 and store it in the num variable
  
  printf("Welcome to the number guessing game!\n");
  
  do { //start loop that will continue until the user guesses the correct number
    printf("Guess a number between 1 and 100: "); //prompt user to guess a number
    scanf("%d", &guess); //read in the user's guess using scanf() and store it in the guess variable
    tries++; //increment the number of tries
    
    if (guess < num) { //check if the guess is too low
      printf("Too low! Try again.\n");
    }
    else if (guess > num) { //check if the guess is too high
      printf("Too high! Try again.\n");
    }
    else { //if guess is correct
      printf("Congratulations! You guessed the number %d in %d tries.\n", num, tries);
    }
    
  } while (guess != num); //continue loop until the user guesses the correct number
  
  return 0; //end of program
}
