# inclure  " holberton.h "

/* *
 * _atoi - Convertit une chaîne en un entier.
 * @s : La chaîne à convertir.
 *
 * Retour : La valeur entière de la chaîne convertie.
 */
int  _atoi ( char *s)
{
	signe int = 1 ;
	 num int non signé = 0 ;

	faire {
		si (*s == ' - ' )
			signe *= - 1 ;

		else  if (*s >= ' 0 ' && *s <= ' 9 ' )
			num = (num * 10 ) + (*s - ' 0 ' );

		sinon  si (num > 0 )
			pause ;

	} tandis que (*s++);

	return (num * signe);
}
