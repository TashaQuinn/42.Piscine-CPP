/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:36:40 by jbania            #+#    #+#             */
/*   Updated: 2022/11/08 22:16:31 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm> //find
# include <stdexcept>
# include <iterator>
# include <vector>
# include <list>
# include <iostream>

template <typename T>
typename T::iterator easyFind(T &container, int target) {
    
	typename T::iterator it = std::find(container.begin(), container.end(), target);

	if (it == container.end())
		throw std::invalid_argument("easyFind::Container does not contain the target element!");
		
	return (it);
    
}

#endif
