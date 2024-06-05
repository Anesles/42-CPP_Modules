#ifndef FORMAT_HPP
# define FORMAT_HPP

# include <iostream>
# include <string>

class Format
{

	public:

		Format();
		Format( Format const & src );
		~Format();

		Format &		operator=( Format const & rhs );

		void	setSigned(bool);

		const std::string getName();
		bool	getSIgned();
		const int	getSignGrade();
		const int	getExecuteGrade();
	private:

		const std::string	_name;
		bool	_signed;
		const int	_gradeSign;
		const int	_gradeExecute;

};

std::ostream &			operator<<( std::ostream & o, Format const & i );

#endif /* ********************************************************** FORMAT_H */