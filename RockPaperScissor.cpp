#include <iostream>
#include<conio.h>
#include <stdlib.h> // srand , rand
#include <time.h>

using namespace std;
int main()
{
    string player_name;
    cout << "Enter Your Name : " ;
    cin >> player_name;
    int chance;
    cout << player_name << " How many rounds you want to play? : ";
    cin >> chance;

    system("cls");      // Clear the screen.

    int user_choice;
    int computer_choice;
    int user_score = 0;
    int computer_score = 0;




//  loop for how many times play the game
    for (int i = 1; i <= chance; i++)
    {
        // getch();
        cout<<"---------------------------------------------"<<endl;
        cout <<"------------------1. Rock-------------------" << endl;
        cout <<"------------------2. Paper------------------" << endl;
        cout <<"------------------3. Scissors---------------" << endl;
        cout<<"---------------------------------------------"<<endl;

        cout << "Round NO. : " << i << "/" << chance << endl;
        cout << player_name << "'s Score = " << user_score << endl;
        cout << "computer score = " << computer_score << endl;
        cout << "Select your choice : ";
        cin >> user_choice;
        system("cls"); 
//  Generate the random number b/w 1 to 3:
        srand(time(NULL));
        computer_choice = rand() % 3 + 1;
//  LOGIC THE GAME START
        if (user_choice == computer_choice)
        {
            cout << player_name << " choice is " << user_choice << " and "<< "computer choice is " << computer_choice << endl;
            cout << "Match Draw" << endl;
            cout << player_name << " get score = " << user_score << ", Computer score = " << computer_score << endl;
        }

//              IF USER CHOICE ROCK 1.
        else if(user_choice == 1 && computer_choice == 2){
            user_score +=1;
            cout << player_name << " choice is " << user_choice << " and "<< "computer choice is " << computer_choice << endl;
            cout<<player_name <<" Win" << endl;
            cout << player_name << " get score = " << user_score << ", Computer score = " << computer_score << endl;
        }

        else if(user_choice == 1 && computer_choice == 3){
            user_score +=1;
            cout << player_name << " choice is " << user_choice << " and "<< "computer choice is " << computer_choice << endl;
            cout<<player_name <<" Win" << endl;
            cout << player_name << " get score = " << user_score << ", Computer score = " << computer_score << endl;
        }

//          IF USER CHOICE PAPER 2.
        else if(user_choice == 2 && computer_choice == 1){
            computer_score +=1;
            cout << player_name << " choice is " << user_choice << " and "<< "computer choice is " << computer_choice << endl;
            cout<<"Computer Win" << endl;
            cout << player_name << " get score = " << user_score << ", Computer score = " << computer_score << endl;
        }
        else if(user_choice == 2 && computer_choice == 3){
            computer_score +=1;
            cout << player_name << " choice is " << user_choice << " and "<< "computer choice is " << computer_choice << endl;
            cout<<"Computer Win" << endl;
            cout << player_name << " get score = " << user_score << ", Computer score = " << computer_score << endl;
        }


//         IF USER CHOICE SCISSOR 3.
        else if(user_choice == 3 && computer_choice == 1){
            computer_score +=1;
            cout << player_name << " choice is " << user_choice << " and "<< "computer choice is " << computer_choice << endl;
            cout<<"Computer Win" << endl;
            cout << player_name << " get score = " << user_score << ", Computer score = " << computer_score << endl;
        }
        else if(user_choice == 3 && computer_choice == 2){
            user_score +=1;
            cout << player_name << " choice is " << user_choice << " and "<< "computer choice is " << computer_choice << endl;
            cout<<player_name <<" Win" << endl;
            cout << player_name << " get score = " << user_score << ", Computer score = " << computer_score << endl;
        }
        else{
            cout<<"Wrong Input..."<<endl;
        }
    }
cout<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
cout<<"GAME OVER"<<endl;
cout<<"Total Score "<<endl;
cout<<player_name<<" score is "<<user_score<<endl;
cout<<"Computer score is "<<computer_score<<endl;
 
if(user_score == computer_score)
    cout<<"Final match is Draw..."<<endl;
else if(user_score > computer_score)
    cout<<player_name<<" is Final Winner!!!!"<<endl;
else
    cout<<"Computer is Final Winner"<<endl;
    return 0;
}



