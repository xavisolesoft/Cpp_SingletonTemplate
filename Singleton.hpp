#pragma once

template<class T>
class Singleton
{
protected:
	Singleton(){}

private:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:
	static T& getInstance()
	{
		static T instance;
		return instance;
	}
};

