/*
#pragma once
#include "CSVCitac.h"
#include "UzemnaJednotka.h"
#include "UZEMNEJEDNOTKY.h"
#include "VekUJ.h"
#include "bodoveVyhladavanie.h"
#include "Filtrovanie.h"
#include "Triedenie.h"

using namespace std;
class Priradovanie {



public:
	void prirad()
	{
		cout << "nacitavanie udajov" << "\n";
		CSVCitac* n = new CSVCitac();
		structures::SortedSequenceTable<string, UzemnaJednotka*>* kraje = n->nacitajKraje();
	    structures::SortedSequenceTable<string, UzemnaJednotka*>* obce = n->nacitajObce();
		structures::SortedSequenceTable<string, UzemnaJednotka*>* okresy = n->nacitajOkresy();


		//structures::SortedSequenceTable<std::string, VzdelanieUJ*>* vzdelanie = n->nacitajVzdelanie();
		//structures::SortedSequenceTable<std::string, VekUJ*>* veky = n->nacitajVek();

		UzemnaJednotka* Slovensko = new UzemnaJednotka("Slovensko");

		//Triedenie* t = new Triedenie();
		Filtrovanie* f = new Filtrovanie();
		bodoveVyhladavanie* a = new bodoveVyhladavanie();

		cout << "koniec nacitavanie udajov" << "\n";
		system("cls");

		cout << "zaciatok priradovania veku a vzdelania obciam" << "\n";
		int i = 0;
		for (structures::TableItem<std::string, UzemnaJednotka*>* item : *obce) {
			if (veky->containsKey(item->getKey())) {
				item->accessData()->setVek(veky->find(item->getKey()));
			}
			if (vzdelanie->containsKey(item->getKey())) {
				item->accessData()->setVzdelanie(vzdelanie->find(item->getKey()));
			}
			i++;
			item->accessData()->setTyp(UZEMNEJEDNOTKY::OBEC);
		}
		cout << "dokoncene priradovanie veku a vzdelania obciam" << "\n";
		system("cls");
		cout << "zaciatok prepajania a priradovania obci okresom" << "\n";

		for (structures::TableItem<std::string, UzemnaJednotka*>* obec : *obce) {
			string kod = obec->getKey().substr(0, 6);

			obec->accessData()->setVyssia(okresy->find(kod));
			okresy->find(kod)->setNizsie(obec->accessData());
			okresy->find(kod)->pripocitajVeky(obec->accessData()->vratVek());
			okresy->find(kod)->pripocitajVzdelania(obec->accessData()->vratVzdelanie());

		}
		cout << "koniec prepajania a priradovania priradovania obci okresom" << "\n";
		system("cls");

		cout << "zaciatok prepajania a priradovania okresov krajom" << "\n";
		for (structures::TableItem<std::string, UzemnaJednotka*>* kraj : *kraje) {
			string kod = kraj->getKey().substr(7, 8);
			for (structures::TableItem<std::string, UzemnaJednotka*>* okres : *okresy) {
				string kodOkres = okres->getKey().substr(2, 3);
				int vys = kodOkres.compare(kod);
				if (vys == 0) {
					okres->accessData()->setVyssia(kraje->find(kraj->getKey()));
					kraj->accessData()->pripocitajVeky(okres->accessData()->vratVek());
					kraj->accessData()->pripocitajVzdelania(okres->accessData()->vratVzdelanie());
					okres->accessData()->setTyp(UZEMNEJEDNOTKY::OKRES);
				}

			}
			Slovensko->pripocitajVeky(kraj->accessData()->vratVek());
			Slovensko->pripocitajVzdelania(kraj->accessData()->vratVzdelanie());
			Slovensko->setVyssia(nullptr);
			Slovensko->setKod("SK");
			kraj->accessData()->setTyp(UZEMNEJEDNOTKY::KRAJ);
		}

		cout << "koniec prepajania a priradovania okresov krajom" << "\n";
		system("cls");
		

		cout << "Vyberte co chcete vykonat: (zadajte cislo)" << "\n";
		cout << "Bodove vyhladavanie_________1" << "\n";
		cout << "Filtrovanie_________________2" << "\n";
		cout << "Triedenie___________________3" << "\n";
		cout << "Koniec______________________9" << "\n";
		int vyber;
		cin >> vyber;

		switch (vyber) {
		case 1:
			cout << "Vyberte uzemnu jednotku: (zadajte cislo)" << "\n";
			cout << "Obec________________________1" << "\n";
			cout << "Okres_______________________2" << "\n";
			cout << "Kraj________________________3" << "\n";
			cout << "Slovensko___________________4" << "\n";
			int vyber;
			cin >> vyber;
			switch (vyber) {
			case 1:

				a->vyhladajObec(obce);

				break;
			case 2:
				a->vyhladajOkres(okresy);

				break;
			case 3:

				a->vyhladajKraj(kraje);

				break;
			case 4:
				a->vyhladajSlovensko(Slovensko);
				break;
			}
			break;
		case 2:
			//filtrovanie
				f->Filtruj(obce, okresy, kraje, Slovensko);
			break;
		case 3:
			//triedenie
			//t->tried(obce, okresy, kraje);

			break;
		case 9:
			delete a;
			delete f;
			delete Slovensko;

			for (auto item : *kraje) {
				if (item->accessData() != nullptr) {
					delete item->accessData();
				}
			}
			delete kraje;
			for (auto item : *obce) {
				if (item->accessData() != nullptr) {
					delete item->accessData();
				}
			}
			delete obce;
			for (auto item : *okresy) {
				if (item->accessData() != nullptr) {
					delete item->accessData();
				}
			}
			delete okresy;
			delete n;
			return ;
			break;
		}









		
		


		//cout << "koniec";
	}
	
};
*/