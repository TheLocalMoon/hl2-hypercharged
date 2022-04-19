#include "cbase.h"
#include "c_weapon__stubs.h"
#include "basehlcombatweapon_shared.h"
#include "c_basehlcombatweapon.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

class C_HLCustomWeaponMelee : public C_BaseHLBludgeonWeapon
{
public:
	DECLARE_CLASS(C_HLCustomWeaponMelee, C_BaseHLBludgeonWeapon);
	DECLARE_CLIENTCLASS();
	DECLARE_PREDICTABLE();

	C_HLCustomWeaponMelee();

	virtual const char* GetWeaponScriptName() { return m_iszWeaponScriptName; }
private:
	char m_iszWeaponScriptName[128];
};

STUB_WEAPON_CLASS_IMPLEMENT(weapon_hlcustommelee, C_HLCustomWeaponMelee);

IMPLEMENT_CLIENTCLASS_DT(C_HLCustomWeaponMelee, DT_HLCustomWeaponMelee, CHLCustomWeaponMelee)
RecvPropString(RECVINFO(m_iszWeaponScriptName)),
END_RECV_TABLE();

C_HLCustomWeaponMelee::C_HLCustomWeaponMelee()
{
	m_iszWeaponScriptName[0] = '\0';
}



class C_HLCustomWeaponGun : public C_BaseHLBludgeonWeapon
{
public:
	DECLARE_CLASS(C_HLCustomWeaponGun, C_BaseHLBludgeonWeapon);
	DECLARE_CLIENTCLASS();
	DECLARE_PREDICTABLE();

	C_HLCustomWeaponGun();

	virtual const char* GetWeaponScriptName() { return m_iszWeaponScriptName; }
private:
	char m_iszWeaponScriptName[128];
};

STUB_WEAPON_CLASS_IMPLEMENT(weapon_hlcustomgun, C_HLCustomWeaponGun);

IMPLEMENT_CLIENTCLASS_DT(C_HLCustomWeaponGun, DT_HLCustomWeaponGun, CHLCustomWeaponGun)
RecvPropString(RECVINFO(m_iszWeaponScriptName)),
END_RECV_TABLE();

C_HLCustomWeaponGun::C_HLCustomWeaponGun()
{
	m_iszWeaponScriptName[0] = '\0';
}