#ifndef PROCESS_POOL_H
#define PROCESS_POOL_H

#include "Process.h" // Make sure to include the Process class definition
#include <iostream>
#include <vector>

class ProcessPool {
public:
  void addProcess(const Process &process);
  Process &getProcess(size_t index);

  size_t size() const;
  void shuffle();

  void displayProcesses(std::ostream &out = std::cout) const; // New function

private:
  std::vector<Process> processes;
};

void generateProcesses(ProcessPool &pool, int num);

#endif // PROCESS_POOL_H
