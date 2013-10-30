#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <iostream>
#include <string>

#include "Quote.h"

class Bulk_quote : public Quote
{
  public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : 
      Quote(book, p), min_qty(qty), discount(disc) {}
      
    double net_price (std::size_t) const override;
  
  private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

#endif
