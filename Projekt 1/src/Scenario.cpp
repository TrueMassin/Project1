#include "../include/Scenario.h"
#include "../include/Items.h"

/**
 * @author Maksymilian Malz
 */

 void initalizeScenes( Scene** scene )
 {
    for( int i = 0; i < NUMBER_OF_SCENES; ++i ) {
        scene[i] = new Scene;
    }
    scene[0]->writeScene( "Budzisz sie w ciemnym pomieszczeniu. Nie wiesz jak dlugo spales ani gdzie sie znajdujesz.", "", scene[2],
                        "Sproboj sobie przypomniec co sie stalo.", scene[3], "Rozejrzyj sie po pomieszczeniu" );
    scene[1]->writeScene( "Jestes w ciemnym pomieszczeniu.", "", scene[2], "Sproboj sobie przypomniec co sie stalo.",
                         scene[3], "Rozejrzyj sie po pomieszczeniu" );
    scene[2]->writeScene( "Bez skutku probojesz sobie przypomniec co sie stalo", "", scene[1], "Powrot." );
    scene[3]->writeScene( "Rozgladasz sie po pomieszczeniu. Po drugiej stronie dostrzegasz drzwi. Obok lezy mlotek.",
                         "Rozgladasz sie po pomieszczeniu. Po drugiej stronie dostrzegasz drzwi.", scene[4], "Sproboj otworzyc drzwi", scene[5],
                         "Podnies mlotek" );
    scene[4]->writeScene( "Drzwi sa zamkniete nie jestes w stanie ich otworzyc", "", scene[1], "Powrot" );
    scene[5]->writeScene( HAMMER, "", "Podnosisz mlotek.", scene[1], "Powrot" );
 }
