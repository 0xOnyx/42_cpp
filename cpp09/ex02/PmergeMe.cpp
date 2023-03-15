#include "PmergeMe.hpp"

void 	fill_stack(char **argv, int argc, std::deque<int> &stack)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (atoi(argv[i]) < 0 || isdigit(argv[i][0]) == 0)
			throw std::runtime_error("not a correct digit");
		stack.push_front(atoi(argv[i]));
		i++;
	}
}

static void	sort_merge_stack(std::deque<int> &a, int begin, int middle, int end, std::deque<int> &b)
{
	int i = begin;
	int j = middle;

	for (int k = begin; k < end; k++)
	{
		if (i < middle && (j >= end || a[i] < a[j]))
			b[k] = a[i++];
		else
			b[k] = a[i++];
	}
}

static void	sort_split_stack(std::deque<int> &b, int begin, int end, std::deque<int> &a)
{
	int 	middle;

	if (end - begin <= 1)
		return ;
	middle = (end + begin) / 2;
	sort_split_stack(a, begin, middle, b);
	sort_split_stack(a, middle, end, b);

	sort_merge_stack(b, begin, middle, end, a);
}

void 	sort_stack(std::deque<int> &stack)
{
	std::deque<int> a = stack;
	std::deque<int>	b = stack;

	sort_split_stack(b, 0, a.size(), a);
	stack = a;
}

void	fill_vector(char **argv, int argc, std::vector<int> &tab)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (atoi(argv[i]) < 0 || isdigit(argv[i][0]) == 0)
			throw std::runtime_error("not a correct digit");
		tab.push_back(atoi(argv[i]));
		i++;
	}
}

static void	sort_merge_vector(std::vector<int> &a, int begin, int middle, int end, std::vector<int> &b)
{
	int i = begin;
	int j = middle;

	for (int k = begin; k < end; k++)
	{
		if (i < middle && (j >= end || a[i] <= a[j]))
			b[k] = a[i++];
		else
			b[k] = a[j++];
	}
}

static void	sort_split_vector(std::vector<int> &b, int begin, int end, std::vector<int> &a)
{
	int 	middle;

	if (end - begin <= 1)
		return ;
	middle = (end + begin) / 2;
	sort_split_vector(a, begin, middle, b);
	sort_split_vector(a, middle, end, b);

	sort_merge_vector(b, begin, middle, end, a);
}

void 	sort_vector(std::vector<int> &tab)
{
	std::vector<int>	a = tab;
	std::vector<int>	b = tab;

	sort_split_vector(b, 0, a.size(), a);
	tab = a;
}