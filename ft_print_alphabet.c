#include <stdio.h>

void ft_print_alphabet () {
	char Character;
	for (int Value = 97; Value <= 122; Value++)
	{
		Character = (char)Value;
		printf ("%c ", Character);
	}
}

int main () {
	ft_print_alphabet ();
	return 0;
}
