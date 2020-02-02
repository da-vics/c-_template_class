#include "myarray.h"

///.................iterate::

///template<class T>
ostream& operator<<(ostream& strm, const iterate& obj)
{
	strm << obj.pt;
	return strm;
}///

bool iterate::operator!=(int& pr) const
{
	if (pt != &pr) return true;

	else return false;
}

void iterate::operator=(int& pr) { pt = &pr; }

int& iterate::operator*()const { return *pt; }

void iterate::operator++() { ++pt; }