<<<<<<< HEAD
=======
//Contributors
//Garrett Poppe 3/19/18
//Diana Guevara-Colocho 3/31/2018
//
//Dylan Dickerson 3/21/18
//Brian Baskovich 3/21/18
//Mahir Eldaw 3/21/18
//Salvador Rodriguez 4/04/2018
//Joseph Moreno
//Maik De Leon Lopez 3/21/18
//Kevin Ramirez
//Cesar Gutierrez 4/2/18

//Emanuel Fonseca
//Erick Cabanban 4/9/18



>>>>>>> upstream/master
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#include <math.h>
#include <unistd.h>
//#include <string.h>
#include <time.h>

#define CORRECTCODE 1775

// function prompts


case 21:
{
	//int choice = 0;
	//puts("What door do you choose?");
	//scanf("%d", &choice);

	while(choice != 99)
	{
		int equipment = 0;
		int combatEvent = 0;
		int randomNumber = 0;
		int dead = 0;

		int HP = 10;
		int enemyHP = 10;
		int totalHP = 10;
		int totalEnemyHP = 10;

		//rifle, shotgun, grenade, 45 DMG
		int weaponDMG[4] = { 4, 6, 8, 5 };
		int attackDMG = 0;
		int weaponChoice = 0;

		//bite, claw, tail swipe DMG
		int enemyWeaponDMG[3] = { 6, 5, 6 };
		int enemyAttackDMG = 0;
		int randomEnemyChoice = 0;

		int inputedCode = 0;

		srand(time(NULL));

		puts("You see yellow footprints leading into Room #21 and you choose to open it");

		puts("As you close the door, red lights are blinking, and you hear \"ALL UNITS GET TO YOUR DESIGNATED EXITS, TAKE YOUR RIFLES OFF SAFETY, and LOCK n' LOAD!!\" ");
	       	puts("You have been transported to the Stallion 475-AXB Shock Transport above Planet Necrotix in Galaxy Traxor");
		puts("You are part of a Special Recon Unit with the specific mission to  destroy the Necrotin Queen Hive");
		
		
		puts("Choose your fate:");
		puts("Enter 1 for Shock Troop equipment");
		puts("Enter 2 for Stealth equipment");

		scanf("%d", &equipment);

		if(equipment == 1)
		{
			puts("You have a Rifle, Shotgun, 2 Hand Grenades, and a .45");

<<<<<<< HEAD
		}
		else if(equipment == 2)
		{
			puts("You have a silenced SMG, a silenced 9mm, 1 Smoke Grenade, 1 Flash Grenade, and a Knife");
		}
	
		switch(equipment)
		{
=======
							puts("You open the door and find a dog");
							puts("At this point you have 3 choices: Please enter a number 1-3");
							puts("1. Pet the dog");
							puts("2. Feed the dog with the peanut butter sandwich you have in your hand");
							puts("3. Run away.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You pet the dog and he seems happy.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You try and feed the dog but the dog seems like he is not hungry");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You run away but the dog barks.");
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3: // ELTHON CISNEROS'S ROOM 
			{
					while(choice != 99)
					{
							//int input;
							printf ("\n");
							printf("***This is Room 3.***\n ");
							printf ("You walk into a strangely bright and colorful room. However, you see 4 untitled buttons on a table...\n");
							printf ("Keep in mind: There are hidden doors within this bright and colorful room. The only thing keeping these doors open is the power. Would be a mighty shame (for you) if there was a power outage!\n");
							printf ("Above the buttons a sign reads: You may choose press one button to determine your fate. To not keep you in total suspense, an LCD display on the wall will vaguely let you know what just happened after you pressed this button:\n");
							scanf ("%d", &choice);

							switch (choice)
							{
								case 1:
									printf ("\n");
									printf("***Ya done messed up! Looks like this wasn't the number one choice you thought it was... This room will start filling with water now... Hope you know how to swim!!! :D *** \n");
									puts ("Well, this room may be filling up with water, but I can give you a fighting chance by giving you ONE tool of your choice that may help you escape OR KILL YOU... Type in your choice wisely (1-4)...");
									scanf ("%d", &choice);

									while (choice != 99)
									{
										switch (choice)
										{
											case 1:
												puts ("I have granted you a spear... Maybe you can make a hole in the door?");
												break;
											case 2:
												puts ("I have granted you an oxygen tank and scuba suit...");
												break;
											case 3:
												puts ("HAHAHAH!!! You pressed the wrong button! Now the room will fill up with water even quicker...");
												break;
											default:
												puts ("For once, being incorrect has saved you... The room has stopped filling with water.");
												break;
										}
										break;
									}
									break; //end switch
								case 2:
									printf ("\n");
									printf ("***You survive. Now, get out of my room!***\n");
									break;
									// you may choose another card
								case 3:
									printf ("\n");
									printf ("***You got lucky. You have been granted permission to press more buttons! Sounds like fun...***");
									scanf ("%d", &choice);
									break;
								case 4:
									printf ("\n");
									printf ("***This button just cut power to lights in the room (as well as those hidden doors I mentioned before). Hope you like the dark and tigers...***\n");
									while (choice != 99)
									{
										puts ("Display reads: Power has been cut to this room. You will be given one chance to either escape from this room alive or not. Let's play some trivia. Being one myself, I like computers, so I would like you to guess what year Gottfried Leibniz invented binary");
										scanf ("%d", &choice);
										while (choice != 1679)
										{
											puts ("Oops! WRONG!!!!! Guess again!");
											scanf ("%d", &choice);
											puts ("Until you correctly guess Leibniz invented binary, you will be trapped in this room in particular!!! Well, that may be a bit harsh. I will give you one clue: 'late 1600's'");
										
										}
										puts ("~~~YOU GUESSED CORRECTLY!~~~ You are one smart cookie! You get to escape...");
										break;	
									
									}
									break;
								default:
									while (choice != 99)
									{
										puts ("Choose a new door to explore....");
										scanf ("%d", &choice);
									
									}
									break;
	
							}
							break; // added
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
						int chest = 0;
						char room5 = 'a';
						puts("Welcome to room #5");
						
						printf("Enter which chest to open\n");
						puts("Enter 1 for Red Chest");
						puts("Enter 2 for Blue Chest");

						scanf("%d", &chest);

						if(chest == 1)
						{
							puts("A dragon has incinerated you!");
							puts("Game over");
						}
						if(chest == 2)
						{
							puts("You have found the Princess");
							puts("The King has offered you a grand reward");
							puts("Do you accept the Kings reward? y-yes n-no");
							scanf(" %c", &room5);
							if(room5 == 'y')
							{
								puts("CONGRATULATIONS you have married the Princess");
							}
							if(room5 == 'n')
							{
								puts("The King has killed you");
							}
						}
						break;
					}
					
			}
			case 6:
			{
					while(choice != 99)
					{
							int select;
							puts("You enter the room and close the door to prevent the water from flowing in. Looking around you find a well at the center with no rope, sealed crates at the corner of the room, a locked door at the other side, a crack in the wall, and a pile of clothes next to the well. What would you like to investigate?\n1. The well\n2. The crates\n3. The door\n4. The crack\n5. The clothes");
							scanf("%d",&select);
							while(select != 5) {		
								switch(select) {
									case 1:
										puts("The well is made of stone and holds still water at the very bottom. You see a shiny object.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 2:
										puts("The crates are shut tight and is impossible to open without a specific tool.\nWhere else would you like to investigate?");										scanf("%d",&select);
										break;
									case 3: 
										puts("The door will not yield by brute force, you require a key to move forward.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 4:
										puts("The crack has an opening just enough to view into a small closet. It seems like the closet was a part of the room.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid place to investigate, please pick a number from 1 to 5.");
										scanf("%d",&select);
										break;
								}
							}
											
							puts("You find a small chisel and hammer within the clothes. Perhaps this person was a carpenter. You decided to take them.");
							puts("With your newly acquired hammer and chisel, you think of some ideas on how to use the hammer and chisel. What would you like to use the hammer and chisel on?\n1. The well\n2. The crates\n3. The door\n4. The crack");
							scanf("%d",&select);
							while(select != 4) {
								switch(select) {
									case 1:
										puts("You use the hammer and chisel on the well and broke the well, causing it to collapse in on itself. That did not go so WELL, You lose.");
										exit(EXIT_SUCCESS);
									case 2:
										puts("You use the crates but it does nothing more than give you splinters.\nWhat would you like to use the hammer and chisel on?");
										scanf("%d",&select);
										break;
									case 3:
										puts("You use the hammer and chisel on the door and it does not work.\nWhat would you like to use the hammer and chisel on?");
										scanf("%d",&select);
										break;
									case 5:
										puts("Despite not listing the clothes as an option, you decided to be a rebel and use the hammer and chisel on the pile of clothes anyway. You somehow tear the clothes using the hammer and chisel and found a key embedded into the clothes. You use the key on the locked door and discovered it worked! You escaped!");
										exit(EXIT_SUCCESS);
									default:
										puts("That is not a valid choice, please pick a number from 1 to 5");
										scanf("%d",&select);
										break;
								}
							}
>>>>>>> upstream/master

			case 1: // Shock troop
				
				puts("Get ready, your landing is emminent...");
				sleep(3);		
				puts("As the Space Craft lands, you are the first to put boots on ground and rush to the closest Necrotin");
				puts("You engage in combat with the Necrotin");

				puts("Choose a number between 1 - 3 which will decide whether you attack first, the Necrotin attacks first, or some random combat related incident happens");

				scanf("%d", &combatEvent);

					//int correctCode = 1775;
					//int inputedCode = 0;

				switch(combatEvent)
				{
				
					case 1:
					// random incident
						puts("The new guy shoots at the alien, unfortunately your head was in his line of sight...");
						dead = 1;
						break;

					case 2:
					
						// You attack first
						puts("Choose your weapon: 1) Rifle 2) Shotgun");
						scanf("%d", &weaponChoice);
							
						switch(weaponChoice)
						{
							case 1:
								// rifle
								while(1)
								{
									//printf("weaponDMG[0] = %d\n", weaponDMG[0]);
									enemyHP = (rand() % weaponDMG[0]) + 1;
									//printf("enemyHP: %d\n", enemyHP);
									totalEnemyHP = totalEnemyHP - enemyHP;
									printf("You injured the Necrotin for %d HP\n", enemyHP);
									printf("The Necrotin has %d HP left!\n", totalEnemyHP);
									if(totalEnemyHP < 0)
									{
										puts("You slayed the beast, now keep pushing to the Hive!");
										break;
									}
									
									randomEnemyChoice = ( rand() % 2 );
									HP = (rand() % enemyWeaponDMG[randomEnemyChoice]) + 1;
									totalHP = totalHP - HP;
									printf("The Necrotin injured you for %d HP\n", HP);
									printf("You have %d HP left!\n", totalHP);
									
									if(totalHP < 0)
									{
										puts("GG your alien food...");
										dead = 1;
										break;
									}	

							
								}
								break;
						
							case 2:
						
								// shotgun
								while(1)
								{
									enemyHP = (rand() % weaponDMG[1]) + 1;
									totalEnemyHP = totalEnemyHP - enemyHP;
									printf("You injured the Necrotin for %d HP\n", enemyHP);
									printf("The Necrotin has %d HP left!\n", totalEnemyHP);
									if(totalEnemyHP < 0 )
									{
										puts("You slayed the beast, now keep pushing to the Hive!");
										break;
									}
									randomEnemyChoice = ( rand() % 2 );
									HP = (rand() % enemyWeaponDMG[randomEnemyChoice]) + 1;
									totalHP = totalHP - HP;
									printf("The Necrotin injured you for %d HP\n", HP);
									printf("You have %d HP left!\n", totalHP);

									if(totalHP < 0)
									{
										puts("GG your alien food...");
										dead = 1;
										break;
									}

<<<<<<< HEAD
								}
								break;
						}
						break;

					case 3:
			
						// Necrotin attacks first
						while(1)
						{
							randomEnemyChoice = ( rand() % 2 );
							HP = (rand() % enemyWeaponDMG[randomEnemyChoice]) + 1;
							totalHP = totalHP - HP;
							printf("The Necrotin injured you for %d HP\n", HP);
							printf("You have %d HP left!\n", totalHP);
							if(totalHP < 0)
=======
									else if(input==4)
									{
										puts("Welcome to Roll the Dice Game");
									}	

									else if(input==99)
									{
										puts("Thank You Come Again");
									}
		 						}
							}
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
						char newName[256];
						char quest[256];
						char color[256];
						char capital[256];
						char airVelocity[256];
						int i = 0;

						puts("You enter room 14 and the door closes behind you. You hear a click that tells you the door is sealed from the water outside, but also locked. The first thing you notice is that it's dark. Like, really dark. Darker than I like my coffee. And that's pretty dark. Anyway, you hear a disembodied voice that seems to come from everywhere. It tells you if you want to progress you must correctly answer all its questions.");
 						puts("He asks his first question: \"WHAT... is your name?\"");
						scanf("%s", newName);
						if(strcmp(name, newName) != 0)
						{
							puts("You die");
							break;
						}
        					puts("You hear an electric hum as the lights in the room turn on and begin to brighten. They're uncomfortably bright, like looking into the sun, but at least you can see. The room is qite large - larger than it should be considering how close the other doors were. Besides the lights, the room is completely and utterly undecorated. So much so it doesn't even have a door. Including the one you came through. Strange, isn't it?");
        					puts("\"WHAT... is your quest?\"");
        					scanf("%s", quest);
        					puts("\"WHAT... is your favorite color?\"");
        					scanf("%s", color);
						scanf("%s", color);
						// I have to put this second scan or else it just skips it. Idk why.
        					puts("\"WHAT... is the capital of Assyria?\"");
        					scanf("%[^\n]s", capital);
        					for(i = 0; i < 256; i++)
        					{
                					capital[i] = tolower(capital[i]);
        					}
        					if((strcmp(capital, "assur") != 0) && (strcmp(capital, "nineveh") != 0))
        					{
        					        puts("You die");
        					        break;
        					}
        					puts("\"WHAT... is the air speed velocity of an unladen swallow?\"");
						scanf("%[^\n]s", airVelocity);
        					for(i = 0; i < 256; i++);
        					{
        					        airVelocity[i] = tolower(airVelocity[i]);
        					}
        					if(strcmp(airVelocity, "whatdoyoumean?anafricanoreuropeanswallow?") != 0)
        					{
							puts("You die");
        					        break;
						}
						puts("On the side of the room opposite from where you entered, the wall slowly ascends like a garage door to reveal a bridge. You cross the bridge, and find yourself... back in the damn water room somehow.");
						break;
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
						        int userInput, trapAnswer;
							int wallet = 0;
       						        int userHealth = 50;
							int siren = 50;
							printf("Beginning Health: %d\n", userHealth);
							printf("Beginning Money: %d\n", wallet);
       							puts("Arriving in room 16, an empty cavern governed with sleeping bats, the noise of your footsteps jump off against the walls.");
						        puts("Towards the end, you can see light coming through, as if it were an exit.");
    						        puts("On your left looks to be a never ending cave.");
       						        puts("On your right you can hear what seems to be water rushing downwards.");
       					                puts("Pick a number between 1-3 to see which direction you fall in.");

       							scanf("%d", &userInput);

							if(userInput == 1)
							{
									printf("Walking towards the end of the cavern, the light becomes brighter and brighter.");
									puts("Upon entering, you are met with a room of variety of chests.");
									puts("Can you trust this mysterious treasure room? Choose between 1-5.");
								
									scanf("%d", &trapAnswer);
									if((trapAnswer == 1) || (trapAnswer == 3))
									{	
										printf("Opening the raggedy wooden chests, you are met with a flock of bats!");
										puts("You put your arms up in an attempt to protect yourself, resulting in wounds.");
										puts("The bats quickly leave the room. -10 HP from damage.");
									
										userHealth = userHealth - 10;
										break;
									}
									if((trapAnswer == 2) || (trapAnswer == 4))
									{
										userHealth = 0;
										puts("Upon opening the chest, you are met with an intoxicating vennoumous cloud!");
										puts("Having inhaled the fumes, your surroundings start to fade and your body become heavy.");
										puts("The room becomes dark as you meet your doom for being greeedy. Better luck next time!");
										printf("Health: %d\n", userHealth);
										break;
									}
									if(trapAnswer == 5)
									{
										puts("You found a chest with gold! You rightfully put the money in your wallet.");
										wallet = wallet + 35;
									}
									printf("Health: %d\n", userHealth);
									printf("Money: %d\n", wallet);
									break;
							}
							if(userInput == 2)
							{
								printf("Health: %d", userHealth);
								puts("Walking towards the never ending cavern, you try to get a feel of your surroundings.");
								puts("The more you walk, the more your surroundings become darker and darker...");
								while(userHealth != 0)
								{
									userHealth = userHealth - 5;
									if(userHealth == 0)
									{
										printf("As you keep walking, your body starts to get sluggish...");
										puts("Too late, it dawns on you that this cavern was filled with an odorless poison before falling over allowing death embrace your lifeless body...");
									}
								}
								break;
							}
							if(userInput == 3)
							{
								puts("Heading towards the sound of what is assumed to be water, you find a crystal clear lake!.");
								puts("Across from where your standing is a medium sized waterfall; yet you sense you are not alone.");
								puts("Moving cautiously close to the edge of the lake, you see creatures never before seen.");
								puts("One of the creatures peers her head out slowly creeping towards you.");
								puts("Shes the most beautiful being you have ever seen; and yet she has a fish tail?");
								puts("Before you can question her, she speaks; ");
								printf("Siren: What brings you to the Sirens Cove, human?");
								puts("As you try to explain yourself, you cant help but feel attracted to her voice...");
								puts("Choose between 1-3.");
								scanf("%d", &trapAnswer);
								if(trapAnswer == 1)
								{
									puts("You quickly come to your senses as you see her face inches away from yours!");
									puts("Quick thinking leads you to taking out your dagger and slashing at her!");
									puts("She screams out, scaring her comrades away!");
									puts("However, she immediately retaliates!");
									while(siren != 0)
									{
										printf("The fight goes on! You keep slashing her to kill her! Siren Health: %d\n", siren);
										siren = siren - 10;
										if(siren == 0)
										{
											puts("With one final blow, she cries out before turning into sea foam.");
											puts("You lose HP however gain money out of it.");
											userHealth = userHealth - 20;
											printf("Health: %d\n", userHealth);
											printf("Money: %d\n", wallet);
										}
									}
									break;
								}
								if(trapAnswer == 2)
								{
									puts("Youre eyes start to get heavy, her voice starting to sound like a dream.");
									puts("As you close your eyes you see her beautiful face become horrendous and pearly white teeth turn into decaying fangs!");
									puts("You try to scream but all you can hear is her voice; your surroudings become dark and your breathing coming to a stop.");
									userHealth = userHealth - 50;
									printf("Better luck nextime! Health: %d\n", userHealth);
									break;
								}
								if(trapAnswer == 3)
								{
									puts("You shake your head to bring yourself back to reality.");
									puts("You explain to her youre looking for your way out.");
									puts("As the conversation goes, she eyes you up and down before stopping you...");
									puts("Siren: what will you offer me in return if I were to help?");
									puts("You start to ponder at the thought.");
									puts("You offer either of the following:");
									puts("1 - Youre family heirloom, a silver dagger that is nicely polished.");
									puts("2 - Some of your HP seeing as how she most likely wields magic.");
									puts("3 - Your charm. As obnoxious as that is.");
									scanf("%d", &trapAnswer);
									if(trapAnswer == 1)
									{
										puts("You take out your sheithed dagger, pulling it out to show how beautiful it is.");
										puts("She eyes it, curiosity beaming in her eyes over such a beautiful weapon.");
										puts("With a gentle tone behind her voice, she asks to hold it to which you agree.");
										puts("Grabbing hold of it she pulls it out of its sheith, looking at the sharp edges...");
										puts("......");
										puts("....before a smirk forms across her face, the end of the dagger meeting your chest!");
										puts("Your eyes widen before the taste of iron comes through your mouth, looking down seeing blood start to drip and come out...");
										puts("Your body collapses as the room begins to feel cold and your vision fades...");
										userHealth = userHealth - 50;
										printf("...dont just hand strangers weapons. Health: %d\n", userHealth);
										break;
									}
									if(trapAnswer == 2)
									{
										puts("You start to barter with her, offering some of your life force in return to be magically transported back home!");
										puts("She does not seem convinced, but at the thought of obtaining some life force entices her!");
										puts("She agrees but warns how such a spell could lead to a near death experience.");
										puts("At this point you dont care as long as your back home in your bed with your dozens of cats. You agree.");
										puts("She thinks your crazy but doesnt push you further before putting her hands on your chest...");
										puts("...you feel yourself start to weaken, however your mind becomes filled with thought of being home.");
										userHealth = userHealth - 40;
										puts("As your body gets heavy, you feel yourself fall back onto something soft...");
										puts("Managing to open your eyes, you see familiar surroundings and realize your back home!!");
										printf("But your too tired to get up and decided to recover with whatever time is left in the day. Current Health: %d", userHealth);
										puts("You recover 15 HP. Youre back home, time for some well deserved rest.");
										userHealth = userHealth + 15;
										printf("Ending Health: %d", userHealth);
										break;
									}
									if(trapAnswer == 3)
									{
										printf("Current HP: %d\n", userHealth);
										puts("You try your best to whoo her with your charming looks, but in all honesty she finds you repulsive.");
										puts("Wanting to save you from emberassing yourself more, she splashes the lakes crystal clear water onto you.");
										puts("It feels refreshing to have the water on you! You could feel yourself gain HP!");
										userHealth = userHealth + 30;
										printf("Current Health: %d\n", userHealth);
										puts("You both look at each other before deciding to laugh it off.");
										puts("Out of empathy and wanting to forget this emberassing move, she tells you where to go back from to leave the cavern.");
										break;
									}

								}
							}	
						}				
					break;
			}
			case 17: // This room just adds to the game. Can be edited later to result in a loss and terminate the program. Currently, solving or failing to solve the problem ends up with the player choosing a room again
			{
				while(choice != 99)
				{
					puts("\nYou open the door to room 17.");
					puts("Upon entering, the door slams behind you and you hear it lock.");
					puts("A lightbulb hanging from the ceiling begins to light up. After waiting a few moments, the lights slightly turn up and you notice something in the center of the room.");
					puts("In the center of the room, you see a small table with a number pad embedded onto it.");
				        puts("Upon inspection of the number pad, you press it  and the whole room suddenly lights up entirely, putting you in a daze.");
					puts("You recover from the daze. Upon recovering, you see a small screen display hanging in front of you connected to the number pad.");
					puts("Even worse, you notice multiple explosives, enough to blow the room (and yourself) out of existence.");
					puts("On the screen display, it shows: Enter the correct 4 number password. After 3 wrong attempts, say bye to your life.");
					puts("You look around the room and see a lot of scratch and scribbles, but you notice something barely legible.");
					puts("You decipher it and it says roomx365."); // The 4 number password is 17 * 365, which is 6205
					puts("You question the meaning of it as you hesitate to approach the number pad.");
					puts("You must now enter the 4 number password.");

					int i;						
																						   						for(i = 1; i<4; i++)
					{
						scanf("%d", &choice);
						if(choice != 6205)
						{
							printf("\nYou guessed wrong. Attempt %d failed.\n", i);
							if(i ==3)
							{
								puts("\nAll attempts failed, goodbye.");
								puts("The explosion magically blows you back to where you started. Hey at least you aren't dead ... yet\n");
								//choice = 99; //uncommenting would execute this: puts("Magically you are transported through space and time. You are back at the beginning....."); and end the program	break;
							}
						}																																					
						else if(choice == 6205)
						{
							puts("\nThe screen displays: Congratulations, you can math, as you hear the door unlock and open behind you.");
							puts("You never sprinted so fast in your life as you exit the room.");
							puts("As you are about to exit the room, a portal appears out of no where and you inadvertently run through it...\n"); 
							// After the correct choice, the player is transported back to the beginning as if nothing happened
							break;
						}
						else
						{
							printf("You guessed wrong. Attempt %d failed.", i);
							break;
						}	
					}			
					break; // Break statement needed here to avoid infinite loop of room 17 whether correct or wrong	
				}				
				break;	
			}
			case 18://MINE: JOSEPH MORENO - ROOM 18			
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("Terra Fictitia!");
							puts("Are you the one? The the champion destined to beat them?");
							puts("Traveling through the cavern of Smaug, you come across a goblet of gold.");
							puts("Will you touch the goblet?");
							puts("0 = no; 1 = yes");
							scanf("%d", &choice);
							if (choice == 1)
							{
								puts("The goblet was laced in poison. You tried your best, lancer! Surely, another story awaits you.\n");
								break;
							} 
							else if (choice == 0)
							{
								puts("Good choice! Ah, a dragon! RUN, escape!\n");
								puts("We're journeying through the Ice Spires of Kyurem. Watch your step.\n");
								puts("It looks like you can slide down the mountain. Would you like to, or would you like to trudge slowly?");
								puts("0 = slide; 1 = trudge");
								scanf("%d", &choice);
								if (choice == 1) 
								{
									puts("Oh no! The dragon caught up to us! It looks like slow and steady didn't win this race. Shame, maybe the next one will be the champion...\n");
									break;
								}
								else if (choice == 0)
								{
									puts("\nSnow's up, lancer! You shaved several hours with your sick shred time.");
									puts("But it looks like you've discovered the Fire Pits of Apokylyps and its slums in the distance.");
									puts("\nOn your way to the capital you've discovered a ferocius man-beast. He's charging at you, charge back or tuck and roll?");
									puts("0 = tuck; 1 = charge");
									scanf("%d", &choice);
									if (choice == 1)
									{
										puts("He charged faster than you. Kabob is not a look that suits you. Better luck next time! Your next adventure awaits.");
										break;
									} 
									else if (choice == 0)
									{
										puts("You dodged him! But he's coming back! slash and roll or head on charge?");
										puts("0 = slash; 1 = charge");
										scanf("%d", &choice);
										if (choice == 1)
										{
											puts("Head on attacks were probably not the best idea. That helmet you've got on doesn't look good in blood red.Find another world to travel");
											break;
										}
										else if (choice == 0)
										{
											puts("\nThat slash damaged his leg terribly! But beast boy over there is coming for one last head charge. Slash or charge, Lancer?");
											puts("0 = slash; 1 = charge");
											scanf("%d", &choice);
											if (choice == 1)
											{
												puts("A direct charge was not the best idea. If only we'd been able to know that from the beginning. You were a great warrior. Try again next time!");
												break;
											} 
											else if (choice == 0)
											{
												puts("\n That did it. The monster is slain. Now let's be on our way lancer, I hear people coming from the slums.");
												puts("\n...\n");
												puts("From the distance, a villager shouts 'Kalibak is dead'.");
												puts("\nYou must now trudge through the Holland Marsh. Something appears to be pulling you deeper into the water.");
												puts("\n...\nWhat's that?! That thing is coming out of the swamp!");
												puts("Will you fight it or try to befriend it?");
												puts("0 = fight; 1 = befriend");
												scanf("%d", &choice);
												if (choice == 0)
												{
													puts("As you raise your lance, you're pulled into the swamp. Another sacrifice to the thing of Holland Marsh. A shame. You were so close too...");
													break;
												} 
												else if(choice == 1) 
												{
													puts("Its.. Its friendly? He's allowing you to pass! Lets go, we're almost out of here.\n");
													puts("We did it... You did it! You passed the Bat-Mites trials. You're ready. It's time to take you to the next ste-\n\nOh. I'm afraid to inform that we've been cancelled. But here's a reward for your troubles! A signed T-Shirt! Be sure to take it on your next adventure.. ");
													break;
												}
											}
										}
									}
								}								
							}
							break;
							scanf("%d",&choice);
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
                        puts("\nWelcome to Room 19..");
                        puts("\nYou take your first steps and see a case at the end of the hall.");
                        puts("Out of the corners of the dark room leprechauns begin appearing and");
                        puts("walk towards the case holding clubs, swords, and weapons of all sorts.");
                        puts("\nEnter..\n");
                        puts("1.If you want to exit room 19");
                        puts("2.If you talk your way out of this");
                        puts("3.If you unsheathe your Great Sword and commence an attack\n");
                        
                        char usr_buff[256] = {0};
                        int choice;
                        fgets(usr_buff, 256, stdin);
                        fgets(usr_buff, 256, stdin);
                        sscanf(usr_buff, "%d", &choice);
                        
                        switch (choice)
                        {
                            case 1:
                                puts("\nYou turn around to walk out but the door has been locked.\n");
                                puts("A sign reads:\n\t\"Who's the hottest rapper in Brooklyn?");
                                puts("You have 3 tries, guess right or room self-destructs. Come again.\"");
                                puts("You only think of one rapper so you enter 2 digits.");
                                int tekashi = 69;
                                int guess;
                                int chance = 3;
                                do
                                {
                                    scanf("%d", &guess);
                                    if (guess > tekashi && choice > 0)
                                    {
                                        printf("\n%d is too high\n", guess);
                                        chance--;
                                        printf("You have %d chances remaining\n", chance);
                                    }
                                    else if (guess < tekashi && choice > 0)
                                    {
                                        printf("\n%d is too low\n", guess);
                                        chance--;
                                        printf("You have %d chances remaining\n", chance);
                                    }
                                    else if (chance == 0)
                                    {
                                        puts("\n-------ROOM SELF DESTRUCTS--------\n\tGAME OVER!!!\n\n");
                                        
                                    }
                                    else if (guess == tekashi)
                                    {
                                        printf("\n %d Deadass!! Tekashi 6-9\n", guess);
                                        printf("Door unlocks-_-_-\"Click!\"\n\n");
                                        break;
                                    }
                                } while (chance != 0);
                                break;
                            case 2:
                                puts("You say to the leprechauns how on earth could both races have disagreements at a time like this!?");
                                puts("Instead of fighting one another \"ENTER GENERIC STORY PLOT LINE HERE:_____________\"");
                                puts("It turns out the head of this gang was a gambler of sorts so you took out a pair of dice.");
                                puts("Rolling snake eyes in their culture was the only way to win. What is at stake?");
                                puts("Well you would be forced to marry the head of the gangs child and create an heir");
                                puts("So with sweat dripping down the palms of your hands you throw the pair of 3 sided dice...\n");
                                
                                srand(time(NULL));
                                int roll_one = 1 + rand() % 3;
                                int roll_two = 1 + rand() % 3;
                                printf("THE FIRST DIE STOPS ROLLING... IT'S A %d !!!\n", roll_one);
                                printf("THE SECOND DIE STOPS....ITS A %d !!!!\n\n", roll_two);
                                if (roll_one == 1 && roll_two == 1)
                                {
                                    puts("You say your goodbyes and quickly leave room 19....\"fuck this shit\"\n");
                                }
                                else
                                {
                                    puts("A wedding is planned and you are forced shotgun wedding to marry your leprauchan");
                                    puts("Half humans half leprauchans little yous ar produced and well...");
                                    puts("This is your life now you think as you fall asleep.\n");
                                }
                                break;
                            case 3:
                                puts("Before you begin your assault you remember what your Sensei Mr.Poppe always said..");
                                puts("\"One must ALWAYS using FILE PROCESSING when doing projects in CSC251\"");
                                puts("With that in mind you decide to write a farewell note to your fellow classmates");
                                puts("Theres only one way this will end and you want the world to know what happened");
                                puts("By the way you should find it in ALL_CAPS.txt");
                                
                                FILE *all_caps = fopen( "ALL_CAPS.txt", "a");
                                puts("So you begin to write your farewell letter.... !!!\n");
                                char quote[256] = {0};
                                fgets(usr_buff, 256, stdin);
                                fputs(usr_buff, all_caps);
                                fclose(all_caps);
                                
                                
                                puts("The first victim comes at you and \"SLAAAASH\", his head rolls away into the darkness");
                                puts("Who's next!? you yell. They shoot and you jump off the bullets like like a frog does lillypads");
                                puts("You spin full 360 with your blade dismembering limbs left and right, so much blood....");
                                
                                int i;
                                int b = 1;
                                for (i = 35; i >= b; i--)
                                {
                                    if (i%b == 0)
                                    {
                                        printf("%d left...\n", i);
                                    }
                                    else if(i%b != 0)
                                    {
                                        puts("SLASH!!!");
                                    }
                                    
                                    if (i == b)
                                    {
                                        puts ("ONE FINAL SWING!!!!");
                                    }
                                    
                                    b++;
                                    
                                }
                                
                                puts("\nYou look around at the blood covered marble floor and walk towards the briefcase");
                                puts("You open it and a gold auroa eminates from it, its....its...beautiful");
                                puts("The room starts to shake, you begin to lose consciousness...what is going on!?\n");
                                break;
                            default:
                                puts("Error! Input 1-3 only");
                                break;
                        }
                        break;
					}
					break;
			}
			case 20:
			{
                srand(time(NULL));
                int password = 20;
                int health = 100;
                int defense = 0;
                int money = 0;
                int enemyHitMax = 2;
                int enemyHit = (rand()%(enemyHit-1));
                int myHit = 3;
                printf("\nThe door labeled Room 20 is locked you must enter the 2 digit password: \n");
                scanf("%d", &choice);
                
                if(choice == password)
                {
                    printf("\nYou enter the door labled Room 20\n");
                    printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                }
                else
                {
                    printf("You are locked out\n\n");
                    break;
                }
                printf("You have encountered a sewer rat\n");
                printf("\nYou enter the battle with your hands\n");
                
                puts("You have three choices:");
                puts("1. Fight.");
                puts("2. Run.");
                puts("3. Insult its mother.");
                scanf("%d",&choice);
                int ratH = (rand()%(3-1))+1;
                int attack;
                switch(choice){
                    case 1:
                        printf("You have entered the battle:");
                        while(ratH > 0)
                        {
                            printf("\n1.Punch \n2.Kick");
                            scanf("%d",&choice);
                            printf("Rat health: %d", ratH);
                            if(choice == 1)
                            {
                                attack =(rand()%(2-1))+1;
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 1;
                            }
                            else if(choice == 2)
                            {
                                attack = (rand()%(3-1)+1);
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 1;
                            }
                        }
                        printf("The rat is dead\n");
                        money += 5;
                        printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                        break;
                        
                    case 2:
                        printf("You have ran away\n\n");
                        break;
                        
                    case 3:
                        printf("The rat has ran away...\n\n\n");
                        printf("...(Ground Rumbles)...\n\n\n");
                        printf("It turnes out the rat ran away to tell its mutant mother\n");
                        printf("The glowing green mother rat towers over you blocking the sun\n");
                        printf("You have entered the battle:");
                        ratH = 99999;
                        while(ratH > 0)
                        {
                            puts("\n1.Punch \n2.Kick");
                            scanf("%d",&choice);
                            printf("Rat health: %d", ratH);
                            if(health<=0)
                            {
                                printf("\n\nYou died\n");
                                break;
                            }
                            if(choice == 1)
                            {
                                attack =(rand()%(2-1))+1;
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 99999;
                            }
                            else if(choice == 2)
                            {
                                attack = (rand()%(3-1)+1);
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 99999;
                            }
                        }
                        printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                        break;
                }
                
                while(choice != 99)
                {
                    if(money >= 100)
                    {
                        printf("You have earned enough money to exit");
                        break;
                    }
                    if(health <= 0)
                    {
                        printf("You have died\n\n");
                        break;
                    }
                    int enemyHealth = (rand()%(enemyHitMax-1)+1);
                    int attack = (rand()%(enemyHitMax-1)+1);
                    printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                    printf("You have encountered an enemy\n");
                    printf("\nYou enter the battle with your hands\n");
                    
                    puts("You have three choices:");
                    puts("1. Fight.");
                    puts("2. Run. (-2 gold)");
                    puts("3. Store.");
                    puts("4. Exit");
                    scanf("%d",&choice);
                    
                    switch(choice){
                        case 1:
                            printf("You have entered the battle:");
                            
                            while(enemyHealth > 0)
                            {
                                printf("\n1.Punch \n2.Kick");
                                scanf("%d",&choice);
                                if(choice == 1)
                                {
                                    printf("Enemy health: %d", enemyHealth);
                                    attack =(rand()%(myHit-1))+1;
                                    printf("\n%d\n",attack);
                                    enemyHealth -= attack;
                                    health -= 2;
                                }
                                else if(choice == 2)
                                {
                                    printf("Enemy health: %d", enemyHealth);
                                    attack = (rand()%(myHit-1)+1);
                                    printf("\n%d\n",attack);
                                    enemyHealth -= attack;
                                    health -= 2;
                                }
                            }
                            
                            money += 5;
                            myHit += 2;
                            enemyHitMax += 1;
                            printf("The enemy is dead");
                            break;
                            
                        case 2:
                            printf("You have ran away\n\n");
                            money -= 2;
                            printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                            break;
                            
                        case 3:
                            printf("Shop is under construction\n\nPotions and Armor coming soon\n\n");
                            
                            break;
                        case 4:
                            health = 0;
                    }
                    
                    
                }
                break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
									printf ("You got lucky. You may press more buttons! Sounds like fun...");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
>>>>>>> upstream/master
							{
								puts("GG your alien food...");
								dead = 1;
								break;
							}

							enemyHP = (rand() % weaponDMG[0]) + 1i; // surprise attack! use rifle
						        totalEnemyHP = totalEnemyHP - enemyHP;
							printf("You injured the Necrotin for %d HP\n", enemyHP);
							printf("The Necrotin has %d HP left!\n", totalEnemyHP);
							if(totalEnemyHP < 0)
							{
								puts("You slayed the beast, now keep pushing towards the Hive!");
								break;
							}	
						}
						break;
				}
				break;

			case 2: // sneaky sneaky mission

				puts("Get ready, your landing is emminent...");
				sleep(3);

				puts("With your badass Predator like cloaking suit you are able to rush past hordes of Necrotin and plant C5 explosive charges inside one of there underground tunnels");
				puts("As you start to enter the detonation code, some atmospheric distubance disrupts your cloacking shield and your stealth suit goes offline...");
				puts("You are surrounded on all sides and have no chance of escape");
				puts("However, you still have time to find out what year the Marine Corps was founded and input those 4 last digits to initiate the C5's...");

				scanf("%d", &inputedCode);
				if(inputedCode == CORRECTCODE)
				{
					puts("You blew up a major enemy reinforcement tunnel, sacrificed yourself and prevented many friendly casualties... You're a hero.");
				}
				else
				{
					puts("You failed, and many friendlies died. But I don't blame you... I blame your senior drill instructor.");
				}
				dead = 1;

				break;

		} // end of switch	
		

		// GAME CONTINUES  AFTER INITIAL ACTION EVENT
		if(dead == 1)
		{
			puts("GAME OVER");
		}
		else
		{
			puts("As you continue to rush towards the hive, you get completely surrounded and you and your team shoot it out till the very..");
		}
		break;
		
	} // end of while

	
} // end of main
