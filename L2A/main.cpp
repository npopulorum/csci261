/*
 * main.cpp
 * L2A
 *
 * Gregory Manley
 * Nathan Populorum
 *
 * Copyright © 2020 Gregory Manley and Nathan Populorum. All rights Reserved.
 *
 * L2A Pair programming introduction
 */

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void distanceForm(double point1X, point2X, point1Y, point2Y) {
  double distanceXTemp = point2X - point1X; 
  double distanceYTemp = point2Y - point1Y;
  
  double distanceXTempSq = distanceXTemp * distanceXTemp;
  double distanceYTempSq = distanceYTemp * distanceYTemp;
  
  double distance = sqrt(distanceXTempSq - distanceYTempSq);
  
  cout << "The distance between the two points is: " << distance << " units" << endl;
  
}

int main() {
  double force, stress, acceleration;

  cout << "Enter the Force: "; cin >> force; cout << "Enter the Acceleration: "; cin >> acceleration;
  stress = force / acceleration;
  cout << stress;
  
  double p1XTemp, p1YTemp, p2XTemp, p2YTemp;
  
  cout << "Your first X value: "; cin >> p1XTemp;
  cout << "Your first Y value: "; cin >> p1YTemp;
  cout << "Your second X value: "; cin >> p2XTemp;
  cout << "Your second Y value: "; cin >> p2YTemp;
          
  distanceForm(p1XTemp, p2XTemp, p1YTemp, p2YTemp)
  
  return 0;
}
