#include <iostream>            // for input/output operations
#include <string>              // for using basic string class to store messages in the chat application
#include <thread>              // for creating and managing multiple threads
#include <vector>              // for storing messages in the chat application
#include <mutex>               // for synchronizing access to the chat messages and preventing data race conditions
#include <chrono>              // for adding timestamps to chat messages 
#include <condition_variable>  // for signaling a change in the state of the chat messages