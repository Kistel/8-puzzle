
#include <iostream>
#include "PuzzleTree.h"
#include "PriorityQueue.h"
using namespace std;
//prototype of function EnterState
void EnterState (char [][3]);


int main ()
{
  char parray [3][3];// two-D array

  cout << "Name: Kistel Hazel" << endl;
  cout << "Artificial Intelligence" << endl;
  cout << endl;
 
  EnterState(parray);//allows user to enter initial state
 PuzzleTree game(parray);// sets root of tree to initial state


 //checks to see if state is solvable
   if(game.Solvable() == true)
	 {
		 game.run(); // runs 8 puzzle
	 }
	 else //allows user to re-enter state if it is not solvable
	{
		 while(game.Solvable() == false)
		{
			cout<< game.Solvable()<<endl;
			cout << "Initial State is not solvable. Please enter a new state" << endl;
			EnterState(parray);
			game.ResetRoot(parray);// sets root of tree to initial state
			
		}
		 game.run();
		 cout << "GAME IS OVER" << endl;
	}
 

 system("pause");
 return 0;

}

//---------------------------------------------------------------------
// This function allows user to enter the initial state
// @Param: char initial [][3]-two-D array
// @Returns: void
//---------------------------------------------------------------------
void EnterState (char initial[][3])
{
	  cout << "Please enter the initial state for the 8 puzzle game" << endl;

	for(int i = 0; i < 3; i++)
	 {
		 for(int j = 0; j < 3 ; j++)
		{
			 cin >> initial[i][j];
		}
	
	}

}

