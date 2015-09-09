#include <thread>
#include <unistd.h>
#include <iostream>

using namespace std;


void threadLoop ()
{
  for (int i = 0; i < 10; i++)
  {
    cout << "loop " << i << "\n" << flush;
    sleep(1);
  }
}


int main()
{
  thread looper(threadLoop);
  looper.join();
}
