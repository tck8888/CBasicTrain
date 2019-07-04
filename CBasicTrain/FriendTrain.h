#pragma once
#include <iostream>

class FriendTrain
{
public:
	FriendTrain();
	FriendTrain(char* name);
	FriendTrain(char* name, int age);
	~FriendTrain();

	void setAge(int age);
	void setName(char* name);

	int getAge();
	char* getName();
	void print() const;

	static void changeTag(int temp);
	friend void changeAge(FriendTrain* fri, int age);

	static int tag;
private:
	int  age;
	char* name;
};

