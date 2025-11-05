#include "ft_printf.h"

int main()
{

    char *c = "oussama";
    char *r = "aimen";
    int x = ft_printf("%p\n%p\n", c, r);
    int y =    printf("%p\n%p\n", c, r);
    // printf("- My Printf -> [ %d ]\n", x);
    // printf("- Standard Printf -> [ %d ]\n", y);
}