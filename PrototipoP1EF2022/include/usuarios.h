#ifndef USUARIOS_H
#define USUARIOS_H
#include <iostream>
using namespace std;

class usuarios
{
    public:
        usuarios();
        virtual ~usuarios();
        bool loginUsuarios();
        void menuUsuarios();
        string USER = "csandovalc1";
        string PASS = "efp1";
    protected:

    private:

};

#endif // USUARIOS_H
