/* CSCI 261: L2A
 *
 * main.cpp
 * L2A
 *
 * Gregory Manley
 * Nathan Populorum
 *
 * Created
 * Copyright © 2020 Gregory Manley and Nathan Populorum. All rights Reserved.
 *
 * L2A Pair programming Introduction
 */

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void distanceForm(double point1X, double point2X, double point1Y, double point2Y) {
  double distanceXTemp = point2X - point1X;
  double distanceYTemp = point2Y - point1Y;
  
  double distanceXTempSq = distanceXTemp * distanceXTemp;
  double distanceYTempSq = distanceYTemp * distanceYTemp;
  
  double distance = sqrt(distanceXTempSq + distanceYTempSq);
  
  cout << "The distance between the two points is: " << distance << " units" << endl;
  
}

int main() {
  double force, stress, acceleration;

  cout << "To find the stress on an object: " << endl;
  cout << "Enter the Force: "; cin >> force; cout << "Enter the Acceleration: "; cin >> acceleration;
  stress = force / acceleration;
  cout << "The stress on the object is: " << stress << endl;
  
  double p1XTemp, p1YTemp, p2XTemp, p2YTemp;
  
  cout << "For the distance between two points: " << endl;
  cout << "Your first X value: "; cin >> p1XTemp;
  cout << "Your first Y value: "; cin >> p1YTemp;
  cout << "Your second X value: "; cin >> p2XTemp;
  cout << "Your second Y value: "; cin >> p2YTemp;
          
  distanceForm(p1XTemp, p2XTemp, p1YTemp, p2YTemp);
  
  return 0;
}
