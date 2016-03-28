#ifndef DONANTEINTERFAZ__HPP_
#define DONANTEINTERFAZ__HPP_

#include <iostream>
#include <string>

using namespace std;
namespace ed{
class DonanteInterfaz{
  public:
    virtual void setNombre(const string &nombre) = 0;
    virtual void setApellido(const string &apellido) = 0;
    virtual void setGrupoSanguineo(const string &grupoSanguineo) = 0;
    virtual void setFactorRH(const string &factorRH)=0;

    virtual string getNombre() const = 0;
    virtual string getApellido() const = 0;
    virtual string getGrupoSanguineo() const = 0;
    virtual string getFactorRH() const = 0;
  };
}



#endif
