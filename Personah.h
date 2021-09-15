# pragma once
# include  <cadena>
# include  < iostream >
# include  "Sexo.hh"

 persona de clase
{
privado:
   unsigned  int armsCount {};
   std :: nombre de la cadena;
   std :: trabajo de cadena;
   Género género {masculino};

público:
    Person ( unsigned  int amrsCount, std :: string name, std :: string job, Gender gender);
    ~ Persona ();

    unsigned  int  GetArmsCount () const ;
    std :: string GetName () const ;
    std :: string GetJob () const ;
    Género GetGender () const ;
    const  char * GetGenderStr () const ;
};