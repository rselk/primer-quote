#include <iostream>
#include <vector>
#include <memory>

#include "Quote.h"
#include "Bulk_quote.h"
#include "Disc_quote.h"

int main()
{

  std::vector<std::shared_ptr<Quote>> v1;

  //single sales.
  Quote base("0-201-82470-1", 50);
  Quote base1("0-301-82470-1", 20);
  Quote base2("0-401-82470-1", 90);
  Bulk_quote bq("0-501-82470-1", 22, 40, .10); //discount applied at 40
  Bulk_quote bq1("0-601-82470-1", 52, 20, .20);
  Bulk_quote bq2("0-701-82470-1", 92, 90, .30);
  
  v1.push_back(std::make_shared<Quote>(base));
  v1.push_back(std::make_shared<Quote>(base1));
  v1.push_back(std::make_shared<Quote>(base2));
  v1.push_back(std::make_shared<Bulk_quote>("0-701-82470-1", 92, 90, .30));
  v1.push_back(std::make_shared<Bulk_quote>("0-701-82470-1", 44, 40, .30));
  v1.push_back(std::make_shared<Bulk_quote>("0-701-82470-1", 22, 10, .30));


  double sum = 0.0;
  std::cout<< "---------------------" <<std::endl;

  for (const auto &i : v1)
  {
    sum += print_total(std::cout, *i, 1);
  }

  std::cout<< "---------------------" <<std::endl;

  std::cout<<"Total Sum: " << sum <<std::endl;

}
