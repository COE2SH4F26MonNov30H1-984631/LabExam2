#ifndef DISCOUNTLIST_HPP
#define DISCOUNTLIST_HPP

#include "PriceList.hpp"

class DiscountList : public PriceList {
public:
    DiscountList();
    DiscountList(int count, double initVal, double extraVal);
    DiscountList(const DiscountList& other);
    virtual ~DiscountList();
    DiscountList& operator=(const DiscountList& other);

    virtual double checkoutTotal() const override;
};

#endif
