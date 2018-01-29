#pragma once

class Player
{
public:
	Player();
	~Player();

	void SetHealth(int health);
	int GetHealth()
	{
		return Health;
	};
private:
	int Health; // Unreal standard all member variables should be uppercase start
protected:

};