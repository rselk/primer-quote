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

Quote::Quote(const Quote &q) //copy constructor
{
  std::cout<< "Quote copy constructor " <<std::endl;
  bookNo = q.bookNo;
  price = q.price; 
}

Quote &Quote::operator=(const Quote &q)
{
  //nothing on heap
  std::cout<< "copy assignment QUOTE " <<std::endl;
  bookNo = q.bookNo;
  price = q.price;
  return *this;
}
