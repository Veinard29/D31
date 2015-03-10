#include "VKSubject.h"
VKSubject::VKSubject(void)
{
  SubjectName = "";
}
VKSubject::VKSubject(string _SubjectName)
{
  SubjectName = _SubjectName;
}
string VKSubject::ClassName(void)
{
  return "VKSubject";
}
string VKSubject::Print(void)
{
  return GetSubjectName();
}
bool VKSubject::operator==(VKObject &object)
{
  return dynamic_cast<VKSubject&>(object).GetSubjectName() == GetSubjectName();
}
string VKSubject::GetSubjectName(void)
{
  return SubjectName;
}
void VKSubject::SetSubjectName(string _SubjectName)
{
  SubjectName = _SubjectName;
}
