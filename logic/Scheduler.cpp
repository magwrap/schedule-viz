#include "Scheduler.h"

Scheduler::Scheduler()
    : currentlyProcessed(nullptr), previouslyProcessed(nullptr) {}

Process *Scheduler::getCurrentProcess() { return currentlyProcessed; }

void Scheduler::setCurrentProcess(Process *process) {
  currentlyProcessed = process;
}

Process *Scheduler::getPreviousProcess() { return previouslyProcessed; }

void Scheduler::setPreviousProcess(Process *process) {
  previouslyProcessed = process;
}
