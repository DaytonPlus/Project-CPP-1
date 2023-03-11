void getAnswer1()
{
	int a, b = 0;
	cout << Lang[0] << ": ";
	cin >> a;

	if (a == 0)
		cout << Lang[3];

	else if (a == 1)
		cout << Lang[2];

	else if (a > 1)
	{
		for (int d = 1; d < a; d++)
		{
			if (a % d == 0)
				b += d;

			if (b > a)
				break;
		}
		if (b == a)
			cout << Lang[2];

		else
			cout << Lang[3];
	}
	else
		cout << Lang[1];
}
