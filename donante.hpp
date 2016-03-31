/* \par Fichero: donante.hpp
  Representa la clase Donate
*/
#ifndef DONANTE__HPP_
#define DONANTE__HPP_

#include <iostream>
#include <string>

#include "donanteInterfaz.hpp"

//! \attention Se incluye la clase Donante dentro del espacio de nombres ed
namespace ed{

//! Defición de la clase Donante
class Donante:public DonanteInterfaz{
  //! \name atributos privados de la clase Donante
  private:
    string _nombre; //!< nombre del donante
    string _apellido; //!< apellidos del donante
    string _grupoSanguineo; //!< grupo sanguineo del donante
    string _factorRH; //!< factor RH del donante

  //! \name Métodos publicos de la clase Donante
  public:
     //! \name Constructores de la clase Donante

     /*!
			\brief Contructor que crea un donante por defecto
			\attention Función sobrecargada
			\note Los parámetros tienen valores por defecto
			\param nombre string, nombre del donante
			\param apellido string, apellido del donate
      \param grupoSanguineo string, grupo sanguineo del donante
      \param factorRH string, factor RH del donante
			\pre Ninguna
			\post Ninguna
		*/
    inline Donante (string nombre = "", string apellido = "", string grupoSanguineo = "", string factorRH = "" ){
      setNombre(nombre);
      setApellido(apellido);
      setGrupoSanguineo(grupoSanguineo);
      setFactorRH(factorRH);
    }

    /*!
     \brief Contructor que crea un donante a partir de otro donante
     \attention Función sobrecargada
     \param p Donante, Donante pasado por referencia
     \pre Ninguna
     \post Ninguna
   */
    inline Donante(Donante const &p){
      setNombre(p.getNombre());
      setApellido(p.getApellido());
      setGrupoSanguineo(p.getGrupoSanguineo());
      setFactorRH(p.getFactorRH());
    }

    /*!
      \brief Asigna un valor "nombre" al nombre de un donante
      \param nombre string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */
    inline void setNombre(const string &nombre){
      _nombre = nombre;
    }

    /*!
      \brief Asigna un valor "apellido" al apellido de un donante
      \param apellido string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */
    inline void setApellido(const string &apellido){
      _apellido = apellido;
    }

    /*!
      \brief Asigna un valor "grupoSanguineo" al grupoSanguineo de un donante
      \param grupoSanguineo string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */
    inline void setGrupoSanguineo(const string &grupoSanguineo){
      if ((grupoSanguineo == "") || (grupoSanguineo == "0") || (grupoSanguineo == "A") || (grupoSanguineo == "B") || (grupoSanguineo == "AB")){
        _grupoSanguineo = grupoSanguineo;
      }
      else{
        std::cout << "El grupo sanguineo no es valido";
        std::cout << "\n";
        _grupoSanguineo = "";
      }
    }

    /*!
      \brief Asigna un valor "factorRH" al factorRH de un donante
      \param factorRH string pasado por referencia constante
      \pre El donate debe existir anteriormente
      \post Ninguna
    */
    inline void setFactorRH(const string &factorRH) {
      if ((factorRH == "") || (factorRH == "positivo") || (factorRH == "negativo")){
        _factorRH = factorRH;
      }

      else{
        std::cout << "El factor RH no es valido";
        std::cout << "\n";
        _factorRH = "";
      }
    }

    /*!
      \brief Devuelve el nombre de un donante
      \return Nombre de un donante
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    inline string getNombre() const {
      return _nombre;
    }

    /*!
      \brief Devuelve el apellido de un donante
      \return Apellido de un donate
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    inline string getApellido() const {
      return _apellido;
    }

    /*!
      \brief Devuelve el grupo sanguineo de un donante
      \return grupoSanguineo de un polinomio
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    inline string getGrupoSanguineo() const {
      return _grupoSanguineo;
    }

    /*!
      \brief Devuelve el factor RH de un donante
      \return factorRH de un donante
      \pre El donante debe existir anteriormente
      \post Ninguna
    */
    inline string getFactorRH() const {
      return _factorRH;
    }

    /*!
			\brief Operador de copia de un donante en otro
			\attention Se sobrecarga el operador de asignacion
			\param p Donante pasado por referencia constante
			\pre El donante debe existir
			\post Ninguna
		*/
    inline Donante &operator = (Donante const &p){
      setNombre(p.getNombre());
      setApellido(p.getApellido());
      setGrupoSanguineo(p.getGrupoSanguineo());
      setFactorRH(p.getFactorRH());

      return *this;
    }

    /*!
			\brief Operador de comparacion de igualdad
			\attention Se sobrecarga el operador de comparacion
			\param p Donante pasado por referencia constante
			\pre El donante debe existir
			\post Ninguna
		*/
    inline bool operator == (Donante const &p){
      if ((getNombre() == p.getNombre()) && (getApellido() == p.getApellido())){
        return true;
      }
      else{
        return false;
      }
    }

    /*!
			\brief Operador de comparacion
			\attention Se sobrecarga el operador de comparacion
			\param p Donante pasado por referencia constante
			\pre El donante debe existir
			\post Ninguna
		*/
    inline bool operator <= (Donante const &p){
      if (getApellido() < p.getApellido())
        return true;

      if (getApellido() == p.getApellido())
        if (getNombre() < p.getNombre())
          return true;
        else
          return false;
      else
        return false;
    }

    /*!
			\brief Escribe los datos de un donante por pantalla
			\pre El donante debe existir
			\post Ninguna
		*/
    void escribirDonante();

    /*!
      \brief Asigna lee por teclado los datos de un donante
      \pre El donante debe existir
      \post Ninguna
      \sa setGrado(), setCoeficiente()
    */
    void leerDonante();

    /*!
			\brief Sobrecarga del operador de salida "<<"
			\attention Funcion amiga de la clase Donante
			\param stream ostream, flujo de salida
			\param p Donante, pasado por referencia constante
			\pre El donante debe existir
			\post Se escribe por pantalla los datos del donante
			\sa operator >>
		*/
    friend ostream &operator << (ostream &stream, Donante const &p);

    /*!
      \brief Sobrecarga del operador de entrada ">>"
      \attention Funcion amiga de la clase Donante
      \param stream istream, flujo de entrada
      \param p Donante, pasado por referencia
      \pre El monomio debe existir
      \post Se lee por teclado los datos de un donante
      \sa operator <<
    */
    friend istream &operator >> (istream &stream, Donante &p);
};

}

#endif
