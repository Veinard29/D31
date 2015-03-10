#include "VKMark.h"
VKMark::VKMark(void)
{
  subject = VKSubject();
  mark = 0;
}
VKMark::VKMark(VKSubject _subject, unsigned int _mark)
{
  subject = _subject;
  mark = _mark;
}
string VKMark::ClassName(void)
{
  return "VKMark";
}
string VKMark::Print(void)
{
  stringstream ss;
  ss << "Subject: " << subject.GetSubjectName() << " Mark: " << mark;
  return ss.str();
}
bool VKMark::operator==(VKObject &object)
{
  VKMark &m = dynamic_cast<VKMark&>(object);
  return (m.GetSubject() == GetSubject() && m.GetMark() == GetMark());
}
VKSubject VKMark::GetSubject(void)
{
  return subject;
}
void VKMark::SetSubject(VKSubject _subject)
{
  subject = _subject;
}
unsigned int VKMark::GetMark(void)
{
  return mark;
}
void VKMark::SetMark(unsigned int _mark)
{
  mark = _mark;
}
