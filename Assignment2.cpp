#include <iostream>
using namespace std ;

int main ()

{
    //Problem1

    int const initial_population = 307357870, death_rate = 13, birth_rate = 7, immigrant_rate = 35 , duration = 365*24*3600;

    int death_amount, birth_amount, immigrant_amount, estimated_population ;

    death_amount      = duration / death_rate     ;

    birth_amount      = duration / birth_rate     ;

    immigrant_amount  = duration / immigrant_rate ;

    estimated_population = initial_population - death_amount + birth_amount + immigrant_amount ;

    cout << estimated_population<< endl;

    //Problem2

    int total_time ;

    cout << "Enter the amount of time:\n";
    cin  >> total_time ;

    int sec_per_hour = 3600, sec_per_minute = 60, sec_per_sec = 1;

    int X, Y, Z;

    X = total_time / sec_per_hour;

    Y = (total_time - X*sec_per_hour) / sec_per_minute ;

    Z = (total_time - X*sec_per_hour - Y*sec_per_minute) ;

    cout << " The time is ";
    cout <<  X  ;
    cout << "hours";
    cout <<  Y ;
    cout << "minutes";
    cout <<  Z ;
    cout << "seconds";

    //Problem3

    int fahrenheit_temperature;

    cout << "   Please enter the F to convent to C";
    cin  >> fahrenheit_temperature ;

    int celcius_temperature , subtraction = 32, factor1 = 5, factor2 = 9 ;

    celcius_temperature = (fahrenheit_temperature - subtraction) * factor1 / factor2 ;

    cout << celcius_temperature<<endl;

 return 0;
}


