#include <iostream>
using namespace std;

    int input ;
    int Everest = 29029 , K2 = 28251 , Kangchenjunga = 28169;


main()
{
    cout << "Please enter the height of the mountain that you're interested in.";
    cin  >> input;

    if ( input == Everest)
    {
        cout << "29029 ft is the height of Mount Everest. It is the highest mountain." ;
    }

    else if ( input == K2)
    {
        cout << "28251 ft is the height of K2. It is the second highest mountain." ;
    }

    else if ( input == Kangchenjunga)
    {
        cout << "28169 ft is the height of Kangchenjunga. It is the third highest mountain.";
    }

    else
    {
        cout << "Height does not match that of the three highest mountains. Please enter a correct height!!";
    }

  return 0;
}
