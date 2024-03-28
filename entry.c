// A http server is a software that runs on computer and can handle HTTP request from clients
// and sends HTTP responses back
// In simple term, it's a program that serves web pages or some other things over the internet

// memory allocation and cleaning
// Types in C: 
// Char, Int, Float, Double, Short/Long
// Return 0 -> succcess
// Return 1 -> exit failure
// 
#include <stdio.h>
#include <stdlib.h>

// web server entry 
// argc is the # of strings pointed to by argv, so basically # of character arrays argv is pointing to  
// there are no string, so a string would be an array of Characters I believe
int main(int argc, char *argv[]) {
  // first of all, it needs to sit there and just in idle
  // so we need a program that just runs infinitely until I call it quit
  // 
  // 1 is true, 0 is false
  printf("You have started the server, CTRL + c to quit");
  fflush(stdout);
  // TODO: Make program sit in a port, and then the while loop will be listening to ports
  // First thing to do here is, being able to successfully make a HTTP request to a port while
  // this server is running. -> then we can figure out how to parse the request and etc....
  
  // the program keeps running and is listening for requests
  
  while (1) {
    // TODO: Let's try to 
    
    // this sits here and litens for request coming in from the client
    // Parse request, identify request semantics
    // Then do whatever needed. Then we can respond with intended response from request
    // 
  


  }
}


// TODO: Need to think about how to implement sepcific
