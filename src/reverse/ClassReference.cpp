#include <stdafx.h>

#include "ClassReference.h"

ClassReference::ClassReference(sol::state_view aView, RED4ext::IRTTIType* apClass, RED4ext::ScriptInstance apInstance)
    : ClassType(std::move(aView), apClass)
    , m_pInstance(apInstance)
{
}

ClassReference::~ClassReference() = default;

RED4ext::ScriptInstance ClassReference::GetHandle()
{
    return m_pInstance;
}
