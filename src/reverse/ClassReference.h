#pragma once

#include "Type.h"
#include "LuaRED.h"

struct ClassReference : ClassType
{
	ClassReference(sol::state_view aView, RED4ext::IRTTIType* apClass, RED4ext::ScriptInstance apInstance);
	~ClassReference();

	virtual RED4ext::ScriptInstance GetHandle(); // This is likely not guaranteed to be an IScriptable should be "InstanceType"

private:
	RED4ext::ScriptInstance m_pInstance;
};
