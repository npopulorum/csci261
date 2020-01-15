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

int main() {
  double force, stress, acceleration;

  cout << "Enter the Force: "; cin >> force; cout << "Enter the Acceleration: "; cin >> acceleration;
  stress = force / acceleration;
  cout << stress;

  return 0;
}
