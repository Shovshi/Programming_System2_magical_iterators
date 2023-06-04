#include "MagicalContainer.hpp"
using namespace ariel;

// Macigal Container

MagicalContainer::MagicalContainer(){}
MagicalContainer::~MagicalContainer(){}
void MagicalContainer::addElement(int num)
{
    magicalContainer.emplace_back(num);
}
void MagicalContainer::removeElement(int num)
{

}

int MagicalContainer::size()
{
    return magicalContainer.size();
}

// Ascending Iterator
// Constructors
MagicalContainer::AscendingIterator::AscendingIterator():ascIter(nullptr) , i(0){}
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other):ascIter(other.ascIter) , i(other.i){}
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &magicalContainer):ascIter(&magicalContainer) ,i(0){}
MagicalContainer::AscendingIterator::~AscendingIterator(){}

// Operators
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
{
    return *this;
}
bool MagicalContainer::AscendingIterator:: operator==(const AscendingIterator &other) const
{
    return true;
}
bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return false;
}
bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
{
    return true;
}
bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
{
    return true;
}
int MagicalContainer::AscendingIterator::operator*()
{
    return 0;
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++()
{
    return *this;
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return *this;
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    return *this;
}

// SideCross Iterator
// Constructors
MagicalContainer::SideCrossIterator::SideCrossIterator():crossIter(nullptr) , i(0){}
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other):crossIter(other.crossIter) , i(other.i){}
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &magicalContainer):crossIter(&magicalContainer) ,i(0){}
MagicalContainer::SideCrossIterator::~SideCrossIterator(){}

// Operators
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
{
    return *this;
}
bool MagicalContainer::SideCrossIterator:: operator==(const SideCrossIterator &other) const
{
    return true;
}
bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    return false;
}
bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
{
    return true;
}
bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
{
    return true;
}
int MagicalContainer::SideCrossIterator::operator*()
{
    return 0;
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator++()
{
    return *this;
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return *this;
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    return *this;
}

// Prime Iterator
// Constructors
MagicalContainer::PrimeIterator::PrimeIterator():primeIter(nullptr) , i(0){}
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other):primeIter(other.primeIter) , i(other.i){}
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &magicalContainer):primeIter(&magicalContainer) ,i(0){}
MagicalContainer::PrimeIterator::~PrimeIterator(){}

// Operators
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
{
    return *this;
}
bool MagicalContainer::PrimeIterator:: operator==(const PrimeIterator &other) const
{
    return true;
}
bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    return false;
}
bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
{
    return true;
}
bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
{
    return true;
}
int MagicalContainer::PrimeIterator::operator*()
{
    return 0;
}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator++()
{
    return *this;
}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return *this;
}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    return *this;
}



