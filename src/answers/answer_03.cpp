void getAnswer3()
{
	int a, b = 1, c = 1, x = 0, y = 0;
	cout << Lang[6] << ": ";
	cin >> a;
	if (a > 100)
		cout << Lang[9];
	else if (a > 2)
	{
		a -= 2;
		for (int d = 1; d <= a; d++)
		{
			if (x == 0)
			{
				b += c;
				y = b;
				x = 1;
			}
			else
			{
				c += b;
				y = c;
				x = 0;
			}
		}
		cout << Lang[8] << ": " << y;
	}
	else if (a > 0)
	{
		cout << Lang[8] << ": 1";
	}
	else
		cout << Lang[7];
}
