#pragma once

#include <string>
using std::string;

#include <iostream>
using std::ostream;

#include "Monster.h"

class StrongMonster: public Monster
{ 
public:
  StrongMonster(string, int = 100, int = 80, int = 10, double = 2.5);
  ~StrongMonster() override {} 

  //sobrescrevendo método golpear
  int golpear() const override;

private:

  double mulAtaque;
};
