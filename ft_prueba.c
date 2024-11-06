#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/*int	main(void)
{
	printf("hola mi nombre es %s y tengo %d años\n", "Laura", 22);
	return (0);
}*/
/*int main()
{
int result;

//result = printf("Sentence to know how many %s\n", "characters were written");
result = printf("hola, mi nombre es %s y tengo %d años\n", "laura", 23);

printf("%d characters were written\n", result);
}*/

/*int ft_printf(const char *format, char *string, int age)
{
	return (0);
}
int	main()
{
	char format[] = "hola mi nombre";
	char string[] = "Laura";
	int age;

	int result;
	age = 23;

		//result = printf("Sentence to know how many %s\n", "characters were written");
	result = printf("hola, mi nombre es %s y tengo %d años\n", string, age);
	printf("%d characters were written\n", result);
	return (0);
	//result (0);
}*/

/*int ft_printf(const char *format, char *string, int age)
{
	return (0);
}
int	main()
{
	char format[] = "hola mi nombre es";
	char string[] = "Laura";
	int age;

	int result;
	age = 23;

		//result = printf("Sentence to know how many %s\n", "characters were written");
	result = printf("%s %s y tengo %d años\n", format, string, age);
	printf("%d characters were written\n", result);
	return (0);
}*/
int ft_printf(const char *format, ...)
{
	return (0);	
}
int	main()
{
	char format[] = "hola mi nombre es";
	char string[] = "Laura";
	int age;

	int result;
	age = 23;

		//result = printf("Sentence to know how many %s\n", "characters were written");
	result = printf("%s %s y tengo %d años\n", format, string, age);
	printf("%d characters were written\n", result);
	return (0);
}

/*int	ft_putchar(int c)
{
	int	toreturn;

	toreturn = 0;
	write(1, &c, 1);
	//write(1, "\n", 1);
	return (++toreturn);
}
int	main()
{
	int	c;
	int	toreturn;

	c = 'b';
	toreturn = ft_putchar(c);
	printf("\nel caracter es: %c\n", c);
	printf("el número de caracteres es: %d", toreturn);
	return(0);
}*/