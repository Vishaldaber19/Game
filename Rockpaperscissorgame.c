#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//User Section
int you(char user)
{
     if (user=='r')
    {
        printf("You choose: rock\n");
    }
    else if (user=='p')
    {
        printf("You choose: paper\n");
    }
    else 
    {
        printf("You choose: scissor\n");
    }
}
// Computer Section
int comp(int random)
{
    char computer;
    if (random<=3)
    {
        computer='r';
        printf("Computer choose: rock\n");
    }
    else if (random>4 && random<=6)
    {
         computer='p';
        printf("Computer choose: paper\n");
    }
    else
    {
         computer='s';
        printf("Computer choose: scissor\n");
    }
    return computer;  
}
//Result Section
void result(char computer,char user)
{
    if (user==computer)
    {
        printf("Result : Match Draw");
    }

    //When user choos Rock
    if (user=='r' && computer=='p')
    {
         printf("Result : Computer Won");
    }
    else if (user=='r' && computer=='s')
    {
        printf("Result : Player Won");
    }

    //When user choose paper
    if (user=='p' && computer=='s')
    {
         printf("Result : Computer Won");
    }
    else if (user=='p' && computer=='r')
    {
        printf("Result : Player Won");
    }

    //When user choose Scissor
    if (user=='s' && computer=='r')
    {
         printf("Result : Computer Won");
    }
    else if (user=='s' && computer=='p')
    {
        printf("Result : Player Won");
    } 
}
//Driver Code
int main()
{
   char user;
    printf("Please choose rock , paper,scissor  or quit : ");
    scanf("%c",&user);
    if (user=='q')
    {
        return 0;
    }
    
     you(user);
     int random;
     srand(time(0));
    random=rand()%9+1;
    int computer=comp(random);
    result(computer,user);
    return 0;
}