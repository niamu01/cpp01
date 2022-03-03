#include "HumanB.hpp"

HumanB::HumanB(std::string HumanName) : _weapon(NULL) //3. 함수(인자) : 어쩌구 <- 이게대체 먼지?
//포인터는 선언할 때 초기화해주지 않아도 됨 알아서 null이 들어가있기 때문!
{
	_HumanName = HumanName;
}
void HumanB::attack()
{
	if (_weapon == NULL)
		std::cout << "don't have weapon" << std::endl;
	else
		std::cout << _HumanName << " attacks with his " << _weapon->getType() << std::endl;

}
void HumanB::setWeapon(Weapon &weapon) //1. 여기서 *이아니라 &(헤더도)
{
	_weapon = &weapon;
}