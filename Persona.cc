# include " Person.hh "

Person :: Person ( unsigned  int armsCount, std :: string name, std :: string job, Gender gender)
{
    esto -> armsCount = armsCount;
    esto -> nombre = nombre;
    esto -> trabajo = trabajo;
    esto -> género = género;
}

Persona :: ~ Persona ()
{
    std :: cout << " Eliminar persona " << std :: endl;
}

unsigned  int  Person :: GetArmsCount () const
{
    return armsCount;
}

std :: string Person :: GetName () const
{
    nombre de retorno ;
}

std :: string Person :: GetJob () const
{  
    trabajo de regreso ;
}

Persona de género :: GetGender () const
{  
    retorno de género;    
}

 const  char * Person :: GetGenderStr () const
{  
    devolver género == 0 ? " masculino " : género == 1 ? " femenino " : " Ninguno " ;  
}