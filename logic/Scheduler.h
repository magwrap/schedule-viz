#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "Process.h"
#include <memory>
#include <queue>

class Scheduler {
public:
  Scheduler();
  Process *getCurrentProcess();
  void setCurrentProcess(Process *process);
  Process *getPreviousProcess();
  void setPreviousProcess(Process *process);
  std::queue<Process *> processQueue;

private:
  Process *currentlyProcessed;
  Process *previouslyProcessed;
};

#endif
