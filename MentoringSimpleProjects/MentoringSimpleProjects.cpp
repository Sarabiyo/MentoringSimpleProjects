// MentoringSimpleProjects.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Monster.h"
#include "AttributeType.h"
#include "MyLog.h"

Monster* SpawnMonster(const string name, E_AttributeType type, int atk, int def, int hp)
{
	Monster* newMonster = new Monster();
	if (newMonster == nullptr)
		return nullptr;

	newMonster->SetName(name);
	newMonster->SetAttributeType(type);
	newMonster->SetAtk(atk);
	newMonster->SetDef(def);
	newMonster->SetHp(hp);

	return newMonster;
}

int main()
{
	Monster* monsterFire = SpawnMonster("Fire", E_AttributeType::Fire, 10, 5, 10);
	if (monsterFire == nullptr)
		return 0;

	Monster* monsterWind = SpawnMonster("Wind", E_AttributeType::Wind, 5, 10, 10);
	if (monsterWind == nullptr)
		return 0;

	Monster* monsterLand = SpawnMonster("Land", E_AttributeType::land, 5, 5, 10);
	if (monsterLand == nullptr)
		return 0;

	monsterFire->Attack(monsterLand);
	My_LOG("");
	monsterLand->Attack(monsterFire);
	My_LOG("");
	monsterFire->Attack(monsterWind);
	My_LOG("");
	monsterFire->Attack(monsterLand);
	My_LOG("");


	My_LOG("===========================");
	My_LOG("HP 잔량");
	My_LOG("%s Monster : %d", monsterFire->GetName().c_str(), monsterFire->GetHp());
	My_LOG("%s Monster : %d", monsterWind->GetName().c_str(), monsterWind->GetHp());
	My_LOG("%s Monster : %d", monsterLand->GetName().c_str(), monsterLand->GetHp());

	return 0;
}
