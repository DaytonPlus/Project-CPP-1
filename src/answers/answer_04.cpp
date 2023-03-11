void getAnswer4()
{
	int a, b = 0;
	string c;
	string days[8] = {
		"Empty for Cero",
		"Lunes",
		"Martes",
		"Miercoles",
		"Jueves",
		"Viernes",
		"Savado",
		"Domingo"};
	cout << Lang[10] << ": ";
	cin >> a;
	cout << "Set switch use -> " << a << endl;
	cout << Lang[11] << ": ";
	cin >> b;

	if (a < 1)
	{
		if (b < 1 && b > 7)
			cout << Lang[13];
		else if (b == 1)
		{
			cout << Lang[12] << " " << days[b] << endl;
			cout << Lang[14] << ": ";
			cin >> c;
			cout << Lang[15] << " " << c << " " << Lang[16];
		}
		else if (b == 2)
		{
			cout << Lang[12] << " " << days[b] << endl;
			cout << Lang[17] << ": ";
			cin >> b;
			cout << Lang[18] << " " << (b > 15 ? Lang[19] : Lang[20]);
		}
		else if (b == 3)
		{
			cout << Lang[12] << " " << days[b] << endl;
			cout << Lang[14] << ": ";
			cin >> c;
			if (c != "Dayton" && c != "dayton" && c != "David" && c != "david")
				cout << Lang[15] << " " << c << " " << Lang[16];
			else
				cout << Lang[21];
		}
		else
		{
			cout << Lang[12] << days[b];
		}
	}
	else
	{
		cout << Lang[12] << " " << days[b] << endl;
		switch (b)
		{
		case 1:
			cout << Lang[14] << ": ";
			cin >> c;
			cout << Lang[15] << " " << c << " " << Lang[16];
			break;
		case 2:
			cout << Lang[17] << ": ";
			cin >> b;
			cout << Lang[18] << " " << (b > 15 ? Lang[19] : Lang[20]);
			break;
		case 3:
			cout << Lang[14] << ": ";
			cin >> c;
			if (c != "Dayton" && c != "dayton" && c != "David" && c != "david")
				cout << Lang[15] << " " << c << " " << Lang[16];
			break;
		}
	}
}