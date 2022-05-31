#pragma once
#include <iostream>
#include "../structures/table/table.h"
#include "UzemnaJednotka.h"
#include "../Matus_Remen/Kriterium.h"
#include "../Matus_Remen/KriteriumUJ.h"
#include "KriteriumUjVekovaSkupinaPocet.h"
#include "../Matus_Remen/KriteriumUJTyp.h"
#include "KriteriumUJTyp.h"
#include "KriteriumUJVekovaSkupinaPodiel.h"
#include "KriteriumUJVzdelaniePocet.h"
#include "KriteriumUJ.h"
#include "KriteriumUJ.h"
#include "KriteriumUJNazov.h"
#include "KriteriumUJNazov.h"
#include "KriteriumUJPrislusnost.h"
#include "KriteriumUJVzdelaniePodiel.h"
#include "KriteriumUJVekPocet.h"
#include "KriteriumUJVekPodiel.h"

using namespace std;
class bodoveVyhladavanie {

public:

	void vyhladajObec(UzemnaJednotka* u) {
		
		system("cls");

		cout << "--------------------------------" << "Informacie" << "\n";
		KriteriumUJNazov* KNazov = new KriteriumUJNazov();
		cout << "Nazov: " << KNazov->evaluate(*u) << "\n";
		delete KNazov;
		KriteriumUJTyp* Ktyp = new KriteriumUJTyp();
		cout << "Typ: " << u->vypisTyp(Ktyp->evaluate(*u)) << "\n";
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KriteriumUJVekovaSkupinaPocet* KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		cout << "Predproduktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KriteriumUJVekovaSkupinaPodiel* KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		cout << "Podiel Predproduktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		cout << "Produktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		cout << "Podiel Produktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		cout << "Poproduktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		cout << "Podiel Poproduktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KriteriumUJVzdelaniePocet* KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		cout << "Bezukonceneho: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KriteriumUJVzdelaniePodiel* KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		cout << "Podiel Bezukonceneho: " << KVZPodiel->evaluate(*u) <<"\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		cout << "Zakladne: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		cout << "Podiel Zakladne: " << KVZPodiel->evaluate(*u) << "\n";;
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		cout << "Ucnovske: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		cout << "Podiel Ucnovske: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		cout << "Stredne: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		cout << "Podiel Stredne: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		cout << "Vyssie: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		cout << "Podiel Vyssie: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		cout << "Vysokoskolske: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		cout << "Podiel Vysokoskolske: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		cout << "Bez Vzdelania: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		cout << "Podiel Bezvzdelania: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		cout << "Nezistene: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		cout << "Podiel Nezistene: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";



		//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu



		cout << "--------------------------------Vyssia jednotka" << "\n";
		cout << "--------------------------------" << "Informacie" << "\n";
		cout << "--------------------------------" << "Informacie" << "\n";
		KNazov = new KriteriumUJNazov();
		cout << "Nazov: " << KNazov->evaluate(*u->getVyssia()) << "\n";
		delete KNazov;
		Ktyp = new KriteriumUJTyp();
		cout << "Typ: " << u->vypisTyp(Ktyp->evaluate(*u->getVyssia())) << "\n";
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->getVyssia()->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		cout << "Predproduktivny: " << KVSpocet->evaluate(*u->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		cout << "Podiel Predproduktivny: " << KVSpodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		cout << "Produktivny: " << KVSpocet->evaluate(*u->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		cout << "Podiel Produktivny: " << KVSpodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		cout << "Poproduktivny: " << KVSpocet->evaluate(*u->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		cout << "Podiel Poproduktivny: " << KVSpodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		cout << "Bezukonceneho: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		cout << "Podiel Bezukonceneho: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		cout << "Zakladne: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		cout << "Podiel Zakladne: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";;
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		cout << "Ucnovske: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		cout << "Podiel Ucnovske: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		cout << "Stredne: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		cout << "Podiel Stredne: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		cout << "Vyssie: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		cout << "Podiel Vyssie: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		cout << "Vysokoskolske: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		cout << "Podiel Vysokoskolske: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		cout << "Bez Vzdelania: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		cout << "Podiel Bezvzdelania: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		cout << "Nezistene: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		cout << "Podiel Nezistene: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";
		

		//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju



		cout << "--------------------------------Vyssia jednotka" << "\n";
		cout << "--------------------------------" << "Informacie" << "\n";
		cout << "--------------------------------" << "Informacie" << "\n";
		KNazov = new KriteriumUJNazov();
		cout << "Nazov: " << KNazov->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KNazov;
		Ktyp = new KriteriumUJTyp();
		cout << "Typ: " << u->vypisTyp(Ktyp->evaluate(*u->getVyssia()->getVyssia())) << "\n";
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->getVyssia()->getVyssia()->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		cout << "Predproduktivny: " << KVSpocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		cout << "Podiel Predproduktivny: " << KVSpodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		cout << "Produktivny: " << KVSpocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		cout << "Podiel Produktivny: " << KVSpodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		cout << "Poproduktivny: " << KVSpocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		cout << "Podiel Poproduktivny: " << KVSpodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		cout << "Bezukonceneho: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		cout << "Podiel Bezukonceneho: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		cout << "Zakladne: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		cout << "Podiel Zakladne: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";;
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		cout << "Ucnovske: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		cout << "Podiel Ucnovske: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		cout << "Stredne: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		cout << "Podiel Stredne: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		cout << "Vyssie: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		cout << "Podiel Vyssie: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		cout << "Vysokoskolske: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		cout << "Podiel Vysokoskolske: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		cout << "Bez Vzdelania: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		cout << "Podiel Bezvzdelania: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		cout << "Nezistene: " << KVZPocet->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		cout << "Podiel Nezistene: " << KVZPodiel->evaluate(*u->getVyssia()->getVyssia()) << "\n";
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";

	}

	void vyhladajOkres(UzemnaJednotka* u) {

		system("cls");

		cout << "--------------------------------" << "Informacie" << "\n";
		KriteriumUJNazov* KNazov = new KriteriumUJNazov();
		cout << "Nazov: " << KNazov->evaluate(*u) << "\n";
		delete KNazov;
		KriteriumUJTyp* Ktyp = new KriteriumUJTyp();
		cout << "Typ: " << u->vypisTyp(Ktyp->evaluate(*u)) << "\n";
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KriteriumUJVekovaSkupinaPocet* KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		cout << "Predproduktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KriteriumUJVekovaSkupinaPodiel* KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		cout << "Podiel Predproduktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		cout << "Produktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		cout << "Podiel Produktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		cout << "Poproduktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		cout << "Podiel Poproduktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KriteriumUJVzdelaniePocet* KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		cout << "Bezukonceneho: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KriteriumUJVzdelaniePodiel* KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		cout << "Podiel Bezukonceneho: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		cout << "Zakladne: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		cout << "Podiel Zakladne: " << KVZPodiel->evaluate(*u) << "\n";;
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		cout << "Ucnovske: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		cout << "Podiel Ucnovske: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		cout << "Stredne: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		cout << "Podiel Stredne: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		cout << "Vyssie: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		cout << "Podiel Vyssie: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		cout << "Vysokoskolske: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		cout << "Podiel Vysokoskolske: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		cout << "Bez Vzdelania: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		cout << "Podiel Bezvzdelania: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		cout << "Nezistene: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		cout << "Podiel Nezistene: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";



		//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ//VYPIS KRAJ



		cout << "--------------------------------Vyssia jednotka" << "\n";
		cout << "--------------------------------" << "Informacie" << "\n";
		cout << "--------------------------------" << "Informacie" << "\n";
		KNazov = new KriteriumUJNazov();
		cout << "Nazov: " << KNazov->evaluate(*u->getVyssia()) << "\n";
		delete KNazov;
		Ktyp = new KriteriumUJTyp();
		cout << "Typ: " << u->vypisTyp(Ktyp->evaluate(*u->getVyssia())) << "\n";
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->getVyssia()->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		cout << "Predproduktivny: " << KVSpocet->evaluate(*u->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		cout << "Podiel Predproduktivny: " << KVSpodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		cout << "Produktivny: " << KVSpocet->evaluate(*u->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		cout << "Podiel Produktivny: " << KVSpodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		cout << "Poproduktivny: " << KVSpocet->evaluate(*u->getVyssia()) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		cout << "Podiel Poproduktivny: " << KVSpodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		cout << "Bezukonceneho: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		cout << "Podiel Bezukonceneho: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		cout << "Zakladne: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		cout << "Podiel Zakladne: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";;
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		cout << "Ucnovske: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		cout << "Podiel Ucnovske: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		cout << "Stredne: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		cout << "Podiel Stredne: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		cout << "Vyssie: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		cout << "Podiel Vyssie: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		cout << "Vysokoskolske: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		cout << "Podiel Vysokoskolske: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		cout << "Bez Vzdelania: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		cout << "Podiel Bezvzdelania: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		cout << "Nezistene: " << KVZPocet->evaluate(*u->getVyssia()) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		cout << "Podiel Nezistene: " << KVZPodiel->evaluate(*u->getVyssia()) << "\n";
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";


		
	}


	void vyhladajKraj(UzemnaJednotka* u) {

		system("cls");

		cout << "--------------------------------" << "Informacie" << "\n";
		KriteriumUJNazov* KNazov = new KriteriumUJNazov();
		cout << "Nazov: " << KNazov->evaluate(*u) << "\n";
		delete KNazov;
		KriteriumUJTyp* Ktyp = new KriteriumUJTyp();
		cout << "Typ: " << u->vypisTyp(Ktyp->evaluate(*u)) << "\n";
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KriteriumUJVekovaSkupinaPocet* KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		cout << "Predproduktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KriteriumUJVekovaSkupinaPodiel* KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		cout << "Podiel Predproduktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		cout << "Produktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		cout << "Podiel Produktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		cout << "Poproduktivny: " << KVSpocet->evaluate(*u) << "\n";
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		cout << "Podiel Poproduktivny: " << KVSpodiel->evaluate(*u) << "\n";
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KriteriumUJVzdelaniePocet* KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		cout << "Bezukonceneho: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KriteriumUJVzdelaniePodiel* KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		cout << "Podiel Bezukonceneho: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		cout << "Zakladne: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		cout << "Podiel Zakladne: " << KVZPodiel->evaluate(*u) << "\n";;
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		cout << "Ucnovske: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		cout << "Podiel Ucnovske: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		cout << "Stredne: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		cout << "Podiel Stredne: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		cout << "Vyssie: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		cout << "Podiel Vyssie: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		cout << "Vysokoskolske: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		cout << "Podiel Vysokoskolske: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		cout << "Bez Vzdelania: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		cout << "Podiel Bezvzdelania: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		cout << "Nezistene: " << KVZPocet->evaluate(*u) << "\n";
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		cout << "Podiel Nezistene: " << KVZPodiel->evaluate(*u) << "\n";
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";

			
	}

	void vyhladajSlovensko(UzemnaJednotka* slovensko) {
		cout << "--------------------------------" << "Informacie" << "\n";
		KriteriumUJNazov* KNazov = new KriteriumUJNazov();
		KNazov->evaluate(*slovensko);
		delete KNazov;
		KriteriumUJTyp* Ktyp = new KriteriumUJTyp();
		Ktyp->evaluate(*slovensko);
		delete Ktyp;
		cout << "Pocet obyvatelov: " << slovensko->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KriteriumUJVekovaSkupinaPocet* KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		KVSpocet->evaluate(*slovensko);
		delete KVSpocet;
		KriteriumUJVekovaSkupinaPodiel* KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		KVSpodiel->evaluate(*slovensko);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		KVSpocet->evaluate(*slovensko);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		KVSpodiel->evaluate(*slovensko);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		KVSpocet->evaluate(*slovensko);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		KVSpodiel->evaluate(*slovensko);
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KriteriumUJVzdelaniePocet* KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KriteriumUJVzdelaniePodiel* KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		KVZPocet->evaluate(*slovensko);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		KVZPodiel->evaluate(*slovensko);
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";
		
		delete slovensko;
	}


};