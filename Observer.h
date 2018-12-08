// Author: Jaspal Singh
// 12/5/18
// Header file for Observer

#ifndef OBSERVER_OBSERVER_PATTERN
#define OBSERVER_OBSERVER_PATTERN

// Forward Subject class
class ConcreteSubject;

// Pure observer class
class Observer {
public:	
	int id;
	int state;
	ConcreteSubject *SubjectPtr;
	// updates the state of the observer
	virtual bool Update() = 0;
	virtual int GetId() = 0;
	virtual void StoreSubjectPtr(ConcreteSubject *subject_ptr) = 0;
}; 

#endif