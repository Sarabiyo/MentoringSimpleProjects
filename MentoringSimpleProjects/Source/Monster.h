#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class E_AttributeType : unsigned int;

class Monster
{
public:
	Monster();
	~Monster();

	/** 이름 */
	void SetName(const string& name) { Name = name; }
	string GetName() const { return Name; }

	/** 속성 */
	void SetAttributeType(const E_AttributeType attributeType) { AttributeType = attributeType; }
	E_AttributeType GetAttributeType() const { return AttributeType; }

	/** 스탯 */
	void SetAtk(const int atk) { Atk = atk; }
	int GetAtk() const { return Atk; }

	void SetDef(const int def) { Def = def; }
	int GetDef() const { return Def; }

	void SetHp(const int hp) { Hp = hp;}
	int GetHp() const { return Hp; }

	/** 공격 */
	void Attack(Monster* monster);

	void GetDamage(const int damage);
protected:
	float getDamageMultiple(const E_AttributeType targetAttributeType);

private:
	/** 이름 */
	string Name;

	/** 속성 */
	E_AttributeType AttributeType = E_AttributeType(0);

	/** 스탯 */
	int Atk = 0;
	int Def = 0;
	int Hp = 0;
};

