#include "libft/libft.h"
#include "ft_printf.h"
#include "limits.h"
int main()
{
	int *pointer = NULL;
	int i = 0;
	int *s00 = &i;
	*s00 = 0;
	int n = 100;
	int s32 = 3;
	//n = ft_printf("ftabc");
	char *str;
	str = NULL;
	//warning behavior
	/*
	printf("9.1p%9.1p\n",1234);
	ft_printf("ft9.1p%9.1p\n", 1234);
	printf("  015s:%015s\n", "123456789");
	ft_printf("ft015s:%015s\n", "123456789");
	printf("  015.3s:%015.3s\n", "123456789");
	ft_printf("ft015.3s:%015.3s\n", "123456789");
	printf("  015.03s:%015.03s\n", "123456789");
	ft_printf("ft015.03s:%015.03s\n", "123456789");
	n = printf("  %0sabcd\n",str);
	n = ft_printf("ft%0sabcd\n",str);
	printf("  %-0d\n",345);
	ft_printf("ft%-0d\n",345);
	printf("  intfLalalala, %d%% des gens qui parlent à Ly aorent %s. Ou Presque. %6.7pabc%p\n", 100, "Ly\n", &s32, pointer);
	ft_printf("ftintfLalalala, %d%% des gens qui parlent à Ly aorent %s. Ou Presque. %6.7pabc%p\n", 100, "Ly\n", &s32, pointer);
	printf("  15.20p%15.20p\n",(void *)s00);
	ft_printf("ft15.20p%15.20p\n",(void *)s00);
	printf("  20.15p%20.15p\n",(void *)s00);
	ft_printf("ft20.15p%20.15p\n",(void *)s00);
	printf("  20.12p%20.0p\n",(void *)s00);
	ft_printf("ft20.12p%20.0p\n",(void *)s00);
	printf("  20.12p%20.1p\n",(void *)s00);
	ft_printf("ft20.12p%20.1p\n",(void *)s00);
	printf("%\n",(void *)s00);
	ft_printf("%\n",(void *)s00);
	*/

	printf("abc%");
	printf("\n");
	ft_printf("abc%");
	printf("\n");
	//___CRUSH___
	//printf(NULL);
	//ft_printf(NULL);
	/**/
	printf("  20.p%20.p\n",(void *)s00);
	ft_printf("ft20.p%20.p\n",(void *)s00);
	printf("  lx%X\n",UINT_MAX);
	ft_printf("ftlx%X\n",UINT_MAX);
	printf("  lu%ld\n",4294967295);
	ft_printf("ftu%u\n",4294967295);
	printf("  .0i:%.0i\n",1);
	ft_printf("ft.0i:%.0i\n",1);
	printf("  .i:%.i\n", 0);
	ft_printf("ft.i:%.i\n", 0);
	printf("  3d:%3d\n", 123456789);
	ft_printf("ft3d:%3d\n", 123456789);
	printf("  15d:%15d\n", 123456789);
	ft_printf("ft15d:%15d\n", 123456789);
	printf("  .15s:%.15s\n","123456789");
	ft_printf("ft.15s:%.15s\n","123456789");
	printf("  .3s:%.3s\n", "123456789");
	ft_printf("ft.3s:%.3s\n", "123456789");
	printf("  3s:%3s\n", "123456789");
	ft_printf("ft3s:%3s\n", "123456789");
	printf("  015d:%015d\n", 123456789);
	ft_printf("ft015d:%015d\n", 123456789);
	printf("  015.3d:%015.3d\n", 123456789);
	ft_printf("ft015.3d:%015.3d\n", 123456789);
	printf("  015.03d:%015.03d\n", 123456789);
	ft_printf("ft015.03d:%015.03d\n", 123456789);
	printf("  %d\n",n);
	ft_printf("ft%d\n",n);
	n = printf("  %*.*s\n",-8,3,"12345");
	n = ft_printf("ft%*.*s\n",-8,3,"12345");
	printf("  %d\n",n);
	ft_printf("ft%d\n",n);
	printf("  %c\n",'\0');
	ft_printf("ft%c\n",'\0');
	n = printf("  %%d 0000042 == |%d|\n", 0000042);
	printf("%d\n",n);
	n = ft_printf("ft%%d 0000042 == |%d|\n", 0000042);
	printf("  %u\n",-2147483646);
	ft_printf("ft%u\n",-2147483646);
	printf("intfIl fait au moins %u\n", -8000);
	ft_printf("ft_prntfIl fait au moins %u\n", -8000);
	printf("intf%x\n", 42);
	ft_printf("ft_printf%x\n", 42);
	printf("%-5%");
	ft_printf("ft%-5%");
	printf("  i:%d\n",i);
	ft_printf("fti:%d\n",i);
	
	

	printf("  %.5i\n",14);
	ft_printf("ft%.5i\n",14);
	printf("  %8.6i\n",-5);
	ft_printf("ft%8.6i\n",-5);
	printf("  %05i\n",-5);
	ft_printf("ft%05i\n",-5);
	//ft_printf("ft_printfLalalala, %d%% des gens qui parlent à Ly aorent %s. Ou Presque. %pabc%p\n", 100, "Ly\n", &s32, pointer);
	//minwidth :-2147483647 < printable < 2147483647
	//precision:2147483647 (only '.' == 0)
	//return   :output char num
	//
}
