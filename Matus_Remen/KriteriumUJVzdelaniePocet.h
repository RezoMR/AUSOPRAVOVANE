#pragma once

#include "KriteriumUJ.h"


	class KriteriumUJVzdelaniePocet : public KriteriumUJ<int> {
	private:
		VZDELANIE_ENUM vzdelanie;

	public:
		int evaluate(UzemnaJednotka& uj) override;
		KriteriumUJVzdelaniePocet(VZDELANIE_ENUM vzdelaniee);
	};

	inline KriteriumUJVzdelaniePocet::KriteriumUJVzdelaniePocet(VZDELANIE_ENUM vzdelaniee)
	{
		vzdelanie = vzdelaniee;
	}

	inline int KriteriumUJVzdelaniePocet::evaluate(UzemnaJednotka& uj) {
		int ktore;
		string vypis;
		switch (vzdelanie) {
		case BEZUKONCENEHO:
			vypis = "Bez ukonceneho ";
			ktore = 0;
			break;
		case ZAKLADNE:
			vypis = "Zakladne ";
			ktore = 1;
			break;
		case UCNOVSKE:
			vypis = "Ucnovske ";
			ktore = 2;
			break;
		case STREDNE:
			vypis = "Stredne ";
			ktore = 3;
			break;
		case VYSSIE:
			vypis = "Vyssie ";
			ktore = 4;
			break;
		case VYSOKOSKOLSKE:
			vypis = "Vysokoskolske ";
			ktore = 5;
			break;
		case BEZVZDELANIA:
			vypis = "Bez vzdelania ";
			ktore = 6;
			break;
		case NEZISTENE:
			vypis = "Nezistene ";
			ktore = 7;
			break;
		}
		cout << "Pocet " << vypis << uj.vratPocetVzdelanie(ktore) << "\n";
		return uj.vratPocetVzdelanie(ktore);

	}

