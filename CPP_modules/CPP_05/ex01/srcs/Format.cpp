#include "Format.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Format::Format()
{
}

Format::Format( const Format & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Format::~Format()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Format &				Format::operator=( Format const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Format const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */