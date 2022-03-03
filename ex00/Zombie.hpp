#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie {
public:
	void	announce(void);
	Zombie(std::string name);
	~Zombie(void);
private:
//소멸자에 Zombie의 이름을 포함한 디버깅 메시지를 추가하세요
	std::string name;
	std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif

//사용 방식에 따라 스택영역 또는 힙 영역에 적절히 할당되어 있어야 합니다
