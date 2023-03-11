#include "../includes/Problem.cpp"
#include "../langs/lang_es.cpp"
#include "../questions/question_01.cpp"
#include "../answers/answer_01.cpp"
#include "../questions/question_02.cpp"
#include "../answers/answer_02.cpp"
#include "../questions/question_03.cpp"
#include "../answers/answer_03.cpp"
#include "../questions/question_04.cpp"
#include "../answers/answer_04.cpp"

class Menu
{
  public:
	Menu(int _key)
	{
		key = _key;
		cout << "***********************************" << endl;
		cout << "Bienvenido a Proyectos Dayton\n";
		cout << "***********************************" << endl;
	}
	void init()
	{
		run = true;
		help(page);
		cout << endl;
		do
		{
			cout << endl
				 << ">";
			cin >> cmd;
			if (cmd > 0)
				onItem();
			else
				errorItem();
		} while (run);
	}
	void onItem()
	{
		switch (page)
		{
		case 1: // Page 1
			switch (cmd)
			{
			case 1: // Page 1 > CMD 1
				page = 2;
				cout << "Proyectos Actuales:" << endl;
				cout << "1 -> " << p1.getName() << endl;
				cout << "2 -> " << p2.getName() << endl;
				cout << "3 -> " << p3.getName() << endl;
				cout << "4 -> " << p4.getName() << endl;
				cout << "5 -> Para Regresar al Menu Principal" << endl;
				cout << "6 -> Para Salir";
				break;
			case 2: // Page 1 > CMD 2
				run = false;
				break;
			} // END CMD
			break;
		case 2: // Page 2
			page = 3;
			switch (cmd)
			{
			case 1: // Page 2 > CMD 1
				opened = 1;
				cout << "Proyecto Abierto: " << p1.getName();
				break;
			case 2: // Page 2 > CMD 2
				opened = 2;
				cout << "Proyecto Abierto: " << p2.getName();
				break;
			case 3: // Page 2 > CMD 3
				opened = 3;
				cout << "Proyecto Abierto: " << p3.getName();
				break;
			case 4: // Page 2 > CMD 4
				opened = 4;
				cout << "Proyecto Abierto: " << p4.getName();
				break;
			case 5: // Page 2 > CMD 5
				page = 1;
				break;
			case 6: // Page 2 > CMD 6
				run = false;
				break;
			} // END CMD
			cout << endl;
			if (run)
				help(page);
			break;
		case 3: // Page 3
			switch (cmd)
			{
			case 1: // Page 3 > CMD 1
				switch (opened)
				{
				case 1: // Page 3 > CMD 1 > OP 1
					getAnswer1();
					break;
				case 2: // Page 3 > CMD 1 > OP 2
					getAnswer2();
					break;
				case 3: // Page 3 > CMD 1 > OP 3
					getAnswer3();
					break;
				case 4: // Page 3 >> CMD 1 > OP 4
					getAnswer4();
					break;
				} // END OP
				cout << endl
					 << endl;
				help(3);
				break;
			case 2: // Page 3 > CMD 2
				page = 4;
				switch (opened)
				{
				case 1: // Page 3 > CMD 2 > OP 1
					cout << "Nombre: " << p1.getName() << endl;
					cout << "Descipcion: " << p1.getDescription() << endl;
					cout << "Problema: " << p1.getData() << endl;
					break;
				case 2: // Page 3 > CMD 2 > OP 2
					cout << "Nombre: " << p2.getName() << endl;
					cout << "Descipcion: " << p2.getDescription() << endl;
					cout << "Problema: " << p2.getData() << endl;
					break;
				case 3: // Page 3 > CMD 2 > OP 3
					cout << "Nombre: " << p3.getName() << endl;
					cout << "Descipcion: " << p3.getDescription() << endl;
					cout << "Problema: " << p3.getData() << endl;
					break;
				case 4: // Page 3 > CMD 2 > OP 4
					cout << "Nombre: " << p4.getName() << endl;
					cout << "Descipcion: " << p4.getDescription() << endl;
					cout << "Problema: " << p4.getData() << endl;
					break;
				} // END OP
				
				cout << endl << "1 -> Para Retroceder al Menu Anterior" << endl;
				cout << "2 -> Para Salir" << endl;
				break;
			case 3: // Page 3 > CMD 3
				page = 2;
				break;
			case 4: // Page 3 > CMD 4
				run = false;
				break;
			} // END CMD
			break;
		case 4: // Page 4
			switch (cmd)
			{
			case 1: // Page 4 > CMD 1
				page = 3;
				help(page);
				break;
			case 2: // Page 4 > CMD 2
				run = false;
				break;
			} // END CMD
			break;
		} // END Page
		cout << endl;
	}
	void help(int page)
	{
		switch (page)
		{
		case 1:
			cout << "1 -> Para Abrir Proyecto\n2 -> Para Salir";
			break;
		case 3:
			cout << "1 -> Para Ejecutar\n2 -> Para Ver Informacion Detallada\n3 -> Para Regresar al Menu Principal\n4 -> Para Salir";
			break;
		}
	}
	void playItem() {}
	void errorItem() {}

  private:
	int key, cmd, opened, page = 1;
	bool run = false;
	Problem p1 = getProblem1();
	Problem p2 = getProblem2();
	Problem p3 = getProblem3();
	Problem p4 = getProblem4();
};