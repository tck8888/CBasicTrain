#include "FriendTrain.h"

FriendTrain::FriendTrain()
{
}

FriendTrain::FriendTrain(char* name) :age(0)
{
	this->name = name;

}


FriendTrain::FriendTrain(char* name, int age)
{

	this->name = name;
	this->age = age;
}
FriendTrain::~FriendTrain()
{
}

void FriendTrain::setAge(int age)
{
	this->age = age;
}

void FriendTrain::setName(char* name)
{
	this->name = name;
}

int FriendTrain::getAge()
{
	return this->age;
}

char* FriendTrain::getName()
{
	return this->name;
}

void FriendTrain::print() const
{
}

void FriendTrain::changeTag(int temp)
{
}

void changeAge(FriendTrain* fri, int age)
{
}
