/* \par Fichero: donanteInterfaz.hpp
  Representa la clase abstracta DonanteInterfaz
*/

#ifndef DONANTEINTERFAZ__HPP_
#define DONANTEINTERFAZ__HPP_

#include <iostream>
#include <string>

using namespace std;

namespace ed{
  //! Definición de la clase DonanteInterfaz
class DonanteInterfaz{
  //! \name Métodos públicos de la clase DonanteInterfaz
  public:
    /*!
      \brief Asigna un valor "nombre" al nombre de un donante
      \param nombre string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */
    virtual void setNombre(const string &nombre) = 0;

    /*!
      \brief Asigna un valor "apellido" al apellido de un donante
      \param apellido string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */
    virtual void setApellido(const string &apellido) = 0;

    /*!
      \brief Asigna un valor "grupoSanguineo" al grupoSanguineo de un donante
      \param grupoSanguineo string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */
    virtual void setGrupoSanguineo(const string &grupoSanguineo) = 0;

    /*!
      \brief Asigna un valor "factorRH" al factorRH de un donante
      \param factorRH string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */

    virtual void setFactorRH(const string &factorRH)=0;

    /*!
      \brief Devuelve el nombre de un donante
      \return Nombre de un donante
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    virtual string getNombre() const = 0;

    /*!
      \brief Devuelve el apellido de un donante
      \return Apellido de un donate
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    virtual string getApellido() const = 0;

    /*!
      \brief Devuelve el grupo sanguineo de un donante
      \return grupoSanguineo de un polinomio
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    virtual string getGrupoSanguineo() const = 0;

    /*!
      \brief Devuelve el factor RH de un donante
      \return factorRH de un donante
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    virtual string getFactorRH() const = 0;
  };
}



#endif
