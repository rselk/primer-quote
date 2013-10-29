#include "Quote.h"

double print_total (std::ostream &os, const Quote &item, size_t n)
{
  //net_price is virtual.
  double ret = item.net_price(n); 
  
  os << "ISBN: " 
    << item.isbn() 
    << " # sold: " 
    << n << " total due: "
    << ret << std::endl;

  return ret;
}

