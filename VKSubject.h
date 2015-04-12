#pragma once

#include "VKObject.h"
class VKSubject : public VKObject
{
public:
  VKSubject();
  VKSubject(const string& _SubjectName);

  string GetClassName();
  string Print();
  bool operator==(const VKSubject& object);

  string GetSubjectName();
  void SetSubjectName(const string& _SubjectName);
private:
  string SubjectName;
};
