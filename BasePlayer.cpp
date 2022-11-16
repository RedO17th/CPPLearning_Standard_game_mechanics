#include "BasePlayer.h"

BasePlayer::BasePlayer() {}

void BasePlayer::SetArmament(IArmament* armament)
{
	_currentArmament = armament;
};

void BasePlayer::UseArmament()
{
	_currentArmament->Use();
};