#include <iostream>
#include "../include/User.h"
#include "../include/Scene.h"
using namespace std;

/**
 * @author Maksymilian Malz
 */

User::User()
{
    items = 0;
    choices = 0;
}
//*****************************************************

//*************************************************
void User::takeItem( const int item )
{
    items = items | item;
}
