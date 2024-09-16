// Process.h
#ifndef PROCESS_H
#define PROCESS_H

class Process {
public:
  enum class Status { NEW, READY, RUNNING, WAITING, TERMINATED };

  Process(); // Constructor
  Status getStatus() const;
  void setStatus(Status newStatus);

  int getProcessId() const;
  void setProcessId(int id);

  // process properties
  int getArrivalTime() const;
  void setArrivalTime(int time);

  int getBurstTime() const;
  void setBurstTime(int time);

  int getCompletionTime() const;
  void setCompletionTime(int time);

  int getTurnaroundTime() const;
  void setTurnaroundTime(int time);

  int getWaitingTime() const;
  void setWaitingTime(int time);

  int getResponseTime() const;
  void setResponseTime(int time);

  // execution
  int getExecutionStart() const;
  void setExecutionStart(int start);

  int getExecutionEnd() const;
  void setExecutionEnd(int start);

private:
  Status currentStatus;
  int processId;

  int arrival_time;     // time when the process appeared/was created
  int burst_time;       // time to complete the algorithm
  int completion_time;  // time the process terminated
  int turn_around_time; // Turnaround Time = Completion Time – Arrival Time
  int waiting_time;     // Waiting Time = Turnaround Time – Burst Time
  int response_time; // Response Time = Time it Started Executing – Arrival Time

  int execution_start;
  int execution_end; // redundant completion_time?
};

#endif
