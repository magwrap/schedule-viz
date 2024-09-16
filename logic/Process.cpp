// Process.cpp
#include "Process.h"

// constructor
Process::Process() : currentStatus(Status::NEW) {}

// get Status
Process::Status Process::getStatus() const { return currentStatus; }

// set Status
void Process::setStatus(Status newStatus) { currentStatus = newStatus; }
// set Status
//
int Process::getProcessId() const { return processId; };
void Process::setProcessId(int id) { processId = id; };

// process properties
int Process::getArrivalTime() const { return arrival_time; };
void Process::setArrivalTime(int time) { arrival_time = time; };

int Process::getBurstTime() const { return burst_time; };
void Process::setBurstTime(int time) { burst_time = time; };

int Process::getCompletionTime() const { return completion_time; };
void Process::setCompletionTime(int time) { completion_time = time; };

int Process::getTurnaroundTime() const { return turn_around_time; };
void Process::setTurnaroundTime(int time) { turn_around_time = time; };

int Process::getWaitingTime() const { return waiting_time; };
void Process::setWaitingTime(int time) { waiting_time = time; };

int Process::getResponseTime() const { return response_time; };
void Process::setResponseTime(int time) { response_time = time; };

// execution
int Process::getExecutionStart() const { return execution_start; };
void Process::setExecutionStart(int start) { execution_start = start; };

int Process::getExecutionEnd() const { return execution_end; };
void Process::setExecutionEnd(int start) { execution_end = start; };
