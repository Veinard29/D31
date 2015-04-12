#pragma once

#include <string>
#include <sstream>
#include <list>

using namespace std;
class VKObject
{
public:
  virtual string GetClassName() = 0;
  virtual string Print() = 0;
};

