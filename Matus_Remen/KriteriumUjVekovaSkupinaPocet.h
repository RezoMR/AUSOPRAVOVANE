#pragma once

#include "KriteriumUJ.h"
#include "EVS.h"

class KriteriumUJVekovaSkupinaPocet : public KriteriumUJ<int>{
private: 
	EVS_ENUM skupina;
public:
	int evaluate(UzemnaJednotka& uj);
	KriteriumUJVekovaSkupinaPocet(EVS_ENUM skup);

};
inline KriteriumUJVekovaSkupinaPocet::KriteriumUJVekovaSkupinaPocet(EVS_ENUM skup)
{
	skupina = skup;
}

inline int KriteriumUJVekovaSkupinaPocet::evaluate(UzemnaJednotka& uj) {
	uj.vytvorVekoveSkupiny();
	switch (skupina) {
		case
		PREDPRODUKTIVNI:
			std::cout << "Predproduktivny " << uj.vratEVS(0) << "\n";
			return uj.vratEVS(0);
			break;
			case
			PRODUKTIVNI:
				std::cout << "Produktivny: " << uj.vratEVS(1) << "\n" ;
				return uj.vratEVS(1);
				break;
			case
			POPRODUKTIVNI:
				std::cout << "Poproduktivny: " << uj.vratEVS(2) << "\n";
					return uj.vratEVS(2);
					break;

	}
	return 0;
}
