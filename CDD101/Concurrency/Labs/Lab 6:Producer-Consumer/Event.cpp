#include "Event.h"
#include <iostream>
#include <stdlib.h>

/*! \class Event
    \brief A Event Implementation
*/

/*! \fn Function to output event that is being added to the SafeBuffer
 */
Event::Event(){
  eric = 'a'+rand()%26;
  std::cout << eric;
}

/*! \fn Function to output consumed event
 */
bool Event::consume(){
  char betterEric = eric-32;
  std::cout << betterEric;
}
