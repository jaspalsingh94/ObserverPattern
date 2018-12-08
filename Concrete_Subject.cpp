// Author: Jaspal Singh
// 12/5/2018
// Definitions of Concrete_Subject

#include "Concrete_Subject.h"
using namespace std;

//If the observer is a valid observer then it is attached.
bool ConcreteSubject::Attach(Observer *this_observer) {
	int id = this_observer->GetId();
	if (id < 0) {
		cout << "Observer ID cannot be a negative number!" << endl;
		return false;
	}
	else {
		subscribers.push_back(this_observer);
		cout << "Observer with id " << id << " added as a subscriber!" << endl;
		this_observer->StoreSubjectPtr(this);
		return true;
	}
}

//If the oberserver is a subscriber then it is detached. 
bool ConcreteSubject::Detach(Observer *this_observer) {
	int id = this_observer->GetId();
	if (id < 0) {
		cout << "Observer ID cannot be a negative number!" << endl;
		return false;
	}
	else {
		auto it = std::find(subscribers.begin(), subscribers.end(), this_observer);
		if (it != subscribers.end()) {
			// Set the Subject Pointer in the observer to NULL
			(*it)->StoreSubjectPtr(nullptr);
			subscribers.erase(it);
			cout << "Observers with id " << id << " removed from subscribers and it's subject pointer updated. " << endl;
			return true;			
		}
		else {
			cout << "Observer is not part of the subscribers list so it is not removed. " << endl;
			return false;
		}
		return true;		
	}
}

// Notifies all the observers of the change by updating their state
void ConcreteSubject::Notify() {
	for (auto& observer: subscribers) {
		cout << "Updating observer with id: " << observer->GetId() << endl;
		observer->Update();
	}
	cout << "All Observers notified." << endl;
}

// returns the state of the object
int ConcreteSubject::GetState() const {
	return state;
}