#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

//Base Class

class Quote
{
  public:
    Quote() = default;
    Quote(const Quote&);
    Quote(Quote&&) = default;
    Quote &operator=(const Quote&);
    Quote &operator=(Quote&&) = default; //move assign
    Quote (const std::string &book, double sales_price) :
      bookNo(book), price(sales_price) {}
    std::string isbn() const { return bookNo; }
    virtual double net_price (std::size_t n) const
    { return n* price; }
    virtual ~Quote() = default;


  private:
    std::string bookNo;

  protected: 
    double price = 0.0;
};

double print_total (std::ostream&, const Quote&, size_t);

#endif
