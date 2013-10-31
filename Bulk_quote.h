#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <iostream>
#include <string>

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote
{
  public:
    Bulk_quote() = default;


    Bulk_quote(const Bulk_quote& b) : Disc_quote() {
     std::cout<< "Bulk_quote copy constructor " <<std::endl; 
    } 
    Bulk_quote &operator=(const Bulk_quote &b)
    {
      std::cout<< "Bulk_quote assing= op " <<std::endl;
      Disc_quote::operator=(b); 
      return *this;
    }
    Bulk_quote(const std::string &book, double price, std::size_t qty, double disc) : 
      Disc_quote(book, price, qty, disc) {} 
      
    double net_price (std::size_t) const override;
};

#endif
