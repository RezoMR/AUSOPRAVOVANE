#pragma once

#include "KriteriumUJ.h"

class KriteriumUJVzdelaniePodiel : public KriteriumUJ<double> {
private:
	VZDELANIE_ENUM vzdelanie;
public:
	double evaluate(UzemnaJednotka& uj) override;
	KriteriumUJVzdelaniePodiel(VZDELANIE_ENUM vzdelaniee);
};

inline double KriteriumUJVzdelaniePodiel::evaluate(UzemnaJednotka& uj) {
	int ktore =0;
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
	double podiel = 0;
	double prve = (double)uj.vratPocetVzdelanie(ktore);
	double druhe = (double)uj.vratPocetLudi();

	podiel = prve / druhe;
	podiel = podiel * 100;

	std::cout << vypis <<  "podiel je:" << podiel << "\n";
	return podiel;
}

inline KriteriumUJVzdelaniePodiel::KriteriumUJVzdelaniePodiel(VZDELANIE_ENUM vzdelaniee)
{
	vzdelanie = vzdelaniee;
}
