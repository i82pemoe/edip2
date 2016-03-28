#ifndef DONANTE__HPP_
#define DONANTE__HPP_

#include <iostream>
#include <string>

#include "donanteInterfaz.hpp"
namespace ed{
class Donante:public DonanteInterfaz{
  private:
    string _nombre;
    string _apellido;
    string _grupoSanguineo;
    string _factorRH;

  public:

    inline Donante (string nombre = "", string apellido = "", string grupoSanguineo = "", string factorRH = "" ){
      setNombre(nombre);
      setApellido(apellido);
      setGrupoSanguineo(grupoSanguineo);
      setFactorRH(factorRH);
    }

    inline Donante(Donante const &p){
      setNombre(p.getNombre());
      setApellido(p.getApellido());
      setGrupoSanguineo(p.getGrupoSanguineo());
      setFactorRH(p.getFactorRH());
    }
    inline void setNombre(const string &nombre){
      _nombre = nombre;
    }
    inline void setApellido(const string &apellido){
      _apellido = apellido;
    }
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

    inline string getNombre() const {
      return _nombre;
    }

    inline string getApellido() const {
      return _apellido;
    }

    inline string getGrupoSanguineo() const {
      return _grupoSanguineo;
    }

    inline string getFactorRH() const {
      return _factorRH;
    }

    inline Donante &operator = (Donante const &p){
      setNombre(p.getNombre());
      setApellido(p.getApellido());
      setGrupoSanguineo(p.getGrupoSanguineo());
      setFactorRH(p.getFactorRH());

      return *this;
    }

    inline bool operator == (Donante const &p){
      if ((getNombre() == p.getNombre()) && (getApellido() == p.getApellido()) && (getGrupoSanguineo() == p.getGrupoSanguineo()) && (getFactorRH() == p.getFactorRH())){
        return true;
      }
      else{
        return false;
      }
    }

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
    void escribirDonante();
    void leerDonante();

    friend ostream &operator << (ostream &stream, Donante const &p);
    friend istream &operator >> (istream &stream, Donante &p);
};

}

#endif
