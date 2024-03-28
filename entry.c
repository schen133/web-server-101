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
#include <sys/socket.h>
#include <strings.h>

// some constant
#define SERVER_PORT 2345


// web server entry 
// argc is the # of strings pointed to by argv, so basically # of character arrays argv is pointing to  
// there are no string, so a string would be an array of Characters I believe
int main(int argc, char **argv) {
  // first of all, it needs to sit there and just in idle
  // so we need a program that just runs infinitely until I call it quit
  // 
  // 1 is true, 0 is false
  printf("You have started the server, CTRL + c to quit");
  fflush(stdout);
  // TODO: Make program sit in a port, and then the while loop will be listening to ports
  // First thing to do here is, being able to successfully make a HTTP request to a port while
  // this server is running. -> then we can figure out how to parse the request and etc....
  // 
  
  // the program keeps running and is listening for requests
  // let's make a listener first. Using some header file library
  // I am listening to my local machine for now ofcourse. So this program I am writing right now
  // will notice any connection attempting to hit my local machine
  //
  // How we can achieve this is using a socket
  // The socket will be identified by an IP address concatenated with port number
  // The server waits for incoming client request to the port by listening to the same port.
  // Once it hits, since we were listening, the request is received. Then we do protocol logic....
  //
  
  int listenfd;
  
  if ( (listenfd = socket(AF_INET, SOCK_STREAM, 0)) > 0) {
    printf("socket created successfully");
  }
  else {
    printf("something went wrong...");
  } 
  fflush(stdout);
  
  // nice! socket created successfully, now make socket listen to a specific port
  
  while (1) {
    // TODO: Let's try to 
    
    // this sits here and litens for request coming in from the client
    // Parse request, identify request semantics
    // Then do whatever needed. Then we can respond with intended response from request
    // 
  


  }
}


// TODO: Need to think about how to implement sepcific
