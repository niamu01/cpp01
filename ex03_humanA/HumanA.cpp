#include "HumanA.hpp"

HumanA::HumanA(std::string HumanName, Weapon &weapon)
//레퍼런스를 선언할땐 값을 초기화를 같이 해주어야함 (별명을 지을건데 원본이 없는 상황)
{
	weapon = weapon;
	HumanName = HumanName;
}
void HumanA::attack()
{
	std::cout << HumanName << " attacks with his " << weapon.getType() << std::endl;
}