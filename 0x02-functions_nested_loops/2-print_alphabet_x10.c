void print_alphabet_x10(void)
{
	char ch;
	int n = 0;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('n\n');
		n++;
	}
	return;
}
