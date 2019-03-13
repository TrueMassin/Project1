#include <iostream>
#include "../include/Scene.h"

/**
 * @author Maksymilian Malz
 */
Scene::Scene()
{
    text = "";
    nextScenes[0] = 0;
    nextScenes[1] = 0;
    nextScenes[2] = 0;
    options[0] = "";
    options[1] = "";
    options[2] = "";
    itemToTake = 0;
    newText = "";
}
//*************************************************
void Scene::writeScene( string sceneText, string textReplace, Scene* firstOptionPtr, string firstOptionText, Scene* secondOptionPtr,
              string secondOptionText, Scene* thirdOptionPtr, string thirdOptionText )
{
    text = sceneText;
    nextScenes[0] = firstOptionPtr;
    nextScenes[1] = secondOptionPtr;
    nextScenes[2] = thirdOptionPtr;
    options[0] = firstOptionText;
    options[1] = secondOptionText;
    options[2] = thirdOptionText;
    newText = textReplace;
}
//****************************************************
void Scene::writeScene( int item, string sceneText, string textReplace, Scene* firstOptionPtr, string firstOptionText, Scene* secondOptionPtr,
              string secondOptionText, Scene* thirdOptionPtr, string thirdOptionText )
{
    text = sceneText;
    nextScenes[0] = firstOptionPtr;
    nextScenes[1] = secondOptionPtr;
    nextScenes[2] = thirdOptionPtr;
    options[0] = firstOptionText;
    options[1] = secondOptionText;
    options[2] = thirdOptionText;
    itemToTake = item;
    newText = textReplace;
}
void Scene::read()
{
    int j = 0;
    cout << text << endl << "----------------------------------------" << endl;
    for( int i = 0; i < NUMBER_OF_OPTIONS; ++i ) {
        if( nextScenes[i] ) {
            ++j;
            cout << j << ". " << options[i] << endl;
        }
    }
    cout << "----------------------------------------" << endl;
}
//****************************************************
Scene* Scene::getAdress( unsigned int i )
{
    if( i < NUMBER_OF_OPTIONS ) {
        return nextScenes[i];
    }
    return 0;
}
//****************************************************
void Scene::deleteScene( Scene* scene )
{
    for( int i = 0; i < NUMBER_OF_OPTIONS; ++i ) {
        if( scene == nextScenes[i] ) {
            delete nextScenes[i];
            nextScenes[i] = 0;
            options[i] = "";
            return;
        }
    }
}
