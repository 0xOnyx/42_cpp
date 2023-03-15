#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>
# include <ctype.h>
# include <string.h>
# include <exception>
# include <stdexcept>

void 	fill_stack(char **argv, int argc, std::deque<int> &stack);
void 	sort_stack(std::deque<int> &stack);

void	fill_vector(char **argv, int argc, std::vector<int> &tab);
void 	sort_vector(std::vector<int> &tab);

#endif