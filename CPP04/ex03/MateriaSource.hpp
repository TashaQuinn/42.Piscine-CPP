/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:04:07 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:05:18 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    static const int mat_size = 4;
    int _mat_nbr;
    AMateria *materials[MateriaSource::mat_size];
public:
    MateriaSource();
    MateriaSource(MateriaSource const &src);
    ~MateriaSource();

    MateriaSource &operator=(MateriaSource const &rhs);

    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif