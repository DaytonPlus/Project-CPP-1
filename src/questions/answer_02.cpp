void getAnswer2()
{
	int a, b = 0;
	cout << Lang[0] << ": ";
	cin >> a;
	
	if (a > 1)
	{
		b = 0;
		for (int c = 2; c <= a; c++)
			if (a % c == 0)
				b++;

		if (b == 1)
			cout << Lang[5];

		else
			cout << Lang[4];
	}
	else
		cout << Lang[4];
}
