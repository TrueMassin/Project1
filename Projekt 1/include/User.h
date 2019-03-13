#ifndef USER_H
#define USER_H
#include "Scene.h"

/**
 * @author Maksymilian Malz
 */

class User {
        int items;
        int choices;
    public:
        User();
        void takeItem( const int item );
};
#endif // USER_H
