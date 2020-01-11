#pragma once

#include "Singleton.hpp"

class DummySingletonTest :
		public Singleton<DummySingletonTest>
{
	friend class Singleton<DummySingletonTest>;

protected:
	DummySingletonTest();

public:
	void test() const;
};

