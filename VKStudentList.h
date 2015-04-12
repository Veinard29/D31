pragma once

#include "VKSubject.h"
#include "VKStudent.h"
class VKStudentList : public VKObject
{
public:
  string GetClassName();
  VKStudentList GetExcellentStudents();
  VKStudentList GetBadStudents();
  float Average();
  float Average(const VKSubject& subject);
  string Print();
  void Clear();
  void Add(const VKStudent& student);
  void Remove(const VKStudent& student);
private:
  list <VKStudent> students;
};
