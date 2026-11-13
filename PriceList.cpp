#include "PriceList.hpp"

PriceList::PriceList() : prices(nullptr), itemCount(0), discountRate(0.10) {}

PriceList::PriceList(int count, double initVal, double extraVal) : prices(nullptr), itemCount(count), discountRate(extraVal) {
    if (itemCount > 0) {
        prices = new double[itemCount];
        for (int i = 0; i < itemCount; ++i) {
            prices[i] = initVal + static_cast<double>(i);
        }
    } else {
        itemCount = 0;
    }
}

// TODO 1: Complete the Copy Constructor (Deep Copy)
PriceList::PriceList(const PriceList& other) {
    (void)other;
}

// TODO 2: Complete the Destructor (Release DMA)
PriceList::~PriceList() {
}

// TODO 3: Complete the Copy Assignment Operator (Deep Copy + Self-Assignment Guard)
PriceList& PriceList::operator=(const PriceList& other) {
    (void)other;
    return *this;
}

double PriceList::getPrice(int index) const {
    if (index >= 0 && index < itemCount && prices != nullptr) {
        return prices[index];
    }
    return static_cast<double>(0);
}

// TODO 4: Implement checkoutTotal() (Maximum 8 lines of implementation)
double PriceList::checkoutTotal() const {
    return static_cast<double>(0);
}
