#include "Header_ex5.h"

/*
����������� ���������, ��� �������� ��. ������ �����, ������������
����. ����� ���������������:
	������ 5� ������� - ����� 0%
	����. 10� ������� - ����� 10%
	����. 20� ������� - ����� 15%
	����� 35� ������� - ����� 20%
��������, ���� ����� ������������ 38� �������, �� �� ������ ���������
������� 5� * 0,00 + 10� * 0.10 + 20� * 0.15 + 3� * 0.20, ��� 4600 �������.
�������� ���������, ������� ���������� ���� ��� ������� ������� � ������
����������� � ������� ������. ���� ������ �����������, ����� ������������
������ ������������� ��� ���������� ��������.
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