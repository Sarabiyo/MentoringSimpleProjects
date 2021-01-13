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
 *	�� > �ٶ� > �� > �� > �ٶ�
 *			   ��
 *	���� ���� ��ũ�� ����Ʈ�� �����ҵ�
 */

class AttributeHelper
{
public:
	static int CompareAttributeType(E_AttributeType a, E_AttributeType b);
};