#include "BasePlayer.h"

BasePlayer::BasePlayer() {}

void BasePlayer::SetArmament(Armament* armament)
{
	_currentArma_ptr = make_shared<Armament*>(armament);
};

void BasePlayer::UseArmament()
{
	(*_currentArma_ptr)->Use();
};