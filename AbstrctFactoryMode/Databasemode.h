#pragma once
#include <iostream>

class User
{
	void getID()
	{
		std::cout << " get id success" << std::endl;
	}

	void getUserName()
	{
		std::cout << " get id success" << std::endl;
	}
};

class IUser
{
public:
	virtual void insert(User user) { return; }

	virtual IUser* getUser(int id) { return NULL; }
}; 

class SQLUser : public IUser
{
public: 
	void insert(User user)
	{
		std::cout << "sql server�� ���û����һ����¼ " << std::endl;
	}

	IUser* getUser(int id)
	{
		std::cout << "��sql server�� �����û�ID��ȡһ����¼ " << std::endl;
		return NULL;
	}
};

class AccessUser : public IUser
{
public:
	void insert(User user)
	{
		std::cout << "access server�� ���û����һ����¼ " << std::endl;
	}

	IUser* getUser(int id)
	{
		std::cout << "��access server�� �����û�ID��ȡһ����¼ " << std::endl;
		return NULL;
	}
};

 class FactoryClass
{
public:
	 virtual IUser* createUser()
	 {
		 
		 return NULL;
	 }
};

 class SQLFactoryClass : public FactoryClass
 {
 public:
	 IUser* createUser()
	 {
		 IUser* ret = new SQLUser();
		 std::cout << "����SQLUser ����" << std::endl;
		 return ret;
	 }
 };

 class AccessFactoryClass : public FactoryClass
 {
 public:
	 IUser* createUser()
	 {
		 IUser* ret = new AccessUser();
		 std::cout << "����AccessUser ����" << std::endl;
		 return ret;
	 }
 };