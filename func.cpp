#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
char choice[10];

void playerDies (bool dies)
{
  if (dies == true) 
  {
    cout << "You died! Rebooting life again....\n";
  }
}
void Text() 
{ 
  bool nextscenario;
  char response[10];

  // template : "Scenario number : scenario \n";
  cout << "Scenario 1 : Out of nowhere, you were born, and thus existed. You see random stuff for the first time. What do you do now?\n";
  cout << "Option 1 : Cry\n";
  cout << "Option 2 : Jump off\n";
  cout << "Option 3 : Unbirth yourself\n";
  cout << "Option 4 : Drink juice\n";
  cin >> response;

while (strcmp(response, "quit") != 0)
  {
    scanf("%s", response);
    if (strcmp(response, "1") == 0)
    {
      printf("You cried. Your mom puts you to sleep, and you wake up in home. Lots of missed oppurtunites.\n");
     nextscenario = true;
       if (nextscenario == 1)
       {
         printf("Scenario 2 : You are home. Parents are not in your sight, what would you do?\n");
         cout << "Option 1 : Sneak out\n";
         cout << "Option 2 : Stay\n";
         cout << "Option 3 : Search the room\n";
         cout << "Option 4 : Play with toys\n";
         scanf("%s", response); // below doesnt kill u // baby stuff
         if (strcmp(response, "1") == 0)
         {
           printf("You sneaked out. Being the regular baby you are, you had a hard time. But eventually, you triumph, and sneak out.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : You are on the road now. Consider yourself homeless. There are three things you see, and your tiny brain calls them food. What do you eat?\n");
             cout << "Option 1 : Thing with Yellow and Red Thing\n"; // pizza but its actually glue and legos
             cout << "Option 2 : Thing with White Thing\n"; // mushroom
             cout << "Option 3 : Thing with Purple Small Things\n"; // grapes
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("You ate something. If you were smart enough, you would've known it's Glue and Legos. You choked to death\n");
               playerDies(true);
               break;
             }
             if (strcmp(response, "2") == 0)
             {
               printf("You ate something. If you were smart enough, you would've known it's a mushroom. You instantly thud into the ground.\n");
               playerDies(true);
                 break;
             }
             if (strcmp(response, "3") == 0)
             {
               printf("You ate something. If you were smart enough, you would've known it's grapes. You've would've died if your baby teeth didn't come in clutch.\n");
              nextscenario = true;
           if (nextscenario == 1)
           {
             printf("\n");
             cout << "\n";
             cout << "\n";
             cout << "\n";
             cout << "\n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
             }
           }
         }
         if (strcmp(response, "2") == 0)
         {
           printf("You stayed. You did random stuff, drank cheese, and went to sleep.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : You woke up. Your mom carries you to breakfast. You have pancakes for breakfast. You need a distraction. Quick, make one!\n");
             cout << "Option 1 : Yeet the Pancake\n";
             cout << "Option 2 : Chuck the Fork\n";
             cout << "Option 3 : Flick the Plate\n";
             cout << "Option 4 : WWE Slam\n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("You yeet the pancake.\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("You chuck the fork.\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("You flick the plate.\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("You got bored and did a WWE Slam because. Apparently you committed into something you never do. That's how you died to your dad's slam. F\n");
               playerDies(true);
               break;
             }
           }
           break;
         }
         if (strcmp(response, "3") == 0)
         {
           printf("You searched the room. You found a cool looking shirt for you. It reads 'Punch Me if you think Squid Game is overrated'. You decided to wear it.\n");
           nextscenario = true;
           if (nextscenario == 1)
           { // below is all guarenteed death
             printf("Scenario 3 : You went to the amusement park. There are baby groups available for you to join. Which one do you join?\n");
             cout << "Option 1 : DaBaby Gang\n";
             cout << "Option 2 : Mafia Gang\n";
             cout << "Option 3 : Normies\n";
             cout << "Option 4 : Clowns\n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("You tried applying for DaBaby Gang. They hated you for wearing the shirt and you got punched a billion times and got ran over by Convertible. LETS GOOOOOOO\n");
               playerDies(true);
               break;
             }
             if (strcmp(response, "2") == 0)
             {
               printf("You tried applying for the Mafia Gang. They hated you for wearing the shirt and you got punched alot and got chased. You tried losing them by going into the most crowded area. You ended up losing yourself.\n");
               playerDies(true);
               break;
             }
             if (strcmp(response, "3") == 0)
             {
               printf("You tried applying for the Normies. They hated you for not being normal and for the shirt. So you got punched to death, how normal lol.\n");
               playerDies(true);
               break;
             }
             if (strcmp(response, "4") == 0)
             {
               printf("You tried applying for the Clowns. They hated you for the shirt so much you got punched alot for the Squid Game shirt and you looked like a human reincarnation of a Mobile Game ad. You got so pressured you ended up floating. Black magic clowns.\n");
               playerDies(true);
               break;
             }
           }
           break;
         }
         if (strcmp(response, "4") == 0)
         {
           printf("You played with toys. You found an explosive in your choo-choo train. Despite not being smart, you chuck it into the window as the choo-choo becomes a boom boom.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";;
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
         }   
       }
       break; // this helps lol :O
    } 
    if (strcmp(response, "2") == 0)
    { // death
      printf("You jumped off. But you didn't know what you jumped off of. It was a Harvard doctor. You probably knew what happened next\n"); 
      playerDies(true);
      break;
      }    
    if (strcmp(response, "3") == 0)
    {
      printf("You unbirth yourself. You no longer exist you genius!\n");
      printf("And you went back out. But you're determined. You really want to not exist. Your mom got so mad she sent you to the adoption center. Sweet!\n");
      nextscenario = true;
       if (nextscenario == 1)
       {
         printf("Scenario 2 : You are at the adoption center right now. There are a load of babies to ally with, or make enemies with. What do you do?\n");
         cout << "Option 1 : Make an alliance\n";
         cout << "Option 2 : Cause chaos\n";
         cout << "Option 3 : Chuck a toy at a kid\n";
         cout << "Option 4 : Became a man\n";
         scanf("%s", response);
         if (strcmp(response, "1") == 0)
         {
           printf("You tried making an alliance. Being the charismatic person you are, you managed to team up with a baby that that has military genetics and a baby that played chess and programs for a living. You three became best friends.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
         }
         if (strcmp(response, "2") == 0)
         {
           printf("You caused chaos. You hacked into the power and switched off the lights. You dropped knifes for the arena and triggered a grenade. Even though no one got hit, it still caused enough chaos for your pleasure. After getting kills for fun, you eventually left the center.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
         }
         if (strcmp(response, "3") == 0)
         {
           printf("You chuck a toy at a random kid. Unfortunately, you had bad aim. You ended up hitting The Rock's Baby.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
         }
         if (strcmp(response, "4") == 0)
         {
           printf("You became a man. Sadly you got kicked out of the center for being too old. :(\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : You are on the road now. Consider yourself homeless. There are three things you see, and your tiny brain calls them food. What do you eat?\n");
             cout << "Option 1 : Thing with Yellow and Red Thing\n"; // pizza but its actually glue and legos
             cout << "Option 2 : Thing with White Thing\n"; // mushroom
             cout << "Option 3 : Thing with Purple Small Things\n"; // grapes
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("You ate something. If you were smart enough, you would've known it's Glue and Legos. You choked to death\n");
               playerDies(true);
               break;
             }
             if (strcmp(response, "2") == 0)
             {
               printf("You ate something. If you were smart enough, you would've known it's a mushroom. You instantly thud into the ground. \n");
               playerDies(true);
                 break;
             }
             if (strcmp(response, "3") == 0)
             {
               printf("You ate something. If you were smart enough, you would've known it's grapes. You've would've died if your baby teeth didn't come in clutch.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 4 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
             }
           }
           break;
         }
         break;
       }
    } 
    if (strcmp(response, "4") == 0)
    {
      printf("You drank juice. As the small-brain you are, you didn't know what it was. Luckily, it was Big Guy Juice. You get an IQ and Strength advantage!\n");
      nextscenario = true;
       if (nextscenario == 1)
       {
         printf("Scenario 2 : You are home. Parents are not in your sight, what would you do?\n");
         cout << "Option 1 : Sneak out\n";
         cout << "Option 2 : Stay\n";
         cout << "Option 3 : Search the room\n";
         cout << "Option 4 : Play with toys\n";
         scanf("%s", response); //remember that the cry scenarios are the same as the juice scenarios
         if (strcmp(response, "1") == 0)
         {
           printf("You sneaked out. Because of your advantages, it was easier.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
         }
         if (strcmp(response, "2") == 0)
         {
           printf("You stayed. You did random stuff and eventually slept.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : You woke up. Your mom carries you to breakfast. You have pancakes for breakfast. You need a distraction. Quick, make one!\n");
             cout << "Option 1 : Yeet the Pancake\n";
             cout << "Option 2 : Chuck the Fork\n";
             cout << "Option 3 : Flick the Plate\n";
             cout << "Option 4 : WWE Slam\n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("You yeet the pancake. The pancakd accidentally hit the TV, bounced off of the trampoline, went through some glass, walked the stairs, nuked your room, shredded your parents' room, ricochet off of the wall, broke the door open, landed on the stove, and eventually on your mom's face. Epic\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("You chuck the fork. It chucked nothing but your escape plan. You left lol\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("You flick the plate. No one got hit. So sad!\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("You got bored and did a WWE Slam because. Apparently your dad is a former WWE champion too! But you got squished. Rest in peace\n");
               playerDies(true);
               break;
             }
           }
           break;
         }
         if (strcmp(response, "3") == 0)
         {
           printf("You searched the room. In the closet, you found a credit card. Wow!\n");
           nextscenario = true;
           if (nextscenario == 1)
           { // below is no death
             printf("Scenario 3 : You went to the amusement park. There are baby groups available for you to join. Which one do you join?\n");
             cout << "Option 1 : DaBaby Gang\n";
             cout << "Option 2 : Mafia Gang\n";
             cout << "Option 3 : Normies\n";
             cout << "Option 4 : Clowns\n";
             scanf("%s", response); 
             if (strcmp(response, "1") == 0)
             {
               printf("You tried applying for DaBaby Gang. They loved you for having a rich credit card and you bought the convertible. LETS GOOOOOOO\n");
               nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 4 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
             }
             if (strcmp(response, "2") == 0)
             {
               printf("You tried applying for the Mafia Gang. They loved you for the credit card. They grabbed it and started hacking. You helped them with alot and they decided to invite you into their large corporation.\n");
               nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
             }
             if (strcmp(response, "3") == 0)
             {
               printf("You tried applying for the Normies. They loved you for having a credit card. But they ended up taking it to buy their groceries. Lame!\n");
               nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
             }
             if (strcmp(response, "4") == 0)
             {
               printf("You tried applying for the Clowns. They loved you so much for the credit card and made a joke about Joe.\n");
               nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
             }
           }
           break;
         }
         if (strcmp(response, "4") == 0)
         {
           printf("You play with toys. In your choo-choo train, there was an explosive. You ran away in time as the choo-choo went boom boom.\n");
           nextscenario = true;
           if (nextscenario == 1)
           {
             printf("Scenario 3 : \n");
             cout << "Option 1 : \n";
             cout << "Option 2 : \n";
             cout << "Option 3 : \n";
             cout << "Option 4 : \n";
             scanf("%s", response);
             if (strcmp(response, "1") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "2") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "3") == 0)
             {
               printf("\n");
             }
             if (strcmp(response, "4") == 0)
             {
               printf("\n");
             }
           }
           break;
           }
         break;
       }
    }
  
  cout << "Make sure to come back (you need it)\n";
  
    } // while bracket

  } // Text() bracket


