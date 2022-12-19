template <typename T>
void	iter(T *element, int size, void (*f)(const T &))
{
	for(int i = 0; i < size; i++)
		f(element[i]);
}