//
// Created by casubmar on 23.11.2020.
//

#include "Human.hpp"

void Human::meleeAttack(const std::string &target) {
	std::cout << "Super punch (melee attack) on " << target << std::endl;
}

void Human::intimidatingShout(const std::string &target) {
	std::cout << "Sniiiiiiff your faaaaaaart (intimidating shout) on " << target << std::endl;
}

void Human::rangedAttack(const std::string &target) {
	std::cout << "Threw a stone...(range attack) on " << target << std::endl;
}

void Human::action(const std::string &action_name, const std::string &target) {
	std::string actions[3] = {"meleeAttack", "intimidatingShout", "rangeAttack"};

	void (Human::*methods[3])(const std::string &target) = {&Human::meleeAttack, &Human::intimidatingShout, &Human::rangedAttack};
	for (int i = 0; i < 3; ++i) {
		if (actions[i] == action_name) {
			(this->*methods[i])(target);
		}
	}
}