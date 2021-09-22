#include "Header_ex5.h"

/*
Королевство Нейтрония, где денежные ед. служит тварп, используется
след. шкалу налогооблажения:
	первые 5к тварпов - налог 0%
	след. 10к тварпов - налог 10%
	след. 20к тварпов - налог 15%
	свыше 35к тварпов - налог 20%
Например, если некто зарабатывает 38к тварпов, то он должен заплатить
налогов 5к * 0,00 + 10к * 0.10 + 20к * 0.15 + 3к * 0.20, или 4600 тварпов.
Напишите программу, которая использует цикл для запроса доходов и выдачи
подлежащего к выплате налога. Цикл должен завершаться, когда пользователь
вводит отрицательное или нечисловое значение.
*/

void Ex5(void) {
	double	earned_money_double = 0;
	double	money_10k_double;
	double	money_20k_double;
	double	money_35k_double;
	double	tax_double;
	
	while (earned_money_double >= 0) {
		tax_double = money_10k_double = money_20k_double = money_35k_double = 0;
		std::cout << "Enter amount of money earned: ";

		if (!(std::cin >> earned_money_double)) break;
		if (earned_money_double > 35000) {
			money_35k_double = (earned_money_double - 35000) * 0.2;
			money_20k_double = 20000 * 0.15;
			money_10k_double = 10000 * 0.10;
		}
		else if (earned_money_double > 20000) {
			money_20k_double = (earned_money_double - 20000) * 0.15;
			money_10k_double = 10000 * 0.10;
		}
		else if (earned_money_double > 10000)
			money_10k_double = (earned_money_double - 10000) * 0.10;
		else if (earned_money_double > 5000)
			money_10k_double = (earned_money_double - 5000) * 0.10;

		tax_double = money_10k_double + money_20k_double + money_35k_double;
		std::cout << "Your tax= " << tax_double << std::endl;
	}
	std::cout << "Bay!" << std::endl;
}
