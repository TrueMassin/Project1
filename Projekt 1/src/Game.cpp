#include "../include/Game.h"
#include "../include/Scene.h"

/**
 * @author Maksymilian Malz
 */

 void Game::changeScene( unsigned int number )
 {
     Scene* ptr;
     prevScene = currentScene;
     if( number <= NUMBER_OF_OPTIONS && number > 0  && sceneChange ) {
        --number;
        ptr = currentScene->getAdress( number );
        if( ptr ){
            currentScene = ptr;
        }
     }
 }
 //*************************************************
 void Game::execute()
 {
     Scene* tmp;
     currentScene->read();
     sceneChange = true;
     if( currentScene->itemToTake ) {
        user.takeItem( currentScene->itemToTake );
        tmp = currentScene;
        currentScene = prevScene;
        currentScene->changeText();
        prevScene->deleteScene( tmp );
        sceneChange = false;
     }
 }
//************************************************
Game::Game( Scene* scene )
{
    currentScene = scene;
    prevScene = 0;
    sceneChange = true;
}
