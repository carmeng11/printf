static int  ft_control(char const c, va_list args)
    else if (c == 'x' || c ==)

int ft_printf(char const *format, ...)
{
    va list args;
    int     i;
    int     toreturn;

    va_start(args, format);
    i = 0;
    toreturn = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            toreturn += ft_control(format[i], args);
        }
        else
            toreturn += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (toreturn);
}