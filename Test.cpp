#include "doctest.h"
#include <iostream>
#include <vector>
#include "sources/MagicalContainer.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Testing MagicalContainer and it's methods")
{
    MagicalContainer mc;
    CHECK(mc.size() == 0);

    // Test addElement()
    mc.addElement(5);
    mc.addElement(3);
    mc.addElement(7);
    mc.addElement(1);
    mc.addElement(9);
    mc.addElement(2);
    mc.addElement(4);
    mc.addElement(6);
    mc.addElement(8);
    mc.addElement(10);

    CHECK(mc.size() == 10);
    CHECK_NOTHROW(mc.addElement(-1));

    // Test removeElement()
    mc.removeElement(5);
    mc.removeElement(10);

    CHECK(mc.size() == 8);
    CHECK_NOTHROW(mc.removeElement(5));
    // Delete an element that doesnt exist
    CHECK_NOTHROW(mc.removeElement(0));
}

TEST_CASE("Testing AscendingIterator - ==, != , = opertaors")
{
    MagicalContainer mc;
    MagicalContainer::AscendingIterator ascIter1(mc);
    MagicalContainer::AscendingIterator ascIter2(mc);

    CHECK_NOTHROW(MagicalContainer::AscendingIterator ascIter2 = ascIter1);
    CHECK(ascIter2.operator==(ascIter1));
    ++ascIter1;
    CHECK(ascIter1.operator!=(ascIter2));
}

TEST_CASE("Testing AscendingIterator - > , < opertaors")
{
    MagicalContainer mc1;
    MagicalContainer mc2;

    mc1.addElement(1);
    mc2.addElement(2);
    MagicalContainer::AscendingIterator ascIter1(mc1);
    MagicalContainer::AscendingIterator ascIter2(mc2);

    CHECK_NOTHROW(ascIter1.operator>(ascIter2));
    CHECK_NOTHROW(ascIter1.operator<(ascIter2));

    CHECK(ascIter1.operator<(ascIter2) == true);
    ++ascIter1;

    CHECK(ascIter1.operator<(ascIter2) == false);
}

TEST_CASE("Testing AscendingIterator - opertaor *")
{
    MagicalContainer mc1;

    mc1.addElement(1);
    MagicalContainer::AscendingIterator ascIter1(mc1);

    CHECK(*ascIter1 == 1);
    ++ascIter1;
    CHECK(*ascIter1 == 2);
}

TEST_CASE("Testing AscendingIterator - begin and end")
{
    MagicalContainer mc1;

    mc1.addElement(1);
    MagicalContainer::AscendingIterator ascIter1(mc1);

    CHECK_NOTHROW(ascIter1.begin());
    CHECK_NOTHROW(ascIter1.end());
}

TEST_CASE("Testing SideCrossIterator - ==, != , = opertaors")
{
    MagicalContainer mc;
    MagicalContainer::SideCrossIterator crossIter1(mc);
    MagicalContainer::SideCrossIterator crossIter2(mc);

    CHECK_NOTHROW(MagicalContainer::SideCrossIterator crossIter2 = crossIter1);
    CHECK(crossIter2.operator==(crossIter1));
    ++crossIter1;
    CHECK(crossIter1.operator!=(crossIter2));
}

TEST_CASE("Testing SideCrossIterator - > , < opertaors")
{
    MagicalContainer mc1;
    MagicalContainer mc2;

    mc1.addElement(1);
    mc1.addElement(2);
    mc2.addElement(3);
    MagicalContainer::SideCrossIterator crossIter1(mc1);
    MagicalContainer::SideCrossIterator crossIter2(mc2);

    CHECK_NOTHROW(crossIter1.operator>(crossIter2));
    CHECK_NOTHROW(crossIter1.operator<(crossIter2));
}

TEST_CASE("Testing SideCrossIterator - opertaor *")
{
    MagicalContainer mc1;

    mc1.addElement(1);
    MagicalContainer::SideCrossIterator crossIter1(mc1);

    CHECK(*crossIter1 == 1);
    ++crossIter1;
    CHECK(*crossIter1 == 2);
}

TEST_CASE("Testing SideCrossIterator - begin and end")
{
    MagicalContainer mc1;

    mc1.addElement(1);
    MagicalContainer::SideCrossIterator crossIter1(mc1);

    CHECK_NOTHROW(crossIter1.begin());
    CHECK_NOTHROW(crossIter1.end());
}

TEST_CASE("Testing PrimeIterator - ==, != , = opertaors")
{
    MagicalContainer mc;
    MagicalContainer::PrimeIterator primeIter1(mc);
    MagicalContainer::PrimeIterator primeIter2(mc);

    CHECK_NOTHROW(MagicalContainer::PrimeIterator primeIter2 = primeIter1);
    CHECK(primeIter2.operator==(primeIter1));
    ++primeIter1;
    CHECK(primeIter1.operator!=(primeIter2));
}

TEST_CASE("Testing SPrimeIterator - > , < opertaors")
{
    MagicalContainer mc1;
    MagicalContainer mc2;

    mc1.addElement(1);
    mc1.addElement(2);
    mc2.addElement(3);
    MagicalContainer::PrimeIterator primeIter1(mc1);
    MagicalContainer::PrimeIterator primeIter2(mc2);

    CHECK_NOTHROW(primeIter1.operator>(primeIter2));
    CHECK_NOTHROW(primeIter1.operator<(primeIter2));
}

TEST_CASE("Testing PrimeIterator - opertaor *")
{
    MagicalContainer mc1;

    mc1.addElement(1);
    MagicalContainer::PrimeIterator primeIter1(mc1);

    CHECK(*primeIter1 == 1);
    ++primeIter1;
    CHECK(*primeIter1 == 2);
}

TEST_CASE("Testing PrimeIterator - begin and end")
{
    MagicalContainer mc1;

    mc1.addElement(1);
    MagicalContainer::PrimeIterator primeIter1(mc1);

    CHECK_NOTHROW(primeIter1.begin());
    CHECK_NOTHROW(primeIter1.end());
}











