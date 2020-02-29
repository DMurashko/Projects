void ft_print_alphabet () {
	char Character;
	for (int Value = 122; Value >= 97; Value--)
	{
		Character = (char)Value;
		printf ("%c ", Character);
	}
}

