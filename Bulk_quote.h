#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <iostream>
#include <string>

#include "Quote.h"

class Bulk_quote : public Quote
{
  public:
    double net_price (std::size_t) const override; 
};

#endif
