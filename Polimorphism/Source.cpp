#include <iostream>
#include <string>

class Object
{
public:
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	Object* Ptr_to_object = new Object;
	Actor* Ptr_to_actor = new Actor;
	Pawn* Ptr_to_pawn = new Pawn;

	Object* ObjectArray[] = { Ptr_to_object, Ptr_to_actor, Ptr_to_pawn };

	for (int i = 0; i < 3; i++)
	{
		ObjectArray[i]->BeginPlay();
	}


	delete Ptr_to_pawn;
	delete Ptr_to_actor;
	delete Ptr_to_object;
	system("pause");
}

void Object::BeginPlay()
{
	std::cout << "Object called \n\n";
}

void Actor::BeginPlay()
{
	std::cout << "Actor called \n\n";
}

void Pawn::BeginPlay()
{
	std::cout << "Pawn called \n\n";
}