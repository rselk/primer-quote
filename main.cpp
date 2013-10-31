/*
   This is a program that is discussed in chapter 15 of the book C++ Primer.

   The program focuses on teaching the following
   - Virtual Functions & Pure Virtual Functions
   - Object Orientated Programming
   - Smart Pointers (shared_ptr in this case)
   - Writing an abstract base class
   
   Compiled on G++ 4.7 on Ubuntu 13.04
*/

#include <iostream>
#include <vector>
#include <memory>

#include "Quote.h"
#include "Bulk_quote.h"
#include "Disc_quote.h"

int main()
{
  std::vector<std::shared_ptr<Quote>> v1;
  
  v1.push_back(std::make_shared<Quote>("0-201-82470-1", 50));
  v1.push_back(std::make_shared<Quote>("0-301-82470-1", 2));
  v1.push_back(std::make_shared<Quote>("0-401-82470-1", 9));
  v1.push_back(std::make_shared<Bulk_quote>("0-701-82470-1", 92, 90, .30));
  v1.push_back(std::make_shared<Bulk_quote>("0-701-82470-1", 44, 40, .30));
  v1.push_back(std::make_shared<Bulk_quote>("0-701-82470-1", 22, 10, .30));


  double sum = 0.0;
  for (const auto &i : v1)
    sum += print_total(std::cout, *i, 1);

  std::cout<<"Total Sum: " << sum <<std::endl;
}
