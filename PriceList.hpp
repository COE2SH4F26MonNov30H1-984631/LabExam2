#ifndef PRICELIST_HPP
#define PRICELIST_HPP

#include <iostream>
using namespace std;

class PriceList {
protected:
    double* prices;
    int itemCount;
    double discountRate;

public:
    PriceList();
    PriceList(int count, double initVal, double extraVal);
    PriceList(const PriceList& other);
    virtual ~PriceList();
    PriceList& operator=(const PriceList& other);

    double getPrice(int index) const;
    virtual double checkoutTotal() const;
};

#endif
