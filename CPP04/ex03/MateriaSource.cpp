/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:03:55 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:03:56 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _mat_nbr = 0;
    for (int i = 0; i < MateriaSource::mat_size; i++)
        materials[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    for (int i = 0; i < MateriaSource::mat_size; i++)
    {
        if (src.materials[i])
            materials[i] = (src.materials[i])->clone();
        else
            materials[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < MateriaSource::mat_size; i++)
        delete materials[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < MateriaSource::mat_size; i++)
        {
            if(materials[i])
                delete materials[i];
            if(rhs.materials[i])
                materials[i] = rhs.materials[i];
            else
                materials[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (_mat_nbr < MateriaSource::mat_size)
        materials[_mat_nbr++] = m;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for(int i = 0; i < _mat_nbr; i++)
    {
        if(materials[i]->getType() == type)
            return materials[i]->clone();
    }
    return (NULL);
}