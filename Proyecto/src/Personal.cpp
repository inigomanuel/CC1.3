#include "Personal.h"

Personal::Personal()
{
    nombre_empleado="";
    cargo="";
    codigo=0;
}

Personal::Personal(string nom, string carg,int cod)
{
    nombre_empleado=nom;
    cargo=carg;
    codigo=cod;
}
