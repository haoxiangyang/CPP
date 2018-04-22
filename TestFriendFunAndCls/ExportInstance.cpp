#include "ExportInstance.h"
#include "OneMale.h"

DLL_INSTANCE int TestFriend()
{

	OneFemale female;
	OneMale male;

	return female.GetMaleAge(male);
}
