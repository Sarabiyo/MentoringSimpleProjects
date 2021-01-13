#include "AttributeType.h"

int AttributeHelper::CompareAttributeType(E_AttributeType left, E_AttributeType right)
{
	switch (left)
	{
	case E_AttributeType::Fire:
	{
		if (right == E_AttributeType::Wind)
			return 1;
		else if (right == E_AttributeType::Water || right == E_AttributeType::land)
			return -1;
	} break;
	case E_AttributeType::Wind:
	{
		if (right == E_AttributeType::Water || right == E_AttributeType::land)
			return 1;
		else if (right == E_AttributeType::Fire)
			return -1;
	} break;
	case E_AttributeType::Water:
	case E_AttributeType::land:
	{
		if (right == E_AttributeType::Fire)
			return 1;
		else if (right == E_AttributeType::Wind)
			return -1;
	} break;
	}
	return 0;
}
