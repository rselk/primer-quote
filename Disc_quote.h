#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include <iostream>

#include "Quote.h"

//NOTE - this in an abstract base class

class Disc_quote : public Quote
{
  public:
    Disc_quote();
    Disc_quote(const std::string &book, double price, 
	std::size_t qty, double disc) : 
      Quote(book, price), quantity(qty), discount(disc) {}
    double net_price(std::size_t) const = 0; //pure virtual funciton

    std::pair<size_t, double> discount_policy() const
      { return {quantity, discount}; }

  protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

#endif
