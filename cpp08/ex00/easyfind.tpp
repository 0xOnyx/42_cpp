#ifndef EASY_FIND
# define EASY_FIND
# include <algorithm>
# include <exception>

class not_found : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return ("Could't find int the container ");
	}
};

template <typename T>
typename T::iterator	easyfind(const T &tab, int value)
{
	typename T::iterator	res;

	res = std::find(tab.begin(), tab.end(), value);
	if (res == tab.end())
		throw not_found();
	return (res);
}

#endif