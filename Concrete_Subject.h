// Author: Jaspal Singh
// 12/5/2018
// Header file for ConcretSubject

#ifndef CONCRETE_SUBJECT_OBSERVER_PATTERN
#define CONCRETE_SUBJECT_OBSERVER_PATTERN

#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

#include "Observer.h"
#include "Subject.h"

class ConcreteSubject: public Subject {
private:
	// vector of current subscribers.
	std::vector<Observer *> subscribers;
	int state;
public:
	// Constructor;
	ConcreteSubject():subscribers(0), state(0) {}  
	// Function overrides
	bool Attach(Observer *this_observer) override;
	bool Detach(Observer *this_observer) override;
	void Notify() override;
	// getter for state
	int GetState() const;
};

#endif