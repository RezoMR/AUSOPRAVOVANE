#include <iostream>
#include "CSVCitac.h"
#include "../structures/heap_monitor.h"
#include "Priradovanie.h"
#include "../structures/table/sorted_sequence_table.h"

int main() {
	initHeapMonitor();
	//Priradovanie* p = new Priradovanie();
	//p->prirad();
	CSVCitac* c = new CSVCitac();

	
	structures::SortedSequenceTable<string, VekUJ*>* sst = c->nacitajVek();
	
	for (auto item : *sst) {
		delete item->accessData();
	}

	delete sst;
	



	delete c;
	//delete p;
	return 0;
}