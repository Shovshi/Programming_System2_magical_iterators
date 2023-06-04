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

}
bool MagicalContainer::AscendingIterator:: operator==(const AscendingIterator &other) const
{

}
bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{

}
bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
{

}
bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
{

}
int MagicalContainer::AscendingIterator::operator*()
{

}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++()
{

}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{

}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{

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

}
bool MagicalContainer::SideCrossIterator:: operator==(const SideCrossIterator &other) const
{

}
bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{

}
bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
{

}
bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
{

}
int MagicalContainer::SideCrossIterator::operator*()
{

}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator++()
{

}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{

}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{

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

}
bool MagicalContainer::PrimeIterator:: operator==(const PrimeIterator &other) const
{

}
bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{

}
bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
{

}
bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
{

}
int MagicalContainer::PrimeIterator::operator*()
{

}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator++()
{

}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{

}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{

}



