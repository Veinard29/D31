#include "VKGroup.h"
VKGroup::VKGroup()
{
  Name = "";
}
VKGroup::VKGroup(const string& _Name, VKStudentList* _students)
{
  Name = _Name;
  try
  {
    if (_students != 0)
      students = *_students;
  }
  catch (...)
  {
    throw logic_error("Pointer is null");
  }
}
VKGroup::~VKGroup()
{
}
string VKGroup::GetClassName()
{
  return "VKGRoup";
}
string VKGroup::Print()
{
  stringstream ss;
  ss << "Name: " << Name << endl << "Students: " << endl << students.Print();
  return ss.str();
}
string VKGroup::GetName()
{
  return Name;
}
void VKGroup::SetName(const string& _Name)
{
  Name = _Name;
}
VKStudentList& VKGroup::GetStudents()
{
  return students;
}
VKStudentList VKGroup::GetExcellentStudents()
{
  return students.GetExcellentStudents();
}
VKStudentList VKGroup::GetBadStudents()
{
  return students.GetBadStudents();
}
float VKGroup::Average()
{
  return students.Average();
}
float VKGroup::Average(const VKSubject& subject)
{
  return students.Average(subject);
}
void VKGroup::Clear()
{
  students.Clear();
}
void VKGroup::AddStudent(VKStudent* student)
{
  try
  {
    students.Add(*student);
  }
  catch (...)
  {
    throw logic_error("Pointer is null");
  }
}
void VKGroup::RemoveStudent(VKStudent* student)
{
  try
  {
    students.Remove(*student);
  }
  catch (...)
  {
    throw logic_error("Pointer is null");
  }
}
VKGroup& VKGroup::operator+=(VKStudent* student)
{
  try
  {
    students.Add(*student);
    return*this;
  }
  catch (...)
  {
    throw logic_error("Pointer is null");
  }
}
