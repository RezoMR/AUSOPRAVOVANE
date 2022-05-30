
#pragma once

#include "KriteriumUJ.h"
#include <string>
#include "UzemnaJednotka.h"


	class KriteriumUJTyp : public KriteriumUJ<UZEMNEJEDNOTKY> {

	public:
		UZEMNEJEDNOTKY evaluate(UzemnaJednotka& uj) override;
		
	};

	inline UZEMNEJEDNOTKY KriteriumUJTyp::evaluate(UzemnaJednotka& uj) {
		std::cout << uj.vypisTyp() << "\n";
		return uj.getTyp();
	}

