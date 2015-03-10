#ifndef _VKOBJECT_H_
#define _VKOBJECT_H_
#include <string>
#include <sstream>
using namespace std;
class VKObject
{
public:
  virtual string ClassName(void) = 0;
  virtual string Print(void) = 0;
  virtual bool operator==(VKObject&) = 0;
};

#endif 
