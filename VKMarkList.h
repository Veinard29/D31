#pragma once

#include "VKMark.h"
class VKMarkList : public VKObject
{
public:
  string GetClassName();
  unsigned int MinMark();
  unsigned int MaxMark();
  float Average();
  float Average(const VKSubject& subject);
  string Print();
  void Add(const VKMark& mark);
private:
  list <VKMark> marks;
};
