#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

#undef max

using namespace std;

void wstep(string data)
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	============================================================" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "				MENU G" << char(157) << char(224) << "WNE" << endl;
	cout << "		   OSTATNIE DANE ZOSTA" << char(157) << "Y WPROWADZONE DNIA: " << endl;
	cout << "				" << data << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	============================================================" << endl;
	Sleep(600);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	1. Wy" << char(152) << "wietl informacj" << char(169) << " na temat dzia" << char(136) << "ania programu" << endl; //wyswietl informacje na temat dzialania programu
	Sleep(200);
	cout << "	2. Wprowad" << char(171) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << endl; // wprowadz liczbe zakazen
	Sleep(200);
	cout << "	3. Wy" << char(152) << "wietl dane z dnia poprzedniego" << endl; // wyswietl dane z dnia poprzedniego
	Sleep(200);
	cout << "	4. Oblicz przewidywan" << char(165) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << " w dniu jutrzejszym" << endl; //oblicz przewidywana liczbe zakazen w dniu jutrzejszym
	Sleep(200);
	cout << "	5. Oblicz przewidywan" << char(165) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << " za 7 dni" << endl; //oblicz przewidywana liczbe zakazen za 7 dni
	Sleep(200);
	cout << "	6. Wy" << char(152) << "wietl wszystkie dane" << endl; //wyswietla wszystkie dane z pliku tekstowego
	Sleep(200);
	cout << "	7. Zako" << char(228) << "cz dzia" << char(136) << "anie programu" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty

	Sleep(200);
	cout << "	============================================================" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	Sleep(500);
	cout << "	Wyb" << char(162) << "r: ";

}
//wyswietlanie menu

void informacja()
{
	string x;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "		     	   WYBRA" << char(157) << "E" << char(151) << ": INFORMACJE NA TEMAT DZIA" << char(157) << "ANIA PROGRAMU." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	--------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	*Po wybraniu opcji nr 2. (2. Wprowad" << char(171) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << "), oraz po podaniu nieujemnej" << endl << "	 warto" << char(152) << "ci, program dopisze do istniej" << char(165) << "cego pliku tekstowego podan" << char(165) << " liczb" << char(169) << "." << endl << endl;
	cout << "	*Po wybraniu opcji nr 3. (3. Wy" << char(152) << "wietl dane z dnia poprzedniego), program odczyta z pliku tekstowego" << endl << "	 dane, kt" << char(162) << "re zosta" << char(136) << "y podane jako ostatnie." << endl << endl;
	cout << "	*Po wybraniu opcji nr 4. (4. Oblicz przewidywan" << char(165) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << " w dniu jutrzejszym), " << endl << "	 program obliczy tempo wzrostu zaka" << char(190) << "e" << char(228) << " z poprzednich 7 dni, oraz na jego podstawie" << endl << "	 obliczy szacowan" << char(165) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << " w dniu jutrzejszym." << endl << endl;
	cout << "	*Po wybraniu opcji nr 5. (5. Oblicz przewidywan" << char(165) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << " za 7 dni), " << endl << "	 program obliczy tempo wzrostu zaka" << char(190) << "e" << char(228) << " z poprzednich 31 dni, oraz na jego podstawie" << endl << "	 obliczy szacowan" << char(165) << " liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << " za 7 dni." << endl << endl;
	cout << "	*Po wybraniu opcji nr 6. (6. Wy" << char(152) << "wietl wszystkie dane), program wy" << char(152) << "wietli wszystkie dane z pliku tekstowego." << endl;
	cout << "	*Po wybraniu opcji nr 7. (7. Zako" << char(228) << "cz dzia" << char(136) << "anie programu), program zako" << char(228) << "czy swoj" << char(165) << " prac" << char(169) << "." << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	-------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";

	cin >> x;

	if (x != "0")
		while (x != "0")
		{
			cout << "	Nie wpisa" << char(136) << "e" << char(152) << ' ' << '"' << '0' << '"' << "!" << endl << endl;
			Sleep(1000);
			cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";
			cin >> x;
		}

}
//wybranie opcji 1

string nowadata(string nazwapliku, string data)
{
	string d1, d2, m1, m2, k, r1, r2, r3, r4, r;
	string nowadata;
	d1 = data[0];
	d2 = data[1];
	m1 = data[3];
	m2 = data[4];
	k = data[2];
	r1 = data[6];
	r2 = data[7];
	r3 = data[8];
	r4 = data[9];
	r = r1 + r2 + r3 + r4;

	if ((m1 == "0" && m2 == "1") || (m1 == "0" && m2 == "3") || (m1 == "0" && m2 == "5") || (m1 == "0" && m2 == "7") || (m1 == "0" && m2 == "8") || (m1 == "1" && m2 == "0") || (m1 == "1" && m2 == "2"))
	{
		if (d1 == "0" && d2 == "1")
		{
			d2 = "2";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}


		else if (d1 == "0" && d2 == "2")
		{
			d2 = "3";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "0" && d2 == "3")
		{
			d2 = "4";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "4")
		{
			d2 = "5";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "5")
		{
			d2 = "6";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "6")
		{
			d2 = "7";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "7")
		{
			d2 = "8";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "8")
		{
			d2 = "9";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "9")
		{
			d1 = "1";
			d2 = "0";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "1" && d2 == "0")
		{
			d2 = "1";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "1")
		{
			d2 = "2";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "2")
		{
			d2 = "3";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "3")
		{
			d2 = "4";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "4")
		{
			d2 = "5";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "5")
		{
			d2 = "6";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "6")
		{
			d2 = "7";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "7")
		{
			d2 = "8";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "8")
		{
			d2 = "9";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "9")
		{
			d1 = "2";
			d2 = "0";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "2" && d2 == "0")
		{
			d2 = "1";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "2" && d2 == "1")
		{
			d2 = "2";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "2")
		{
			d2 = "3";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "3")
		{
			d2 = "4";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "4")
		{
			d2 = "5";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "5")
		{
			d2 = "6";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "6")
		{
			d2 = "7";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "7")
		{
			d2 = "8";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "8")
		{
			d2 = "9";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "9")
		{
			d1 = "3";
			d2 = "0";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "3" && d2 == "0")
		{
			d1 = "3";
			d2 = "1";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "3" && d2 == "1")
		{
			d1 = "0";
			d2 = "1";
			if (m1 == "0")
			{
				if (m2 == "1")
					m2 = "2";

				else if (m2 == "3")
					m2 = "4";

				else if (m2 == "5")
					m2 = "6";

				else if (m2 == "7")
					m2 = "8";

				else if (m2 == "8")
					m2 = "9";
			}

			else if (m1 == "1")
			{
				if (m2 == "0")
					m2 = "1";
				else if (m2 == "2")
				{
					m1 = "0";
					m2 = "1";
				}
			}
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}


	}
	else if ((m1 == "0" && m2 == "4") || (m1 == "0" && m2 == "6") || (m1 == "0" && m2 == "9") || (m1 == "1" && m2 == "1"))
	{
		if (d1 == "0" && d2 == "1")
		{
			d2 = "2";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}


		else if (d1 == "0" && d2 == "2")
		{
			d2 = "3";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "0" && d2 == "3")
		{
			d2 = "4";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "4")
		{
			d2 = "5";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "5")
		{
			d2 = "6";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "6")
		{
			d2 = "7";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "7")
		{
			d2 = "8";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "8")
		{
			d2 = "9";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "0" && d2 == "9")
		{
			d1 = "1";
			d2 = "0";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "1" && d2 == "0")
		{
			d2 = "1";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "1")
		{
			d2 = "2";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "2")
		{
			d2 = "3";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "3")
		{
			d2 = "4";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "4")
		{
			d2 = "5";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "5")
		{
			d2 = "6";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "6")
		{
			d2 = "7";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "7")
		{
			d2 = "8";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "8")
		{
			d2 = "9";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "1" && d2 == "9")
		{
			d1 = "2";
			d2 = "0";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "2" && d2 == "0")
		{
			d2 = "1";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "2" && d2 == "1")
		{
			d2 = "2";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "2")
		{
			d2 = "3";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "3")
		{
			d2 = "4";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "4")
		{
			d2 = "5";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "5")
		{
			d2 = "6";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "6")
		{
			d2 = "7";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "7")
		{
			d2 = "8";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "8")
		{
			d2 = "9";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
		else if (d1 == "2" && d2 == "9")
		{
			d1 = "3";
			d2 = "0";
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}

		else if (d1 == "3" && d2 == "0")
		{
			d1 = "0";
			d2 = "1";
			if (m1 == "0")
			{
				if (m2 == "4")
					m2 = "5";

				else if (m2 == "6")
					m2 = "7";

				else if (m2 == "9")
				{
					m1 = "1";
					m2 = "0";
				}
			}

			else if (m1 == "1")
			{
				if (m2 == "1")
					m2 = "2";
			}
			nowadata = d1 + d2 + k + m1 + m2 + k + r;
		}
	}
	else if (m1 == "0" && m2 == "2")
	{
		{
			if (d1 == "0" && d2 == "1")
			{
				d2 = "2";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}


			else if (d1 == "0" && d2 == "2")
			{
				d2 = "3";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "0" && d2 == "3")
			{
				d2 = "4";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "0" && d2 == "4")
			{
				d2 = "5";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "0" && d2 == "5")
			{
				d2 = "6";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "0" && d2 == "6")
			{
				d2 = "7";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "0" && d2 == "7")
			{
				d2 = "8";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "0" && d2 == "8")
			{
				d2 = "9";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "0" && d2 == "9")
			{
				d1 = "1";
				d2 = "0";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "1" && d2 == "0")
			{
				d2 = "1";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "1")
			{
				d2 = "2";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "2")
			{
				d2 = "3";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "3")
			{
				d2 = "4";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "4")
			{
				d2 = "5";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "5")
			{
				d2 = "6";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "6")
			{
				d2 = "7";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "7")
			{
				d2 = "8";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "8")
			{
				d2 = "9";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "1" && d2 == "9")
			{
				d1 = "2";
				d2 = "0";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "2" && d2 == "0")
			{
				d2 = "1";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}

			else if (d1 == "2" && d2 == "1")
			{
				d2 = "2";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "2" && d2 == "2")
			{
				d2 = "3";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "2" && d2 == "3")
			{
				d2 = "4";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "2" && d2 == "4")
			{
				d2 = "5";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "2" && d2 == "5")
			{
				d2 = "6";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "2" && d2 == "6")
			{
				d2 = "7";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "2" && d2 == "7")
			{
				d2 = "8";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
			else if (d1 == "2" && d2 == "8")
			{
				d1 = "0";
				d2 = "1";
				m2 = "3";
				nowadata = d1 + d2 + k + m1 + m2 + k + r;
			}
		}
	}

	return nowadata;
}
//ustalenie daty nastepnej od wpisanej jako ostatnia

void wprowadz(string nazwapliku, string nowadata)
{
	int i = 0;
	int liczba;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "				  WYBRA" << char(157) << "E" << char(151) << ": WPROWAD" << char(141) << " LICZB" << char(168) << " ZAKA" << char(189) << "E" << char(227) << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	--------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Podaj liczb" << char(169) << " zaka" << char(190) << "e" << char(228) << ": ";

	cin >> liczba;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (liczba == false)
	{
		cout << endl;
		cout << "	Poda" << char(136) << "e" << char(152) << " z" << char(136) << char(165) << " warto" << char(152) << char(134) << "!" << endl;
		Sleep(500);
		cout << "	Dane nie zosta" << char(136) << "y zaktualizowane!" << endl;
		Sleep(500);
		cout << "	Za chwil" << char(169) << " nast" << char(165) << "pi powr" << char(162) << "t do MENU G" << char(157) << char(224) << "WNEGO." << endl;
		Sleep(3000);
	}

	else if (liczba < 0)
	{
		cout << endl;
		cout << "	Poda" << char(136) << "e" << char(152) << " z" << char(136) << char(165) << " warto" << char(152) << char(134) << "!" << endl;
		Sleep(500);
		cout << "	Dane nie zosta" << char(136) << "y zaktualizowane!" << endl;
		Sleep(500);
		cout << "	Za chwil" << char(169) << " nast" << char(165) << "pi powr" << char(162) << "t do MENU G" << char(157) << char(224) << "WNEGO." << endl;
		Sleep(3000);
	}

	else
	{
		fstream plik;
		plik.open(nazwapliku, ios::out | ios::app);
		plik << liczba << " " << nowadata << endl;
		plik.close();

		cout << endl;
		cout << "	Sukces!" << endl;
		Sleep(500);
		cout << "	Dane zosta" << char(136) << "y zaktualizowane!" << endl;
		Sleep(500);
		cout << "	Za chwil" << char(169) << " nast" << char(165) << "pi powr" << char(162) << "t do MENU G" << char(157) << char(224) << "WNEGO." << endl;
		Sleep(3000);
	}
}
//wybranie opcji 2

string pobierzDate(string nazwapliku, int ile)
{
	string temp, data;
	fstream plik;
	plik.open(nazwapliku, ios::in);

	for (int i = 0; i < ile; i++)
		plik >> temp >> data;

	plik.close();

	return data;
}
//pobranie ostatnio-wpisanej daty

string pobierzZakazenia(string nazwapliku, int ile)
{
	string temp, data;
	fstream plik;
	plik.open(nazwapliku, ios::in);

	for (int i = 0; i < ile; i++)
		plik >> temp >> data;

	plik.close();

	return temp;
}
//pobranie ostatnio-wpisanej liczby zakazen

int ilewierszy(string nazwapliku)
{
	int ile = 0;


	string temp;
	fstream plik;
	plik.open(nazwapliku, ios::in);
	while (getline(plik, temp))
	{

		ile++;

	}
	plik.close();
	return ile;

}
//zliczanie ilosci wierszow w pliku

void danezdniapoprzedniego(string data, string zakazenia)
{
	string x;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "		     	   WYBRA" << char(157) << "E" << char(151) << ": WY" << char(151) << "WIETL DANE Z DNIA POPRZEDNIEGO" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	--------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Dane z dnia: " << data << endl;
	cout << "	Liczba zaka" << char(190) << "e" << char(228) << ": " << zakazenia << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	-------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";

	cin >> x;

	if (x != "0")
		while (x != "0")
		{
			cout << "	Nie wpisa" << char(136) << "e" << char(152) << ' ' << '"' << '0' << '"' << "!" << endl << endl;
			Sleep(1000);
			cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";
			cin >> x;
		}

}
//wybranie opcji 3

void zakazeniajutro(string nazwapliku, int x, string newdate)
{
	int i;
	string s1, s2, s3;
	double a, b, c;
	int jutro;
	double wspolczynnik;
	double sumawspolczynnikow = 0;
	double srednia;

	for (i = 7; i > 0; i--)
	{
		s1 = pobierzZakazenia(nazwapliku, x - i); //pobranie liczby zakazen 7 dni wczesniej
		a = stoi(s1);

		s2 = pobierzZakazenia(nazwapliku, x - i + 1); //pobranie liczby zakazen 6 dni wczesniej
		b = stoi(s2);

		wspolczynnik = b / a; //obliczenie wspolczynnika zakazen w porownaniu 2 dni obok siebie
		sumawspolczynnikow += wspolczynnik; //zliczanie wspolczynnikow
	}

	srednia = sumawspolczynnikow / 7; //srednia wspolczynnikow

	s3 = pobierzZakazenia(nazwapliku, x); //pobranie zakazen z wczoraj
	c = stoi(s3);

	jutro = c * srednia;  //przemnozona liczba zakazen z wczoraj przez srednia wspolczynnikow z ostatniego tygodnia




	string p;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "		     	   WYBRA" << char(157) << "E" << char(151) << ": PRZEWIDYWANA LICZBA ZAKA" << char(189) << "E" << char(227) << " W DNIU JUTRZEJSZYM." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	--------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Przewidywana liczba zaka" << char(190) << "e" << char(228) << " na dzie" << char(228) << " " << newdate << ": " << jutro << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	-------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";

	cin >> p;

	if (p != "0")
		while (p != "0")
		{
			cout << "	Nie wpisa" << char(136) << "e" << char(152) << ' ' << '"' << '0' << '"' << "!" << endl << endl;
			Sleep(1000);
			cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";
			cin >> p;
		}


}
//wybranie opcji 4

void zakazeniaza7dni(string nazwapliku, int x, string newdate)
{
	int i;
	string s1, s2, s3, za7;
	double a, b, c;
	int jutro;
	double wspolczynnik;
	double sumawspolczynnikow = 0;
	double srednia;

	for (i = 29; i > 0; i--)
	{
		s1 = pobierzZakazenia(nazwapliku, x - i); //pobranie liczby zakazen 29 dni wczesniej
		a = stoi(s1);

		s2 = pobierzZakazenia(nazwapliku, x - i + 1); //pobranie liczby zakazen 29 dni wczesniej
		b = stoi(s2);

		wspolczynnik = b / a; //obliczenie wspolczynnika zakazen w porownaniu 2 dni obok siebie
		sumawspolczynnikow += wspolczynnik; //zliczanie wspolczynnikow
	}

	srednia = sumawspolczynnikow / 29; //srednia wspolczynnikow

	s3 = pobierzZakazenia(nazwapliku, x); //pobranie zakazen z wczoraj
	c = stoi(s3);

	for (i = 0; i < 7; i++)
	{
		jutro = c * srednia;  //przemnozona liczba zakazen z wczoraj przez srednia wspolczynnikow z ostatniego miesiaca
		c = jutro;
	}


	// zmienna c w tym momencie to liczba zakazen za 7 dni
	za7 = newdate;
	for (i = 0; i < 6; i++)
	{
		za7 = nowadata(nazwapliku, za7);
	}

	//zmienna za7 w tym momencie to data za 7 dni




	string p;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "		     	   WYBRA" << char(157) << "E" << char(151) << ": PRZEWIDYWANA LICZBA ZAKA" << char(189) << "E" << char(227) << " ZA 7 DNI." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	--------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Przewidywana liczba zaka" << char(190) << "e" << char(228) << " na dzie" << char(228) << " " << za7 << ": " << c << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	-------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";

	cin >> p;

	if (p != "0")
		while (p != "0")
		{
			cout << "	Nie wpisa" << char(136) << "e" << char(152) << ' ' << '"' << '0' << '"' << "!" << endl << endl;
			Sleep(1000);
			cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";
			cin >> p;
		}
}
//wybranie opcji 5

void wszystkiedane(string nazwapliku, int x)
{
	string data;
	string zakazenia;
	fstream plik;



	string l;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "			     	   WYBRA" << char(157) << "E" << char(151) << ": WY" << char(151) << "WIETL WSZYSTKIE DANE." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	--------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy

	plik.open(nazwapliku, ios::in);

		cout <<"	l.p:"<<"	Data:		Liczba zaka" << char(190) << "e" << char(228) << ":" <<endl<< endl;
		Sleep(1000);

	for (int i = 0; i < x; i++)
	{
		plik >> zakazenia >> data;
		cout << "	" << i + 1<<")	"<< data << "	" << zakazenia << endl;
		Sleep(30);
	}

	plik.close();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //zmiana koloru na zolty
	cout << "	-------------------------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //zmiana koloru na bialy
	cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";

	cin >> l;

	if (l != "0")
		while (l != "0")
		{
			cout << "	Nie wpisa" << char(136) << "e" << char(152) << ' ' << '"' << '0' << '"' << "!" << endl << endl;
			Sleep(1000);
			cout << "	Aby wr" << char(162) << "ci" << char(134) << " do MENU G" << char(157) << char(224) << "WNEGO, wpisz " << '"' << '0' << '"' << ": ";
			cin >> l;
		}
}
//wybranie opcji 6


int main()
{
	string data;
	string datadzienwczesniej;
	string zakazeniadzienwczesniej;
	string newdate;

	fstream plik;
	plik.open("zakazenia.txt");
	plik.close();

	char wybor;
	int x;

	do
	{
		x = ilewierszy("zakazenia.txt"); //zmienna ta przyjmuje wartosc ilosci wierszy
		data = pobierzDate("zakazenia.txt", x); //zmienna ta przyjmuje wartosc ostatnio-wpisanej daty
		newdate = nowadata("zakazenia.txt", data); //zmienna ta przyjmuje wartosc ,,jutrzejszej" daty
		datadzienwczesniej = pobierzDate("zakazenia.txt", x - 1); //zmienna ta przyjmuje wartosc ,,wczorajszej" daty
		zakazeniadzienwczesniej = pobierzZakazenia("zakazenia.txt", x - 1); //zmienna ta przyjmuje wartosc ilosci zakazen z ,,wczoraj"
		wstep(data); //wysietlenie menu glownego

		cin >> wybor; //wybor opcji
		switch (wybor)
		{
			case '1':
				informacja();
				break;

			case '2':		
				wprowadz("zakazenia.txt", newdate);
				break;

			case '3':
				danezdniapoprzedniego(datadzienwczesniej, zakazeniadzienwczesniej);
				break;

			case '4':
				zakazeniajutro("zakazenia.txt", x, newdate);
				break;

			case '5':
				zakazeniaza7dni("zakazenia.txt", x, newdate);
				break;

			case '6':
				wszystkiedane("zakazenia.txt", x);
				break;

			case '7':
				exit(0);

			default:
				cout << endl;
				cout << "	Nie ma takiej opcji w MENU!" << endl;
				Sleep(500);
				cout << "	Spr" << char(162) << "buj ponownie! :)" << endl;
				Sleep(1000);
				break;




		}
	} while (wybor != '7');

	return 0;
}