#pragma once

#include <map>

enum class E_AttributeType : unsigned int
{
	None = 0,
	Fire,
	Wind,
	Water,
	land,
};

/**
 *	불 > 바람 > 물 > 불 > 바람
 *			   땅
 *	이중 원형 링크드 리스트도 가능할듯
 */

class AttributeHelper
{
public:
	static int CompareAttributeType(E_AttributeType a, E_AttributeType b);
};