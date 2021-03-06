/*
#pragma once
#include "../structures/table/unsorted_sequence_table.h"
#include "Kriterium.h"


using namespace std;
class Triedenie {

public:
	//sst tabilka

	template<typename K, typename T>
	template<typename H>
	void QuickSort<K, T>::QuickSort(structures::UnsortedSequenceTable<K, T>& tabulka, Kriterium<H, T>& k, int minimum, int maximum) {

		T obj = tabulka.getItemAtIndex(ZaciatocnyIndex + (KonecnyIndex - ZaciatocnyIndex) / 2).accessData();
		H pivot = k.evaluate(obj);
		int lavy = minimum;
		int pravy = maximum;
		if (vzostupne) {
			do {
				while (k.evaluate(tabulka.getItemAtIndex(lavy).accessData()) < pivot) {
					lavy++;
				}
				while (k.evaluate(tabulka.getItemAtIndex(pravy).accessData()) > pivot) {
					right--;
				}
				if (lavy <= pravy)
				{
					tabulka.swap(lavy, pravy);
					lavy++;
					pravy--;
				}
			} while (lavy <= pravy) {
				if (minimum < pravy) {
					quickSort(tabulka, minimum, pravy, k, vzostupne);
				}
				if (lavy < max) {
					quickSort(tabulka, lavy, maximum, k, vzostupne);
				}

			}
		}
		else {
			do {
				while (k.evaluate(tabulka.getItemAtIndex(lavy).accessData()) > pivot) {
					lavy++;
				}
				while (k.evaluate(tabulka.getItemAtIndex(pravy).accessData()) < pivot) {
					right--;
				}
				if (lavy <= pravy)
				{
					tabulka.swap(lavy, pravy);
					lavy++;
					pravy--;
				}
			} while (lavy <= pravy) {
				if (minimum < pravy) {
					quickSort(tabulka, minimum, pravy, k, vzostupne);
				}
				if (lavy < max) {
					quickSort(tabulka, lavy, maximum, k, vzostupne);
				}

			}
		}
	}

		void tried(structures::SortedSequenceTable<std::string, UzemnaJednotka*>* obce, structures::SortedSequenceTable<std::string, UzemnaJednotka*>* okresy, structures::SortedSequenceTable<std::string, UzemnaJednotka*>* kraje) {

			bool typ = false;
			bool pris = false;
			bool vzpocet = false;
			bool vzpodiel = false;
			bool vspocet = false;
			bool vspodiel = false;

			FilterAND<UzemnaJednotka>* filtre = new FilterAND<UzemnaJednotka>();



			structures::SortedSequenceTable<std::string, UzemnaJednotka*>* vsetko = new structures::SortedSequenceTable<std::string, UzemnaJednotka*>;
			
			for (structures::TableItem<std::string, UzemnaJednotka*>* obec : *obce) {
				vsetko->insert(obec->getKey(), obec->accessData());
			}
			for (structures::TableItem<std::string, UzemnaJednotka*>* okres : *okresy) {
				vsetko->insert(okres->getKey(), okres->accessData());
			}
			for (structures::TableItem<std::string, UzemnaJednotka*>* kraj : *kraje) {
				vsetko->insert(kraj->getKey(), kraj->accessData());
			}

		structures::UnsortedSequenceTable<string, UzemnaJednotka*>* vyfiltrovane = new structures::UnsortedSequenceTable<string, UzemnaJednotka*>();



			//prislusnost
			UZEMNEJEDNOTKY vybranyTyp = KRAJ;
			UzemnaJednotka* prislusnost = nullptr;

			//vzdelanie pocet
			int VZminimalnaPocet = 0;
			int VZmaximalnaPocet = 0;
			VZDELANIE_ENUM vzdelanieKtorePocet = BEZUKONCENEHO;

			//vzdelanie podiel
			int VZMinimalnaPodiel = 0;
			int VZMaximalnaPodiel = 0;
			VZDELANIE_ENUM vzdelanieKtorePodiel = BEZUKONCENEHO;

			//vs pocet

			int VSMinimalnaPocet = 0;
			int VSMaximalnaPocet = 0;
			EVS_ENUM vekKtorePocet = PRODUKTIVNI;

			//vs podiel
			int VSMinimalnaPodiel = 0;
			int VSMaximalnaPodiel = 0;
			EVS_ENUM vekKtorePodiel = PRODUKTIVNI;



			int vyber = 0;
			while (vyber != 99) {
				system("cls");
				//filtrovanie
				cout << "Vyberte ktory filter chcete pouzit:" << "\n";
				//cout << "Filter Nazov" << "\n"
				cout << "Potvrd vyber__________________99" << "\n";
				cout << "\n";

				if (typ == true) {
					cout << "Filter Typ____________________1   <-" << "\n";
				}
				else {
					cout << "Filter Typ____________________1" << "\n";
				}

				if (pris == true) {
					cout << "Filter Prislusnost____________2   <-" << "\n";
				}
				else {
					cout << "Filter Prislusnost____________2" << "\n";
				}
				if (vzpocet == true) {
					cout << "Filter VzdelaniePocet_________3   <-" << "\n";
				}
				else {
					cout << "Filter VzdelaniePocet_________3" << "\n";
				}
				if (vzpodiel == true) {
					cout << "Filter VzdelaniePodiel________4   <-" << "\n";
				}
				else {
					cout << "Filter VzdelaniePodiel________4" << "\n";
				}
				if (vspocet == true) {
					cout << "Filter VekovaSkupinaPocet_____5   <-" << "\n";
				}
				else {
					cout << "Filter VekovaSkupinaPocet_____5" << "\n";
				}

				if (vspodiel == true) {
					cout << "Filter VekovaSkupinaPodiel____6   <-" << "\n";
				}
				else {
					cout << "Filter VekovaSkupinaPodiel____6" << "\n";
				}

				cin >> vyber;

				if (vyber == 1) {
					typ = true;
				}
				if (vyber == 2) {
					pris = true;
				}
				if (vyber == 3) {
					vzpocet = true;
				}
				if (vyber == 4) {
					vzpodiel = true;
				}
				if (vyber == 5) {
					vspocet = true;
				}
				if (vyber == 6) {
					vspodiel = true;
				}
			}

			int vybranie = 0;
			if (typ == true) {
				cout << "Filter Typ" << "\n";
				cout << "Zadajte typ:" << "\n";

				cout << "Filter Typ" << "\n";
				cout << "Zadajte typ:" << "\n";
				cout << "KRAJ____1" << "\n";
				cout << "OKRES___2" << "\n";
				cout << "OBEC____3" << "\n";
				cin >> vybranie;

				switch (vybranie) {
				case 1:
					vybranyTyp = KRAJ;
					break;
				case 2:
					vybranyTyp = OKRES;
					break;
				case 3:
					vybranyTyp = OBEC;
					break;
				}
				FilterUJTyp* fut = new FilterUJTyp(vybranyTyp);
				filtre->pridajFilter(fut);



			}
			system("cls");

			if (pris == true) {
				string vyber;

				cout << "Filter Prislusnost" << "\n";
				cout << "Zadajte UzemnuJednotku" << "\n";

				cout << "Zadajte Prislusnost:" << "\n";
				cout << "Zadajte typ:" << "\n";
				cout << "KRAJ____1" << "\n";
				cout << "OKRES___2" << "\n";

				cin >> vybranie;

				switch (vybranie) {
				case 1:
					cout << "Zadajte kod kraja: " << "\n";
					for (structures::TableItem<std::string, UzemnaJednotka*>* kraj : *kraje) {
						cout << kraj->accessData()->getNazov() << "  " << kraj->accessData()->getKod() << "\n";
					}

					cin >> vyber;
					prislusnost = kraje->find(vyber);

					break;
				case 2:
					cout << "Zadajte kod OKRESU: " << "\n";
					for (structures::TableItem<std::string, UzemnaJednotka*>* okres : *okresy) {
						cout << okres->accessData()->getNazov() << "  " << okres->accessData()->getKod() << "\n";
					}
					cin >> vyber;
					prislusnost = okresy->find(vyber);
					break;
				}
				FilterUJPrislusnost* pris = new FilterUJPrislusnost(*prislusnost);
				filtre->pridajFilter(pris);
			}



			if (vzpocet == true) {
				cout << "Filter VzdelaniePocet" << "\n";
				cout << "Zadajte minimalnu hodnotu:" << "\n";
				cin >> VZminimalnaPocet;
				cout << "Zadajte maximalnu hodnotu:" << "n";
				cin >> VZmaximalnaPocet;
				cout << "Zadajte typ vzdelania:" << "\n";
				cout << "Vyberte Vzdelanie:" << "\n";
				cout << "BEZUKONCENEHO____1" << "\n";
				cout << "ZAKLADNE_________2" << "\n";
				cout << "UCNOVSKE_________3" << "\n";
				cout << "STREDNE__________4" << "\n";
				cout << "VYSSIE___________5" << "\n";
				cout << "VYSOKOSKOLSKE____6" << "\n";
				cout << "BEZVZDELANIA_____7" << "\n";
				cout << "NEZISTENE________8" << "\n";
				int hodnota = 0;
				cin >> hodnota;
				switch (hodnota) {
				case 1:
					vzdelanieKtorePocet = BEZUKONCENEHO;
					break;
				case 2:
					vzdelanieKtorePocet = ZAKLADNE;
					break;
				case 3:
					vzdelanieKtorePocet = UCNOVSKE;
					break;
				case 4:
					vzdelanieKtorePocet = STREDNE;
					break;
				case 5:
					vzdelanieKtorePocet = VYSSIE;
					break;
				case 6:
					vzdelanieKtorePocet = VYSOKOSKOLSKE;
					break;
				case 7:
					vzdelanieKtorePocet = BEZVZDELANIA;
					break;
				case 8:
					vzdelanieKtorePocet = NEZISTENE;
					break;
				}

				FilterUJVzdelaniePocet* fvzPoc = new FilterUJVzdelaniePocet(vzdelanieKtorePocet, VZminimalnaPocet, VZmaximalnaPocet);
				filtre->pridajFilter(fvzPoc);

			}

			if (vzpodiel == true) {

				cout << "Filter VzdelaniePodiel" << "\n";
				cout << "Zadajte minimalnu hodnotu:" << "\n";
				cin >> VZMinimalnaPodiel;
				cout << "Zadajte maximalnu hodnotu:" << "\n";
				cin >> VZMaximalnaPodiel;
				cout << "Zadajte typ vzdelania:" << "\n";
				cout << "Vyberte Vzdelanie:" << "\n";
				cout << "BEZUKONCENEHO____1" << "\n";
				cout << "ZAKLADNE_________2" << "\n";
				cout << "UCNOVSKE_________3" << "\n";
				cout << "STREDNE__________4" << "\n";
				cout << "VYSSIE___________5" << "\n";
				cout << "VYSOKOSKOLSKE____6" << "\n";
				cout << "BEZVZDELANIA_____7" << "\n";
				cout << "NEZISTENE________8" << "\n";
				int hodnota = 0;
				cin >> hodnota;
				switch (hodnota) {
				case 1:
					vzdelanieKtorePodiel = BEZUKONCENEHO;
					break;
				case 2:
					vzdelanieKtorePodiel = ZAKLADNE;
					break;
				case 3:
					vzdelanieKtorePodiel = UCNOVSKE;
					break;
				case 4:
					vzdelanieKtorePodiel = STREDNE;
					break;
				case 5:
					vzdelanieKtorePodiel = VYSSIE;
					break;
				case 6:
					vzdelanieKtorePodiel = VYSOKOSKOLSKE;
					break;
				case 7:
					vzdelanieKtorePodiel = BEZVZDELANIA;
					break;
				case 8:
					vzdelanieKtorePodiel = NEZISTENE;
					break;
				}
				FilterUJVzdelaniePodiel* fvzPod = new FilterUJVzdelaniePodiel(vzdelanieKtorePodiel, VZMinimalnaPodiel, VZMaximalnaPodiel);
				filtre->pridajFilter(fvzPod);
			}

			if (vspocet == true) {
				cout << "Filter VekovaSkupinaPocet" << "\n";
				cout << "Zadajte minimalnu hodnotu:" << "\n";
				cin >> VSMinimalnaPocet;
				cout << "Zadajte maximalnu hodnotu:" << "\n";
				cin >> VSMaximalnaPocet;
				cout << "Zadajte typ EVS:" << "\n";
				cout << "PREDPRODUKTIVNA_______1" << "\n";
				cout << "PRODUKTIVNA___________2" << "\n";
				cout << "POPRODUKTIVNA_________3" << "\n";
				int hodnota = 0;
				cin >> hodnota;
				switch (hodnota) {
				case 1:
					vekKtorePocet = PREDPRODUKTIVNI;
					break;
				case 2:
					vekKtorePocet = PRODUKTIVNI;
					break;
				case 3:
					vekKtorePocet = POPRODUKTIVNI;
					break;
				}

				FilterUJVekovaSkupinaPocet* VsPocet = new FilterUJVekovaSkupinaPocet(vekKtorePocet, VSMinimalnaPocet, VSMaximalnaPocet);
				filtre->pridajFilter(VsPocet);
			}

			if (vspodiel == true) {
				cout << "Filter VekovaSkupinaPodiel" << "\n";
				cout << "Zadajte minimalnu hodnotu:" << "\n";
				cin >> VSMinimalnaPodiel;
				cout << "Zadajte maximalnu hodnotu:" << "\n";
				cin >> VSMaximalnaPodiel;
				cout << "Zadajte typ EVS:" << "\n";
				cout << "PREDPRODUKTIVNA_______1" << "\n";
				cout << "PRODUKTIVNA___________2" << "\n";
				cout << "POPRODUKTIVNA_________3" << "\n";
				int hodnota = 0;
				cin >> hodnota;
				switch (hodnota) {
				case 1:
					vekKtorePodiel = PREDPRODUKTIVNI;
					break;
				case 2:
					vekKtorePodiel = PRODUKTIVNI;
					break;
				case 3:
					vekKtorePodiel = POPRODUKTIVNI;
					break;
				}
				//FilterUJVekovaSkupinaPodiel* VsPodiel = new FilterUJVekovaSkupinaPodiel(vekKtorePodiel, VSMinimalnaPodiel, VSMaximalnaPodiel);
				//filtre->pridajFilter(VsPodiel);
			}


			if (typ == true) {
				switch (vybranyTyp) {
				case KRAJ: {
					for (structures::TableItem<std::string, UzemnaJednotka*>* item : *kraje) {
						if (filtre->pass(*item->accessData())) {
							vybrane->insert(item->getKey(), item->accessData());
						}
						system("cls");
					}
					break;
				}
				case OKRES:
					for (structures::TableItem<std::string, UzemnaJednotka*>* item : *okresy) {
						if (filtre->pass(*item->accessData())) {
							vybrane->insert(item->getKey(), item->accessData());
						}
						system("cls");
					}
					break;
				case OBEC:
					for (structures::TableItem<std::string, UzemnaJednotka*>* item : *obce) {
						if (filtre->pass(*item->accessData())) {
							vybrane->insert(item->getKey(), item->accessData());
						}
						system("cls");
					}
					break;

				}


			}
			else {
				for (structures::TableItem<std::string, UzemnaJednotka*>* item : *vsetko) {
					if (filtre->pass(*item->accessData())) {
						vybrane->insert(item->getKey(), item->accessData());
					}
					system("cls");
				}

			}



		}
	


};
*/