// Author: Jaspal Singh
// 12/5/18
// Header file for subject

#ifndef SUBJECT_OBSERVER_PATTERN
#define SUBJECT_OBSERVER_PATTERN

#include "Observer.h"

// Pure Subject class
class Subject {
	
public:
	// attachhes the observer to this subject node
	virtual bool Attach(Observer *this_observer) = 0;	
	// detaces the observer from current node
	virtual bool Detach(Observer *this_observer) = 0;
	// notifies all observers of a change
	virtual void Notify() = 0;
};

#endif