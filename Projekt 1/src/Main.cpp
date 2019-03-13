#include <iostream>
#include "../include/User.h"
#include "../include/Scene.h"
#include "../include/Display.h"
#include "../include/Game.h"
#include "../include/Scenario.h"
using namespace std;
/**
 * @author Maksymilian Malz
 */

 int main()
 {
    Scene** scene = new Scene*[ NUMBER_OF_SCENES ];
    initalizeScenes( scene );
    Game game( scene[0] );
    int choice = NUMBER_OF_OPTIONS + 1;
    do {
        game.changeScene( choice );
        game.execute();
        choice = NUMBER_OF_OPTIONS + 1;
        cin >> choice;
        cin.clear();
        cin.sync();
    } while( choice );
    for( int i = 0; i < NUMBER_OF_SCENES; ++i ) {
        delete scene[i];
    }
    delete scene;
 }
