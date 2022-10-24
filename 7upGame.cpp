#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <ctype.h>


using namespace std;

int life, score, Rand_No = 7,row=0;
char input = '\0', player[15];

void frame();      
void checkAndUpdate(); 
void Intro();
void conclude();


int main() 
{
    srand(time(0));
    life = 3;
    score = 0;
    Intro();
    while (life)
    {
        frame();
    }
    conclude();
    return 0;
}

void frame()
{
    system("clear");
    cout << "\n\n\tLife:\t" << life << "\t\t\t\t Score: " << setw(4) << score << "\n\n";
    cout << "\t\t\t Scoring and Rules\n";
    cout << "\t\t\t Output Number  \n";
    cout << "\t\t\t   +-------+  \n";
    cout << "\t\t\t   |       |  \n";
    cout << "\t\t\t   |  " << setw(2) << Rand_No << "   |\n";
    cout << "\t\t\t   |       |  \n";
    cout << "\t\t\t   +-------+  \n";
CHECK:
    cout << "\n\n(H->High, L->Low and 7->for exect 7\n";
    cout << "\n\nEnter the move\n";
    cin>>input;
    input = toupper(input);
    switch (input)
    {
    case 'H':
    case '7':
    case 'L':
        break;
    default:
        cout << "\nInvalid Move!!";
        goto CHECK;
    }
    checkAndUpdate();
}

void checkAndUpdate()
{
    Rand_No = rand()%11 + 2;
    switch (input)
    {
    case 'H':
                if(Rand_No>7)
                {
                    row++;
                    cout<<"\n\nCorrrect Guess You get "<<row<<" in a row\n";
                    cout<<"The Random genrated number is "<<Rand_No<<endl;
                    score+=10;
                    if(row%5==0 && row)
                    {
                        score+=5;
                        life++;
                        cout<<"\nYou won a extra 5 points and 1 life\n";
                    }
                    system("pause");
                }
                else
                {
                    row=0;
                    life--;
                    cout<<"\n\nIncorrrect Guess  \n";
                    cout<<"The Random genrated number is "<<Rand_No<<endl;
                    system("pause");
                }
                break;
    case '7':
                if(Rand_No==7)
                {
                    row++;
                    cout<<"\n\nCorrrect Guess You get "<<row<<" in a row\n";
                    cout<<"The Random genrated number is "<<Rand_No<<endl;
                    score+=25;
                    life++;
                    if(row%5==0 && row)
                    {
                        score+=5;
                        life++;
                        cout<<"\nYou won a extra 5 points and 1 life\n";
                    }
                    system("pause");
                }
                else
                {
                    row=0;
                    life--;
                    cout<<"\n\nIncorrrect Guess  \n";
                    cout<<"The Random genrated number is "<<Rand_No<<endl;
                    system("pause");
                }
                break;
    case 'L':
                if(Rand_No<7)
                {
                    row++;
                    cout<<"\n\nCorrrect Guess You get "<<row<<" in a row\n";
                    cout<<"The Random genrated number is "<<Rand_No<<endl;
                    score+=10;
                    if(row%5==0 && row)
                    {
                        score+=5;
                        life++;
                        cout<<"\nYou won a extra 5 points and 1 life\n";
                    }
                    system("pause");
                }
                else
                {
                    row=0;
                    life--;
                    cout<<"\n\nIncorrrect Guess  \n";
                    cout<<"The Random genrated number is "<<Rand_No<<endl;
                    system("pause");
                }
                break;
    }
}

void Intro()
{
    system("clear");
    cout << "\t\t\t 7 UP AND DOWN\n";
    cout << "\n\n\tLife:\t" << life << "\t\t\t\t Score: " << setw(4) << score << "\n\n";
    cout << "\t\t\t Scoring and Rules\n";
    cout << "1. The numbers genrated by the systems will between 2-12\n";
    cout << "2. Correct guessing the side High/Low             ->  +10 points\n";
    cout << "3. Correct guessing the side High/Low 5 in a row  ->  +5 points extra + 1 life \n";
    cout << "4. Guessing the Exect 7                           ->  +25 points + 1 life\n";
    cout << "5. Guessing wrong                                 ->  -1 life\n";

    cout << "\n\nEnter the name of Player\n";
    cin.getline(player,20);

    cout << endl<< player << "   Lesgooooo.....\n";
    system("pause");
}

void conclude()
{
    system("clear");
    cout << "\t\t\t\t 7 UP AND DOWN\n";
    cout<<"\n\n\t\t\tThanks "<<player<<" for Playing the game\n";
    cout<<"\n\t\t\t\tYour Score is: " << setw(4) << score << "\n\n";
    system("pause");
}
