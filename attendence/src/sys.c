#include"../include/common.h"

_time_t workTimesLimit = 0;
_time_t shiftUnit = 1;
int start(int argc,char*argv[])
{
  if(argc > 1)
  {
    sscanf(argv[1],"%u",workTimesLimit);
  }
  if(argc > 2)
  {
    sscanf(argv[2],"%u",shiftUnit);
  }
  timerInit(shiftUnit);
  int res = timerStart();
  if(res == 0)
  {

  }
  return 0;
}

