#ifndef WHATEVER_TPP
# define WHATEVER_TPP

template <typename A>
void	swap(A &a, A &b)
{
	A c;

	c = a;
	a = b;
	b = c;
}

template <typename A>
A	&min(A &a, A &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename A>
A	&max(A &a, A &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif