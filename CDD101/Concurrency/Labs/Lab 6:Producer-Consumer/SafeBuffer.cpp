#include "SafeBuffer.h"

/*! \class SafeBuffer
    \brief A SafeBuffer Implementation

   Uses Push and pop to add and remove an event from the buffer

*/

/*! \fn Constructor for the SafeBuffer

*/
SafeBuffer::SafeBuffer(){
  theMutex = std::make_shared<Semaphore>(1);
  theSemaphore = std::make_shared<Semaphore>(0);
}//ctor

/*! \fn push function to add events to the buffer

*/
int SafeBuffer::push(Event newEric){
  theMutex->Wait();
  theData.push_back(newEric);
  int size = theData.size();
  theMutex->Signal();
  theSemaphore->Signal();
  return size;
}//push

/*! \fn pop function to remove events from the buffer

*/
Event SafeBuffer::pop(){
  theMutex->Wait();
  // gets value at back
  Event e = theData.back();
  // removes value at back
  theData.pop_back();
  theMutex->Signal();
  return e;
}//pop

