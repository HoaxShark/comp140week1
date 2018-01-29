// WeekOneSingleResponsibilty.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"

int main()
{
	Player player1; // creates on the stack

	Player* player2 = new Player(); // creates on the heep, must be manually deleted

	int currentHealth = player1.GetHealth(); // use the . when on the stack

	int currentHealth2 = player2->GetHealth(); // use -> when on the heep

	if (player2) // deletes player2 and clears the pointer
	{
		delete player2; // calls the deconstrutor in Player
		player2 = nullptr; // clears the pointer so that any other checks show it's deleted
	}

    return 0;
}

