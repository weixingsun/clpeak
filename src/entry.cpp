#include <clpeak.h>

int main(int argc, char **argv)
{
  clPeak clObj;

  clObj.parseArgs(argc, argv);

  //return clObj.runAll();
  return clObj.runLoop(5);
}
