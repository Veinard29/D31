#include "VKStudent.h"
VKStudent::VKStudent(void)
{
  Name = "";
  Sex = true;
  Age = 0;
  marks = new VKMarkList();
}
VKStudent::VKStudent(string _Name, bool _Sex, unsigned int _Age, VKMarkList *_marks)
{
  Name = _Name;
  Sex = _Sex;
  Age = _Age;
  marks = _marks;
  if (marks == 0)
    marks = new VKMarkList();
}
VKStudent::~VKStudent(void)
{
  delete marks;
}
string VKStudent::ClassName(void)
{
  return "VKStudent";
}
string VKStudent::Print(void)
{
  stringstream ss;
  stringstream sm;
  ss << "Name: " << Name << " Sex: " << ((Sex == true) ? "M" : "F") << " Age: " << Age;
  sm << marks->Print();
  if (!sm.str().empty()) 
    ss << " Marks: " << endl << ss.str();
  return ss.str();
}
bool VKStudent::operator==(VKObject &object)
{
  VKStudent &s = dynamic_cast<VKStudent&>(object);
  return (Name == s.GetName() && Sex == s.GetSex() && Age == s.GetAge());
}
string VKStudent::GetName(void)
{
  return Name;
}
void VKStudent::SetName(string _Name)
{
  Name = _Name;
}
bool VKStudent::GetSex(void)
{
  return Sex;
}
void VKStudent::SetSex(bool _Sex)
{
  Sex = _Sex;
}
unsigned int VKStudent::GetAge(void)
{
  return Age;
}
void VKStudent::SetAge(unsigned int _Age)
{
  Age = _Age;
}
VKMarkList *VKStudent::GetMarks(void)
{
  return marks;
}
bool VKStudent::IsExcellent(void)
{
  return (marks->MinMark() == 5);
}
bool VKStudent::IsBad(void)
{
  return (marks->MinMark() <= 3);
}
void VKStudent::AddMark(VKMark *mark)
{
  marks->Add(mark);
}
