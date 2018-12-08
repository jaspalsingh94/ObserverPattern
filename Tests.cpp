#define CATCH_CONFIG_MAIN

#include <iostream>

#include "catch.hpp"
#include "Concrete_Observer.h"
#include "Concrete_Subject.h"

TEST_CASE("Testing Observers with invalid ID's.") {
	ConcreteSubject Publisher;
	ConcreteObserver InvalidSubscriber(-1);
	ConcreteObserver ValidSubscriber(10);

	REQUIRE( Publisher.Attach(&InvalidSubscriber) == false);
	REQUIRE( Publisher.Detach(&InvalidSubscriber) == false);
	REQUIRE( Publisher.Detach(&ValidSubscriber) == false);
}

TEST_CASE("Updating Observer without a Subject. ") {
	ConcreteObserver OnlySubscriber(10);
	REQUIRE( OnlySubscriber.Update() == false);
}