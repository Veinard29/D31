#include "VKGroup.h"
VKGroup::VKGroup(void)
{
  Name = "";
  students = new VKStudentList();
}
VKGroup::VKGroup(string _Name, VKStudentList *_students)
{
  Name = _Name;
  students = _students;
  if (students == 0)
    students = new VKStudentList();
}
VKGroup::~VKGroup(void)
{
  if (students != 0)
    delete students;
}
string VKGroup::ClassName(void)
{
  return "VKGRoup";
}
string VKGroup::Print(void)
{
  stringstream ss;
  ss << "Name: " << Name << endl << "Students: " << endl << students->Print();
  return ss.str();
}
string VKGroup::GetName(void)
{
  return Name;
}
void VKGroup::SetName(string _Name)
{
  Name = _Name;
}
VKStudentList *VKGroup::GetStudents(void)
{
  return students;
}
VKStudentList *VKGroup::GetExcellentStudents(void)
{
  return students->GetExcellentStudents();
}
VKStudentList *VKGroup::GetBadStudents(void)
{
  return students->GetBadStudents();
}
float VKGroup::Average(void)
{
  return students->Average();
}
float VKGroup::Average(VKSubject &subject)
{
  return students->Average(subject);
}
void VKGroup::Clear()
{
  students->Clear();
  students = 0;
}
void VKGroup::AddStudent(VKStudent *student)
{
  students->Add(student);
}
void VKGroup::RemoveStudent(VKStudent *student)
{
  students->Remove(student);
}
VKGroup &VKGroup::operator+(VKStudent *student)
{
  students->Add(student);
  return *this;
}
bool VKGroup::operator==(VKObject &object)
{
  return dynamic_cast<VKGroup&>(object).GetName() == GetName();
}
