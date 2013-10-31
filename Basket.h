#ifndef BASKET_H
#define BASKET_H

#include <iostream>
#include <memory>
#include <set>

#include "Quote.h"

//basket to hold books.

class Basket
{
  public:
    void add_item (const Quote &sale);
    void add_item (Quote && sale);

    void add_item(const std::shared_ptr<Quote> &sale)
      {items.insert(sale); }
    double total_receipt(std::ostream&) const;
  private:
    static bool compare (const std::shared_ptr<Quote> &lhs,
	const std::shared_ptr<Quote> &rhs)
    { return lhs->isbn() < rhs -> isbn(); }

    std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items {compare};
};

#endif
