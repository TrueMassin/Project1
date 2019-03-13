#ifndef SCENE_H
#define SCENE_H
#include <string>
#define NUMBER_OF_OPTIONS 3

using namespace std;

/**
 * @author Maksymilian Malz
 */

 class Scene {
        string text;
        Scene* nextScenes[ NUMBER_OF_OPTIONS ];
        string options[ NUMBER_OF_OPTIONS ];
        string newText;
    public:
        int itemToTake;
        Scene();
        void writeScene( string sceneText, string textReplace, Scene* firstOptionPtr = 0, string firstOptionText = "", Scene* secondOptionPtr = 0,
              string secondOptionText = "", Scene* thirdOptionPtr = 0, string thirdOptionText = "" );
        void writeScene( int item, string sceneText, string textReplace, Scene* firstOptionPtr = 0, string firstOptionText = "", Scene* secondOptionPtr = 0,
              string secondOptionText = "", Scene* thirdOptionPtr = 0, string thirdOptionText = "" );
        void read();
        Scene* getAdress( unsigned int i );
        void deleteScene( Scene* scene );
        void changeText(){ text = newText; };
 };
#endif // SCENE_H
