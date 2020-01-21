#include <iostream>
using namespace std;



main()
{
double k = 0.18, g = 9.8, cf_draft, velocity, cr=0.001, m_bike, m_rider,m;
double P_a, P_r, kilometers, energyTotal;
int time, intpower;
cout  << " Please enter the velocity in m/s" << " ";
cin >> velocity;
cout  << " Please enter the cf draft" << " ";
cin >> cf_draft;
cout << " Please enter the mass of biker in kilograms" << " ";
cin >> m_rider;
cout << " Please enter the mass of bike in kilograms" << " ";
cin >> m_bike;
cout << " please enter the traveled distance" << " ";
cin >> kilometers ;


    P_a = k * cf_draft * velocity * velocity * velocity;
    m = m_bike + m_rider;
    P_r = cr * g * m * velocity;


    intpower = P_a + P_r;
    cout << intpower << "W" << " ";


    time = (kilometers * 1000) / velocity;


    energyTotal = intpower*time;

    cout << intpower << "W" << "total energy for " << " " << kilometers << "K =" << energyTotal << " ";

    return 0;
}
