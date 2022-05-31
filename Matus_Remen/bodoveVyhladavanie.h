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

	void vyhladajObec(structures::SortedSequenceTable<std::string, UzemnaJednotka*>* jednotka) {
		system("cls");
		cout << "Zadajte nazov uzemnej jednotky:" << "\n";

		for (structures::TableItem<std::string, UzemnaJednotka*>* obec : *jednotka) {
			cout << obec->accessData()->getNazov() << "  " << obec->accessData()->getKod() << "\n";
		}
		string kod;
		cin >> kod;
		
		UzemnaJednotka* u = jednotka->find(kod);
		system("cls");



		cout << "--------------------------------" << "Informacie" << "\n";
		KriteriumUJNazov* KNazov = new KriteriumUJNazov();
		KNazov->evaluate(*u);
		delete KNazov;
		KriteriumUJTyp* Ktyp = new KriteriumUJTyp();
		Ktyp->evaluate(*u);
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KriteriumUJVekovaSkupinaPocet* KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KriteriumUJVekovaSkupinaPodiel* KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KriteriumUJVzdelaniePocet* KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KriteriumUJVzdelaniePodiel* KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		KVZPodiel->evaluate(*u); 
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";



		//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu



		cout << "--------------------------------Vyssia jednotka" << "\n";
		UzemnaJednotka* v = u->getVyssia();
		cout << "--------------------------------" << "Informacie" << "\n";
		KNazov = new KriteriumUJNazov();
		KNazov->evaluate(*v);
		delete KNazov;
		Ktyp = new KriteriumUJTyp();
		Ktyp->evaluate(*v);
		delete Ktyp;
		cout << "Pocet obyvatelov: " << v->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		KVSpocet->evaluate(*v);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		KVSpodiel->evaluate(*v);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		KVSpocet->evaluate(*v);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		KVSpodiel->evaluate(*v);

		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		KVSpocet->evaluate(*v);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		KVSpodiel->evaluate(*v);
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";
		

		//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju//Vypis Kraju


		cout << "--------------------------------Vyssia jednotka" << "\n";
		UzemnaJednotka* k = v->getVyssia();
		cout << "--------------------------------" << "Informacie" << "\n";
		KNazov = new KriteriumUJNazov();
		KNazov->evaluate(*k);
		delete KNazov;
		Ktyp = new KriteriumUJTyp();
		Ktyp->evaluate(*k);
		delete Ktyp;
		cout << "Pocet obyvatelov: " << k->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		KVSpocet->evaluate(*k);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		KVSpodiel->evaluate(*k);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		KVSpocet->evaluate(*k);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		KVSpodiel->evaluate(*k);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		KVSpocet->evaluate(*k);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		KVSpodiel->evaluate(*k);
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		KVZPocet->evaluate(*k);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		KVZPodiel->evaluate(*k);
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";
	
		for (auto item : *jednotka) {
				delete item->accessData();
		}
		delete jednotka;
	}

	void vyhladajOkres(structures::SortedSequenceTable<std::string, UzemnaJednotka*>* jednotka) {
		system("cls");
		cout << "Zadajte kod obce:  " << "\n";
		cout << "Prirucka:  " << "\n";
		cout << "Bratislavsky kraj SK010" << "\n";
		cout << "Trnavsky kraj SK021" << "\n";
		cout << "Trenciansky kraj SK022" << "\n";
		cout << "Nitriansky kraj SK023" << "\n";
		cout << "Zilinsky kraj SK031" << "\n";
		cout << "Banskobystricky kraj SK032" << "\n";
		cout << "Presovsky kraj SK041" << "\n";
		cout << "Kosicky kraj SK042" << "\n";
		cout << "_________________________________________" << "\n";

		cout << "Zadajte kod okresu:  " << "\n";

		for (structures::TableItem<std::string, UzemnaJednotka*>* okres : *jednotka) {
			cout << okres->accessData()->getNazov() << "  " << okres->accessData()->getKod() << "\n";
		}
		string kod;
		cin >> kod;

		UzemnaJednotka* u = jednotka->find(kod);
		system("cls");



		cout << "--------------------------------" << "Informacie" << "\n";
		KriteriumUJNazov* KNazov = new KriteriumUJNazov();
		KNazov->evaluate(*u);
		delete KNazov;
		KriteriumUJTyp* Ktyp = new KriteriumUJTyp();
		Ktyp->evaluate(*u);
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KriteriumUJVekovaSkupinaPocet* KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KriteriumUJVekovaSkupinaPodiel* KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KriteriumUJVzdelaniePocet* KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KriteriumUJVzdelaniePodiel* KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";

	

		//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu//Vypis Okresu



		cout << "--------------------------------Vyssia jednotka" << "\n";
		UzemnaJednotka* v = u->getVyssia();
		cout << "--------------------------------" << "Informacie" << "\n";
		KNazov = new KriteriumUJNazov();
		KNazov->evaluate(*v);
		delete KNazov;
		Ktyp = new KriteriumUJTyp();
		Ktyp->evaluate(*v);
		delete Ktyp;
		cout << "Pocet obyvatelov: " << v->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		KVSpocet->evaluate(*v);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		KVSpodiel->evaluate(*v);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		KVSpocet->evaluate(*v);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		KVSpodiel->evaluate(*v);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		KVSpocet->evaluate(*v);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		KVSpodiel->evaluate(*v);
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		KVZPocet->evaluate(*v);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		KVZPodiel->evaluate(*v);
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";

		
		for (auto item : *jednotka) {
			delete item->accessData();
		}
		delete jednotka;
	
	}


	void vyhladajKraj(structures::SortedSequenceTable<std::string, UzemnaJednotka*>* jednotka) {
		cout << "Zadajte kod kraju:  " << "\n";
		for (structures::TableItem<std::string, UzemnaJednotka*>* kraj : *jednotka) {
			cout << kraj->accessData()->getNazov() << "  " << kraj->accessData()->getKod() << "\n";
		}
		string kod;
		cin >> kod;

		UzemnaJednotka* u = jednotka->find(kod);
		system("cls");


		cout << "--------------------------------" << "Informacie" << "\n";
		KriteriumUJNazov* KNazov = new KriteriumUJNazov();
		KNazov->evaluate(*u);
		delete KNazov;
		KriteriumUJTyp* Ktyp = new KriteriumUJTyp();
		Ktyp->evaluate(*u);
		delete Ktyp;
		cout << "Pocet obyvatelov: " << u->vratPocetLudi() << "\n";
		cout << "--------------------------------" << "Vekove skupiny" << "\n";
		KriteriumUJVekovaSkupinaPocet* KVSpocet = new KriteriumUJVekovaSkupinaPocet(PREDPRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KriteriumUJVekovaSkupinaPodiel* KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PREDPRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(PRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(PRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		KVSpocet = new KriteriumUJVekovaSkupinaPocet(POPRODUKTIVNI);
		KVSpocet->evaluate(*u);
		delete KVSpocet;
		KVSpodiel = new KriteriumUJVekovaSkupinaPodiel(POPRODUKTIVNI);
		KVSpodiel->evaluate(*u);
		delete KVSpodiel;
		cout << "--------------------------------" << "Vzdelanie" << "\n";
		KriteriumUJVzdelaniePocet* KVZPocet = new KriteriumUJVzdelaniePocet(BEZUKONCENEHO);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KriteriumUJVzdelaniePodiel* KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZUKONCENEHO);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(ZAKLADNE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(ZAKLADNE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(UCNOVSKE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(UCNOVSKE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(STREDNE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(STREDNE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSSIE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSSIE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(VYSOKOSKOLSKE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(VYSOKOSKOLSKE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(BEZVZDELANIA);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(BEZVZDELANIA);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		cout << "\n";
		KVZPocet = new KriteriumUJVzdelaniePocet(NEZISTENE);
		KVZPocet->evaluate(*u);
		delete KVZPocet;
		KVZPodiel = new KriteriumUJVzdelaniePodiel(NEZISTENE);
		KVZPodiel->evaluate(*u);
		delete KVZPodiel;
		//cout << "--------------------------------" << "\n";
		cout << "\n";
		cout << "\n";
		
		for (auto item : *jednotka) {
			delete item->accessData();
		}
		delete jednotka;		
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