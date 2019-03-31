#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include<fstream>

using namespace std;

union charac

{

	int iq = NULL;

	int birdsp;

	char anity[30];

};

struct animal

{

	char speed[30];

	char type[30];

	char color[30];

	charac c;

};


void task1()

{

	ifstream in("Animals.txt");

	int g;

	g = 3;

	int k;

	animal *s = new animal[g];

	char f[10] = { "bird" };

	char r[10] = { "human" };

	for (size_t i = 0; i < g; i++)

	{

		in >> s[i].speed;

		in >> s[i].type;

		in >> s[i].color;

		if (strncmp(s[i].type, f, 30) == 0)

		{

			cout << "Введите скорость полета" << endl;

			cin >> s[i].c.birdsp;

		}

		else if ((strncmp(s[i].type, r, 30) == 0))

		{

			cout << "Введите IQ" << endl;

			cin >> s[i].c.iq;

		}

		else

			if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))

			{

				cout << "Введите вид" << endl;

				cin.ignore();

				cin.getline(s[i].c.anity, 30);

			}

	}

	for (size_t i = 0; i < g; i++)

	{

		cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;

		if (strncmp(s[i].type, f, 30) == 0)

		{

			cout << s[i].c.birdsp << endl;

		}

		else if ((strncmp(s[i].type, r, 30) == 0))

		{

			cout << s[i].c.iq << endl;

		}

		else

			if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))

			{

				cout << s[i].c.anity << endl;

			}

	}

	int t = 1;

	while (t == 1)

	{





		cout << "Хотите что нибудь изменить?" << endl;

		cin >> k;

		int i;

		if (k == 1)

		{

			cout << "Какое животное" << endl;

			cin >> i;

			cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;

			if (strncmp(s[i].type, f, 30) == 0)

			{

				cout << s[i].c.birdsp << endl;

			}

			else if ((strncmp(s[i].type, r, 30) == 0))

			{

				cout << s[i].c.iq << endl;

			}

			else

				if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))

				{

					cout << s[i].c.anity << endl;

				}

		}

		int h;

		cout << "Изменить: \n 1.Скорость \n 2.Тип \n 3.Цвет \n 4.Характеристику" << endl;

		cin >> h;

		switch (h)

		{

		case 1:cin >> s[i].speed; break;

		case 2:cin >> s[i].type; break;

		case 3:cin >> s[i].color; break;

		case 4:	if (strncmp(s[i].type, f, 30) == 0)

		{

			cout << "Введите скорость полета" << endl;

			cin >> s[i].c.birdsp;

		}

				else if ((strncmp(s[i].type, r, 30) == 0))

		{

			cout << "Введите IQ" << endl;

			cin >> s[i].c.iq;

		}

				else

			if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))

			{

				cout << "Введите вид" << endl;

				cin.ignore();

				cin.getline(s[i].c.anity, 30);

			}

				break;

		default:

			break;

		}

		for (size_t i = 0; i < g; i++)

		{

			cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;

			if (strncmp(s[i].type, f, 30) == 0)

			{

				cout << s[i].c.birdsp << endl;

			}

			else if ((strncmp(s[i].type, r, 30) == 0))

			{

				cout << s[i].c.iq << endl;

			}

			else

				if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))

				{

					cout << s[i].c.anity << endl;

				}

		}

		cout << "Еще раз?" << endl;

		cin >> t;

	}

	int w;

	cout << "Найти что нибудь?" << endl;

	cin >> w;

	if (w == 1)

	{

		int v;

		cout << "Какая характеристика? \n 1.Скорость полета \n 2.IQ \n 3Тип" << endl;

		cin >> v;

		switch (v)

		{

		case 1:int j;

			cin >> j;

			for (size_t i = 0; i < g; i++)

			{

				if (s[i].c.birdsp == j)

				{

					cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;

					if (strncmp(s[i].type, f, 30) == 0)

					{

						cout << s[i].c.birdsp << endl;

					}

				}

			}

			break;

		case 2:

			int o;

			cin >> o;

			for (size_t i = 0; i < g; i++)

			{

				if (s[i].c.iq == o)

				{

					cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;

					if (strncmp(s[i].type, r, 30) == 0)

					{

						cout << s[i].c.iq << endl;

					}

				}

			}

			break;

		case 3:char u[30];

			cin >> u;

			for (size_t i = 0; i < g; i++)

			{

				if (strncmp(s[i].c.anity, u, 30) == 0)

				{

					cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;

					if (strncmp(s[i].type, r, 30) == 0)

					{

						cout << s[i].c.anity << endl;

					}

				}

			}

			break;



		default:

			break;

		}

	}

}

int main()

{

	setlocale(LC_ALL, "");

	srand(time(NULL));

 task1();

	system("pause");

}
