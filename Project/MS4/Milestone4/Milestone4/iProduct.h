//
// Milestone 4
// 
// Student Name: Andriy Ostapovych
// Student ID# 143066181
// Date 3/28/19
//

#ifndef _244_IPRODUCT_H
#define _244_IPRODUCT_H

#include <iostream>

using namespace std;
namespace ama {

	const int max_length_label = 30;
	const int max_length_sku = 7;
	const int max_length_name = 75;
	const int max_length_unit = 10;

	const int write_condensed = 0;
	const int write_table = 1;
	const int write_human = 2;

	const double tax_rate = 0.13;

	class iProduct {
	
	public:

		virtual std::ostream& write(ostream& os, int writeMode) const = 0;
	
		virtual std::istream& read(istream& is, bool interractive) = 0;
		
		virtual bool operator==(const char* shu) const = 0;
		
		virtual double total_cost() const = 0;
		
		virtual int qtyNeeded() const = 0;
		
		virtual int qtyAvailable() const = 0;
		
		virtual const char* name() const = 0;
		
		virtual int operator+=(int qty) = 0;
		
		virtual bool operator>(const iProduct& other) const = 0;

		virtual ~iProduct() {};
	};

}
#endif