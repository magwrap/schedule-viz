#include "ProcessPool.h"
#include "Scheduler.h"
#include <iostream>

int main(int argc, char *argv[]) {
  ProcessPool pool;
  generateProcesses(pool, 5); // Create 5 processes in the pool

  Scheduler scheduler;

  // TODO: add enqueueing algorithm - it's based on which we choose
  //  Feed processes from the pool to the scheduler
  for (size_t i = 0; i < pool.size(); ++i) {
    scheduler.processQueue.push(&pool.getProcess(i));
  }

  // TODO: add scheduler behaviour - based on the alg we choose
  // Example of using the scheduler
  while (!scheduler.processQueue.empty()) {
    // Execute it every second
    Process *currentProcess = scheduler.processQueue.front();
    scheduler.processQueue.pop();

    scheduler.setCurrentProcess(currentProcess);

    // Simulate some processing
    currentProcess->setStatus(Process::Status::RUNNING);

    // Update process attributes
    currentProcess->setCompletionTime(10);
    currentProcess->setWaitingTime(2);
    currentProcess->setTurnaroundTime(4);

    currentProcess->setStatus(Process::Status::TERMINATED);

    scheduler.setPreviousProcess(currentProcess);
    pool.displayProcesses();
  }

  // Display final state of processes
  pool.displayProcesses();
}
