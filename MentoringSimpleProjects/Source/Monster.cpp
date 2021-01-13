#include "Monster.h"
#include <algorithm>

#include "AttributeType.h"
#include "MyLog.h"

Monster::Monster()
{
}

Monster::~Monster()
{

}

void Monster::Attack(Monster* monster)
{
	if (monster == nullptr)
		return;

	float multiple = getDamageMultiple(monster->AttributeType);
	int damage = (Atk - monster->Def) * multiple;
	My_LOG("Atk :[%d] - Def :[%d], ���[%.1f]", Atk, monster->Def, multiple);

	int finalDamage = std::max(1, damage);

	My_LOG("[%s]Monster�� [%s]Monster���� %d�� �������� �־����ϴ�.", Name.c_str(), monster->Name.c_str(), finalDamage);

	monster->GetDamage(finalDamage);
}

void Monster::GetDamage(int damage)
{
	Hp = std::max(0, Hp - damage);

	My_LOG("%s Monster�� %d�� �������� �Ծ� Hp�� %d �Ǿ����ϴ�.", Name.c_str(), damage, Hp);
}

float Monster::getDamageMultiple(const E_AttributeType targetAttributeType)
{
	const float defaultMultiple = 0.5f;

	int result = AttributeHelper::CompareAttributeType(AttributeType, targetAttributeType);

	return 1.f + result * defaultMultiple;
}
