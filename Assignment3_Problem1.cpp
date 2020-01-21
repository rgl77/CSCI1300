#include <iostream>
using namespace std;

main()
{
    string decision;
    cout << "Do you want to play the game ?" ;
    cout << "Please enter yes or no.";
    getline(cin,decision);

    if (decision == "no")
    {
        cout << "Good bye."  ;
    }

    else if ( decision == "yes")
    {
        while (decision == "yes")
        {string firstadjective, firstnoun, secondadjective, secondnoun;
        cout << " please enter the first adjective" << " ";
        getline(cin,firstadjective);
        cout << " Please enter the first noun" << " ";
        getline(cin,firstnoun);
        cout << "please enter the second adjective" << " ";
        getline(cin,secondadjective);
        cout << "please enter the second noun" << " ";
        getline(cin,secondnoun);


        cout << "It was the" <<" "<<firstadjective<<" "<<"of"<<" "<<firstnoun<<","<<" "<<"it was the"<<" "<<secondadjective<<" "<<"of"<<" "<<secondnoun<<" "<<"Do you want to play again?"<< endl;
        getline(cin,decision);
        }

        cout << "Good bye";
    }
    else
    {
        cout << " I do not understand your decision. Please enter yes or no.";
    }
    return 0 ;
}
