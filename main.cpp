#include <iostream>

#include "Quote.h"
#include "Bulk_quote.h"

int main()
{

  Quote base("0-201-82470-1", 50);
  print_total(std::cout, base, 10);

  Bulk_quote derived ("0-201-82470-1", 50, 5, .19);
  print_total(std::cout, derived, 10);

}
