// Copyright @ 2023 Zhengyu.Fu All right reserved.

#define _USE_MATH_DEFINES

#include <iostream>


/**
 * Just check float operating.
 * 
 * \return 
 */
int main()
{
    float Angle;

    //prompt for and get Angle
    std::cout << "Enter the angle in degree: ";
    std::cin >> Angle;
    Angle = Angle *M_PI/ 180 ;

    //calculate the cosine of 45 degress;
    float Cosine = cosf(Angle);

    std::cout << " the cosine of the angle is "<<Cosine<<"\n";

}

