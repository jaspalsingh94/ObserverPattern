// Author: Jaspal Singh
// 12/5/2018
// Definitions of Concrete_Observer

#include "Concrete_Observer.h"

using namespace std;

bool ConcreteObserver::Update() {
	if (SubjectPtr == nullptr) {
		cout << "Cannot update observer since it has no subject. " << endl;
		return false;
	}
	else {
		state = SubjectPtr->GetState();
		return true;
	}
}

int ConcreteObserver::GetId() {
	return id;
}

void ConcreteObserver::StoreSubjectPtr(ConcreteSubject *subject_ptr) { 
	SubjectPtr = subject_ptr;
}