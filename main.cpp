// Author: Jaspal Singh
// 12/5/2018
// Main for Observer Pattern

#include <iostream>

#include "Concrete_Observer.h"
#include "Concrete_Subject.h"

int main(int argc, char** argv) {
	
	ConcreteSubject Publisher;
	ConcreteObserver FirstSubscriber;
	ConcreteObserver SecondSubscriber(12);
	Publisher.Attach(&FirstSubscriber);
	Publisher.Attach(&SecondSubscriber);
	Publisher.Notify();
	Publisher.Detach(&FirstSubscriber);
	Publisher.Notify();
	Publisher.Detach(&SecondSubscriber);
	Publisher.Notify();

	return 0;
}