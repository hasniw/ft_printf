#include "ft_printf.h"

int		not_specifier(t_printf *pf)
{
	int i;

	i = pf->min_length ? pf->min_length - 1 : 0;
	if (pf->flags & F_MINUS)
	{
		char_padding(pf, pf->conv);
		min_padding(pf, ' ', i);
	}
	else
	{
		if (pf->flags & F_ZERO)
			min_padding(pf, '0', i);
		else
			min_padding(pf, ' ', i);
		char_padding(pf, pf->conv);
	}
	return (1);
}
