// Process.cpp
#include "Process.h"

// constructor
Process::Process() : currentStatus(Status::NEW) {}

Process::Status Process::getStatus() const { return currentStatus; }

void Process::setStatus(Status newStatus) { currentStatus = newStatus; }
