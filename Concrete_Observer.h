// Author: Jaspal Singh
// 12/5/18
// Header file for Concrete Observer

#ifndef CONCRETE_OBSERVER_OBSERVER_PATTERN
#define CONCRETE_OBSERVER_OBSERVER_PATTERN

#include<iostream>

#include "Observer.h"
#include "Concrete_Subject.h"

class ConcreteObserver: public Observer {
private:
	int id;
	int state;
	ConcreteSubject *SubjectPtr;
public: 
	ConcreteObserver(): id(1), state(0), SubjectPtr(nullptr) {} 
	ConcreteObserver(int id): id(id), state(0), SubjectPtr(nullptr) {}
	bool Update();
	int GetId();
	void StoreSubjectPtr(ConcreteSubject *subject_ptr); 	
	// const bool operator==(const ConcreteObserver & rhs) const {
	// 	if (id == rhs.id) {
	// 		return true;
	// 	}
	// 	else 
	// 		return false;
	// }
};

#endif