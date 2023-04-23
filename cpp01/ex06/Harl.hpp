#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>

typedef struct s_func t_func;

class Harl {
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void			debug(void);
		void	 		info(void);
		void 			warning(void);
		void 			error(void);
		void 			(Harl::*f[4])(void);
		std::string 	name[4];
};

#endif
