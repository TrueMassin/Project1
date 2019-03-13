#ifndef GAME_H
#define GAME_H
#include "Scene.h"
#include "User.h"

/**
 * @author Maksymilian Malz
 */

 class Game {
        User user;
        Scene* prevScene;
        Scene* currentScene;
        bool sceneChange;
    public:
        Game( Scene* scene );
        void changeScene( unsigned int number );
        void execute();
 };
#endif // GAME_H
