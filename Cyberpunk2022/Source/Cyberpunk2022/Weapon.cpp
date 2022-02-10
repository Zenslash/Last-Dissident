// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

AWeapon::AWeapon()
{
	_ammo = 0;
}

void AWeapon::DecrementAmmo()
{
	_ammo -= 1;
	if(_ammo < 0)
	{
		_ammo = 0;
	}
}
