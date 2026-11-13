#include "DiscountList.hpp"

DiscountList::DiscountList() : PriceList() {}

DiscountList::DiscountList(int count, double initVal, double extraVal) : PriceList(count, initVal, extraVal) {}

DiscountList::DiscountList(const DiscountList& other) : PriceList(other) {}

DiscountList::~DiscountList() {}

DiscountList& DiscountList::operator=(const DiscountList& other) {
    if (this != &other) {
        PriceList::operator=(other);
    }
    return *this;
}

// TODO 5: Override checkoutTotal() (Maximum 8 lines of implementation)
double DiscountList::checkoutTotal() const {
    return static_cast<double>(0);
}
